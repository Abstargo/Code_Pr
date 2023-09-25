#include <stdio.h>

struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
};

int main()
{
    struct sigrecord sigline;

    struct sigrecord *sigline_p;


    sigline.signum = 1;
    sprintf(sigline.signame, "SIGHUP");
    sprintf(sigline.sigdesc, "Hangup");

    sigline_p = &sigline;

    printf("Signal Number: %d\n", sigline_p->signum);
    printf("Signal Name: %s\n", sigline_p->signame);
    printf("Signal Description: %s\n", sigline_p->sigdesc);

    return (0);
}