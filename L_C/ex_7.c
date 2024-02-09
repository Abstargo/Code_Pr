#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("ERROR: You need one argument.\n");

		return (1);
	}

	int i = 0;
	/* It initializes the loop counter i to 0, and then 
	 * it checks if the character at index i of the first 
	 * command-line argument (argv[1][i]) is not equal to 
	 * the null terminator '\0'.
	 */
	for(i = 0; argv[1][i] != '\0'; i++)
	{
		char letter = argv[1][i];

		switch(letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;

			case 'E':
			case 'e':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;

			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;

			case 'y':
			case 'Y':
				if(i > 2) {
					printf("%d: 'Y\n'", i);
				}
				break;
			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}

	return (0);
}
