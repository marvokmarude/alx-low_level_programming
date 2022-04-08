#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
<<<<<<< HEAD

printf("Size of a char: %d byte(s)\n", sizeof(char));

printf("Size of an int: %d byte(s)\n", sizeof(int));

printf("Size of a long int: %d byte(s)\n", sizeof(long int));

printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));

printf("Size of a float: %d byte(s)\n", sizeof(float));

return (0);

=======
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));

	return (0);
>>>>>>> 978f8b6581eb3f74789ab29b0c68546ef9f7934b
}
