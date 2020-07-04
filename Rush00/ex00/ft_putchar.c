#include <unistd.h>
#include "func.h"

void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}
