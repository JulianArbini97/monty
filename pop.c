#include "monty.h"

/**
 * pop - Pop an element into a linked list
 * @stack: Doubly linked list
 * @line_number: Number of line
 * Return: Nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

        if (!stack)
	{
		fprintf(stderr,"L%i: can't pop an empty stack", line_number);
		f_list(vari.mystack);
		fclose(vari.fil);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack);
	(*stack) = (*stack)->next;
	free(tmp);
}


