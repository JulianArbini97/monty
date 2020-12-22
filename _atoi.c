#include "monty.h"

var_1 vari;

/**
 * _atoi - convert a string of digit to integer type
 * @str: str will be passed.
 * Return: the number or exit with error.
 */
int _atoi(char *str)
{
	int ret = 0;
	int i = 0;
	int check1 = 1;
	int check2 = 1;

	if (str[0] == '-' && str[1] != '\0')
	{
		i = 1;
		check1 = 0;
	}
	else if (str[0] == '+' && str[1] != '\0')
		i = 1;
	for (; check2; i++)
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			if (check1)
			{
				ret = (ret * 10 + (str[i] - '0'));
			}
			else
			{
				ret = (ret * 10 - (str[i] - '0'));
			}
		}
		else if (str[i] == '\0' && i != '\0')
			check2 = 0;
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n",
				vari.line_number);
			fclose(vari.fil);
			f_list(vari.mystack);
			exit(EXIT_FAILURE);
		}
	}
	return (ret);
}
