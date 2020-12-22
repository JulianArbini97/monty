#include "monty.h"

/**
 * pint - Prints the value at top of the stack
 * @stack: Doubly linked list
 * @line_number: Number's line
 * Return: Nothing
 */

void pint(stack_t **stack, unsigned int line_number)
{

	(void)line_number;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", line_number);
		f_list(vari.mystack);
		fclose(vari.fil);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}
