app.out: main.o ft_putchar.o rush02.o
	gcc -Wall -Wextra -Werror -o app.out main.o ft_putchar.o rush02.o

main.o: func.h main.c
	gcc -Wall -Wextra -Werror -c -o main.o main.c

rush01.o: func.h rush02.c
	gcc -Wall -Wextra -Werror -c -o rush02.o rush02.c

ft_putchar.o: ft_putchar.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar.o ft_putchar.c

