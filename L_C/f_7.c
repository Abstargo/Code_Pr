#include <stdio.h>

union Data
{
    int i;
    double d;
};
// Define a structure with a tag "DataType" and a union inside it
struct DataHolder
{
    enum DataType {
        INTEGER,
        DOUBLE
    } type; // Tagged enum indicating the active member of the union
    union Data value;
};

int main()
{
    struct DataHolder dh;
    
    dh.type = INTEGER;
    dh.value.i = 42;

    if (dh.type == INTEGER)
    {
        printf("Value: %d\n", dh.value.i);
    }

    dh.type = DOUBLE;
    dh.value.d = 3.14;

    if (dh.type == DOUBLE)
    {
        printf("Value: %f\n", dh.value.d);
    }

    return (0);
}
