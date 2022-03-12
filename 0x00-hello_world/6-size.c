#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints quote
 *
 * Returs: Zero on success
 *
 */
int main(void)
{
       	char acharacter;
	int aintiger;
	long along;
	long long alonglog;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter))
	printf("Size of an int: %lu byte(s)\n", sizeof(aintiger)
	printf("Size of a long int: %lu byte(s)\n", sizeof(along))
        printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat);

	return (0);
i}
=======
  * main - Prints the sizeof many var types
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
>>>>>>> ea7c8ef658bc3bb4512466aa3adff1ba8708a3c0
