#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
	int num;
	bool error = false;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	} 

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num <= 0)
		{
			error = true;
			break;
		}
		sum += num;
	}
	if (error)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);

	return (0);
}
