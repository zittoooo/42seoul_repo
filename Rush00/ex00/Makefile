app.out: main.o ft_putchar.o rush00.o
	gcc -Wall -Wextra -Werror -o app.out main.o ft_putchar.o rush00.o

main.o: func.h main.c
	gcc -Wall -Wextra -Werror -c -o main.o main.c

rush00.o: func.h rush00.c
	gcc -Wall -Wextra -Werror -c -o rush00.o rush00.c

ft_putchar.o: ft_putchar.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar.o ft_putchar.c

