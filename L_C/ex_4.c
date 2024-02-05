#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	/*
	 * An integer Array 'numbers' is initialized with the first element
	 * set to 7, and a character array name is initialized with the 
	 * first element set to 'a'. The rest of the elements in both 
	 * arrays are implicitly initialized to 0 for integers 
	 * and '\0' for characters.
	 */
	int numbers[4] = {7};
	char name[4] = {'a'};

	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);

	printf("name: %s\n", name);

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);

	printf("name: %s\n", name);

	/* char *another = "name". The first one is less 
	 * common and the second is what you should use for
	 * string literals like this.
	 */
	char *another = "Zed";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n",
			another[0], another[1],
			another[2], another[3]);

	return (0);
}
