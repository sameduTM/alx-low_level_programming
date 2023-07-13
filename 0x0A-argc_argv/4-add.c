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
	int num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	} 

	for(i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
			break;
		}
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
