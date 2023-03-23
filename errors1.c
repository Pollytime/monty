#include "monty.h"

int unknown_op_error(char *opcode, unsigned int line_number)
int no_int_error(unsigned int line_number)
int f_open_error(char *filename)
int usage_error(void)
int malloc_error(void)

/** unknown_op_error -prints any unknown instructions messages
 * @opcode: operation to perform
 * @line_number: bytecodes where eror occured.
 *
 * Return: EXIT_FAILURE Always.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprint(, "L%u: Unknown operation %s/n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - Prints invalid monty_push argument error messages.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * f_open_error - Prints file opening error messages w/ file name.
 * @filename: Name of file failed to open
 *
 * Return: (EXIT_FAILURE) always.
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
/**
 * usage_error - Prints usage error messages.
 *
 * Return: (EXIT_FAILURE) always.
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
/**
 * malloc_error - Prints malloc error messages.
 *
 * Return: (EXIT_FAILURE) always.
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}
