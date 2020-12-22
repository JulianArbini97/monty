#include "monty.h"

/**
 * division - adds the top two elements of the stack.
 * @stack: head of stack
 * @line_number: current line number in file
 */
void division(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		f_list(vari.mystack);
		fclose(vari.fil);
		exit(EXIT_FAILURE);
	}

	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		f_list(*stack);
		exit(EXIT_FAILURE);
	}

	else
	{
		(*stack)->next->n = (*stack)->next->n / (*stack)->n;
		(*stack)->prev = NULL;
		free(*stack);
		*stack = (*stack)->next;

	}
}
