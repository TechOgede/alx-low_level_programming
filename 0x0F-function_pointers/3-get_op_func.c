#include "3-calc.h"

/**
* get_op_func - get an operation function
* @s: operator symbol
*
* Description: accesses each op function from an array of
* structs in which one member is a function pointer
* Return: a function pointer
*/

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
			    };
	for (i = 0; i < 5; i++)
	{
		if (s != NULL && *s == *(ops[i].op))
			return (ops[i].f);
	}
	return (NULL);


}
