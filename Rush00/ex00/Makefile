app.out: main.o ft_putchar.o rush00.o
	gcc -o app.out main.o ft_putchar.o rush00.o

main.o: func.h main.c
	gcc -c -o main.o main.c

rush00.o: func.h rush00.c
	gcc -c -o rush00.o rush00.c

ft_putchar.o: ft_putchar.c
	gcc -c -o ft_putchar.o ft_putchar.c

