#include "monty.h"

var_1 vari;

/**
 * exec - Entry point
 * Description: execute opcode function
 * @array: double pointer that point to 2d array
 * Return: no thing
 */

void run(char (*refer)[100])
{
	unsigned int i = 0;
	int j = 0;
     instruction_t funcs[] = {
         {"push", push},
         {"pall", pall},
         {"pint", pint},
         {"pop", pop},
         {"nop", nop},
         {"swap", swap},
         {NULL, NULL},
     };
     for (j = 0; j < 8; j++)
     {
         if(strcmp(funcs[j].opcode, refer[0]) == 0)
         {
             vari.num = refer[1];

	     for (i = 0; i < strlen(vari.num); i++)
	     {
		     if (vari.num[i] < 47 || vari.num[i] > 58)
		     {
			     fprintf(stderr,"L%d: usage: push integer\n", vari.line_number);
			     fclose(vari.fil);
			     f_list(vari.mystack);
			     exit(EXIT_FAILURE);
		     }
	     }

             funcs[j].f(&(vari.mystack), vari.line_number);
             return;
         }

	 else if (j == 7)
	 {
		 fprintf(stderr, "L%u: unknown instruction %s\n", vari.line_number, refer[0]);
		 fclose(vari.fil);
		 f_list(vari.mystack);
		 exit(EXIT_FAILURE);
	 }
     }
}
