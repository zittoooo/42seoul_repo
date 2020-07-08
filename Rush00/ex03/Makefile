app.out: main.o ft_putchar.o rush03.o
	gcc -Wall -Wextra -Werror -o app.out main.o ft_putchar.o rush03.o

main.o: func.h main.c
	gcc -Wall -Wextra -Werror -c -o main.o main.c

rush00.o: func.h rush03.c
	gcc -Wall -Wextra -Werror -c -o rush03.o rush03.c

ft_putchar.o: ft_putchar.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar.o ft_putchar.c

