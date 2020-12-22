#include "monty.h"
var_1 vari;

/**
 * f_list - runs monty interpreter
 * @mystack: argument count
 * Return: return -1 if failed, else 1
 */
void f_list(stack_t *mystack)
{

	stack_t *temp = mystack;

	if (mystack == NULL)
		return;
	while (temp)
	{
		mystack = mystack->next;
		free(temp);
		temp = mystack;
	}
	mystack = NULL;
}
