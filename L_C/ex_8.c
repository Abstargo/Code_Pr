#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < argc; i++)
	{
		print_letters(argv[i]);
	}
}

/* arg[] in the print_letters function represents 
 * the string passed from argv[i] in the print_arguments 
 * function. They both refer to the same memory location 
 * and contain the same characters.
 */
void print_letters(char arg[])
{
	int i = 0;

	for(i = 0; arg[i] != '\0'; i++)
	{
		char ch = arg[i];
		// The %d specifier is used to print the ASCII value 
		// of the character ch.
		if(can_print_it(ch)) 
		{
			printf("'%c' == %d ", ch, ch);
		}
	}

	printf("\n");
}

// the 2 functions inside the the can_print_it is used by calling the ctype header.
int can_print_it(char ch)
{
	return (isalpha(ch) || isblank(ch));
}
// In C, when you call a function, you don't 
// need to specify the types of the arguments again.
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return (0);
}
