#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	int areas[] = {10, 12, 13, 14,20};
	char name[] = "Zed";
	char full_name[] = {
		'Z', 'e', 'd',
		' ', 'A', '.',
		'S', 'h', 'a', 'w', '\0'
	};

	// %ld means long integer.
	printf("The size of an int: %ld\n", sizeof(int));
	// the size of areas is 20 because it takes the size of the area which is 5 multiple by the sizeof(int) which is typically is 5.
	printf("The size of areas (int[]): %ld\n",
			sizeof(areas));
	printf("The number of ints in areas is %ld\n",
			sizeof(areas) / sizeof(int));

	printf("The first area is %d, the 2nd %d. \n",
			areas[0], areas[1]);
	// The sizeof char is 1.
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n",
			sizeof(name));
	printf("The number of chars: %ld\n",
			sizeof(name) / sizeof(char));
	printf("The size of full_name (char[]): %ld\n",
			sizeof(full_name));
	printf("The number of chars: %ld\n",
			sizeof(full_name) / sizeof(char));
	// the backslach inside the double quote is an escape character, is used to include special character inside the string.
	printf("name=\"%s\" and full_name=\"%s\"\n",
			name, full_name);

	return (0);
}
