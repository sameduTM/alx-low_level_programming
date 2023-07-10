#include <stdio.h>
#include <stdlib.h>
/**
  * main - checks the code
  * @argc: checks no. of args passed
  * @argv: points to array of strings
  *
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
	} else
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}

	return (0);
}
