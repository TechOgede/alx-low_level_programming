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
	int a, b, error = 0;
	int (*op_ptr)(int, int);
	int opr = *argv[2];

	if (argc != 4)
	{	printf("Error\n");
		exit(98);
	}
	if (opr != 43 && opr != 45 && opr != 42 && opr != 47 && opr != 37)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((opr == '/' || opr == '%') && b == 0)
	{	printf("Error\n");
		exit(100);
	}

	op_ptr = get_op_func(*(argv + 2));
	(op_ptr != NULL) ? printf("%d\n", op_ptr(a, b)): error++;

	return (0);


}
