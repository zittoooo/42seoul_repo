app.out: main.o ft_putchar.o rush01.o
	gcc -Wall -Wextra -Werror -o app.out main.o ft_putchar.o rush01.o

main.o: func.h main.c
	gcc -Wall -Wextra -Werror -c -o main.o main.c

rush01.o: func.h rush01.c
	gcc -Wall -Wextra -Werror -c -o rush01.o rush01.c

ft_putchar.o: ft_putchar.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar.o ft_putchar.c

