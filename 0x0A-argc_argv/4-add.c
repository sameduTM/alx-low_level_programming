#include <stdio.h>
#include <stdlib.h>
/**
  * main - checks the code
  * @argc: counts no. of argument
  * @argv: points to the number of arrays of strings
  *
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	int i;
	int sum;

	if (argc <= 1)
	{
		printf("0\n");
	} 

	while (argc--)
	{
		if (*argv[i] < '0' && *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
