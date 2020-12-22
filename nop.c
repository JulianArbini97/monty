#include "monty.h"

/**
 * nop - Entry point
 * @line_number: execute opcode function
 * @stack: double pointer that point to 2d array
 * Return: no thing
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void) (*stack);
	(void) line_number;
}
