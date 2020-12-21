#include "monty.h"

/**
 * swap - Swap the two top element of stack
 * @stack: Doubly linked list
 * @line_number: Line's number
 * Return: Nothing
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1;

	if(!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		f_list(vari.mystack);
		fclose(vari.fil);
		exit(EXIT_FAILURE);
	}
	temp1 = (*stack)->next;
	(*stack)->next = temp1->next;
	if(temp1->next)
		temp1->next->prev = (*stack);
	(*stack)->prev = temp1->prev;
	temp1->prev = NULL;
	temp1->next = (*stack);
	(*stack) = temp1;
}

