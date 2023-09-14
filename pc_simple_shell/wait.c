#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}

	if (pid == 0)
	{
		printf("Child process\n");
	}

	else
	{
		wait(NULL);
		sleep(40);
		printf("Parent Process\n");
	}
}
