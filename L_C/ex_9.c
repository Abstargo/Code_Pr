#include <stdio.h>

int main(int argc, char *argv[])
{
	// I didn't need to use any arguments in my code.
	(void)argc;
	(void)argv;

	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "Jhon", "Lisa"
	};

	/*
	 * it takes the size of ages which is 20 divided by
	 * the size of the int which is 4.
	 */
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	for(i = 0; i < count; i++)
	{
		printf("%s has %d years alive. \n",
				names[i], ages[i]);
	}

	printf("---\n");

	int *cur_age = ages;
	char **cur_name = names;

	for(i = 0; i < count; i++)
	{
		/*
		 * It iterates through the arrays names and ages 
		 * simultaneously using the loop counter i.
		 * It works exactly like names[i] and ages[i].
		 */
		printf("%s is %d years old.\n",
				*(cur_name + i), *(cur_age + i));
	}

	printf("---\n");

	for(i = 0; i < count; i++)
	{	
		// It the same as *((cur_name or cur_age) + i).
		printf("%s is %d years old again.\n",
				cur_name[i], cur_age[i]);
	}

	printf("---\n");

	/*
	 * they take the size of cur_age which is 5 and it's equal to
	 * age same as for cur_name with same value, in this example
	 * they choose cur_age - age and cur_age keeps incrementing aswell
	 * as for cu_name until (cur_age - age < count) is false.
	 */
	for(cur_name = names, cur_age = ages;
			(cur_age - ages) < count;
			cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n",
				*cur_name, *cur_age);
	}

	return (0);
}
