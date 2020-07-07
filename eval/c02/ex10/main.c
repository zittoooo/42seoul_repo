#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <stdarg.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)

{

		char o[20];

			printf("returned - %lu, string - %s \n", strlcpy(o, "abcdef", 10L), o);

				printf("returned - %lu, string - %s \n", strlcpy(o, "123456", 6L), o);

					printf("returned - %lu, string - %s \n", strlcpy(o, "abcedf", 7L), o);

						printf("returned - %lu, string - %s \n", strlcpy(o, "123456", 3L), o);

							printf("returned - %lu, string - %s \n", strlcpy(o, "abcef", 0L), o);

								

								printf("\n");


										printf("returned - %u, string - %s \n", ft_strlcpy(o, "abcdef", 10L), o);

									printf("returned - %u, string - %s \n", ft_strlcpy(o, "123456", 6L), o);

										printf("returned - %u, string - %s \n", ft_strlcpy(o, "abcedf", 7L), o);

											printf("returned - %u, string - %s \n", ft_strlcpy(o, "123456", 3L), o);

												printf("returned - %u, string - %s \n", ft_strlcpy(o, "abcef", 0L), o);

}
