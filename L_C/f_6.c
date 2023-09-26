#include <stdio.h>

union
{
    struct 
    {
        int type;
    } n;
    struct
    {
        int type;
        int intnode;
    } ni;
    struct
    {
        int type;
        double doublenode;
    } nf;
       
} u;

int main()
{
    u.nf.type = 1;
    u.nf.doublenode = 3.14;

    printf("Type: %d\n", u.nf.type);
    printf("Double Node: %lf\n", u.nf.doublenode);

    return (0);
};