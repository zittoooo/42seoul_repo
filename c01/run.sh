#!/bin/bash

if [ "$1" != "nc" ]
then
  CYAN='\033[1;36m'
  LCYAN='\033[0;34m'
  GRAY='\033[1;30m'
  NC='\033[0m' # No Color
  PURPLE='\033[0;32m'
fi

function printline()
{
  echo -e ${GRAY}'------------------------------------------------------------'${NC}
}

function printsharp()
{
  echo "##"
}

function printdoubleline()
{
  echo ""
  echo ""
  echo ""
  echo '============================================================'
}
function printhead()
{
  printdoubleline
  echo -e ${CYAN}'##' "$1" 테스트를 시작합니다.${NC}
}
function printmsg()
{
  echo ""
  echo '>>>' "$1"
}
function printcontent()
{
  echo '##' 실행 명령 : "$1"
  eval $1
}



echo $SHELL
im_relative=`dirname $0`
cd $im_relative
GENERATED_PATH=`pwd -P`
cd ..
PROJECT_PATH=`pwd -P`

# echo ${GENERATED_PATH}
# echo ${PROJECT_PATH}



cd ${PROJECT_PATH}

EX_FOLDERS=`find . -type d -regex '.*ex[0-9]\{2\}'`
EX_FOLDERS_ARRAY=($EX_FOLDERS)
EX_COUNT=${#EX_FOLDERS_ARRAY[@]}
PROJECT_NAME=`pwd | sed -E 's/[\/]+(.+\/)+//'`

cd ${GENERATED_PATH}
mkdir src build
cd src
echo $EX_FOLDERS_ARRAY
for folder in "${EX_FOLDERS_ARRAY[@]}"
do

	exname=`echo ${folder} | sed 's/\.\///'`
	source_path=${PROJECT_PATH}/${exname}
	filelist=`ls $source_path`
	filename=`ls -l ${source_path} | sed '1d' | awk '{print $NF}'`

	# echo $filelist
	funcname=`echo $filelist | sed 's/\.c//g' `
	# echo $funcname
    ccount=`echo "$filelist" | wc -w | sed 's/[[:blank:]]//g'`
	if [ ${ccount} == "0" ]
	then
		echo "${source_path}에 소스파일이 존재하지 않습니다."
		continue
	fi
	# c 파일 작성

	test_code=`cat ${GENERATED_PATH}/testcode | sed -n -e "/${exname}:/,/^[^ ]*:/p" | sed -e "$ d" -e "1d"`
	test_expected=`cat ${GENERATED_PATH}/testcode | sed -n -e "/${exname}-expected:/,/^[^ ]*:/p" | sed -e "$ d" -e "1d"`
	func_def=`cat ${source_path}/${filename} | grep "^[^/]*${funcname}" | tr -d '{}' | sed 's/\(.*\)/\1/'`";"
	# cd ${GENERATED_PATH}/src




	main_code=`echo "#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

${func_def}

void printmsg(const char *msg, ...)
{
	char *newstr = (char *)malloc(strlen(msg) + 2);
	strcpy(newstr, msg);
	strcat(newstr, \"\n\");

	va_list args;
	va_start(args, msg);
	vprintf(newstr, args);
	va_end(args);
	// printf(\"%s\n\", msg);
	free(newstr);
}

void printline()
{
	printf(\"\n------------------------------------------------------------\n\");
}

void print_testing(const char *code)
{
	printmsg(\"\n## testing code :\");
	printf(\"%s\", code);
}

int main()
{
	${test_code}
}

"`
	printhead "${exname} 테스트를 시작합니다."
	printline
	echo -n ">>> $exname 테스트용 main 파일 작성중 ..."
	echo "${main_code}" > ${PROJECT_NAME}-${exname}-test-main.c
	gcc -o "${GENERATED_PATH}/build/${PROJECT_NAME}-${exname}-test-main.o" \
		${GENERATED_PATH}/src/${PROJECT_NAME}-${exname}-test-main.c \
		${source_path}/${filename}

	echo "완료"

	printmsg "테스트 코드"
	echo "${test_code}"
	printmsg "테스트 기댓값"
	echo "${test_expected}"
	printline
	printmsg "테스트 결과"
	${GENERATED_PATH}/build/${PROJECT_NAME}-${exname}-test-main.o

	# 빌드 후 bulid 폴더에 저장



done

echo $test_main_first
# 빌드 폴더에 있는 것 전부 실행