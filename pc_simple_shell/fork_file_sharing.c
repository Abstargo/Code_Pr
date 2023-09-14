#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include "tlpi_hdr.h"

int main(int argc, char *argv[])
{
	int fd, flags;
	char template[] = "/tmp/testXXXXX";

	setbuf(stdout, NULL);

	fd = mkstemp(template);
	if (fd == -1)
		errExit("mkstemp");

	printf("File offset before fork(): %lld\n", (long long) lseek(fd, 0, SEEK_CUR));
	
	flags = fcntl(fd, F_GETFL);
	if (flags == -1)
		errExit("fctnl - F_GETFL");
	
	printf("O_APPEND flag before fork() is: %s\n", (flags & O_APPEND) ? "on" : "off");
}
