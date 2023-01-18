#include "3-calc.h"
#include<stdlib.h>
/**
* main - Entry point
* @argc: num of arguments
* @argv: array of pointers to pointers that point to the args
* Return: 0 if successful
*/

int main(int argc, char **argv)
{
	int a, b;
	int (*op_ptr)(int, int);
	char *opr = argv[2];

	if (argc != 4)
	{	printf("Error\n");
		exit(98);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*opr == '/' || *opr == '%') && b == 0)
	{	printf("Error\n");
		exit(100);
	}

	op_ptr = get_op_func(argv[2]);
	if (op_ptr == NULL)
	{
		printf("Error\n");
		exit(99);

	}
	printf("%d\n", op_ptr(a, b));

	return (0);


}
