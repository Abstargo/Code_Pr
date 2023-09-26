#include <stdio.h>

//Globale variable
int global_var = 10;

void function();

void copy_array(int *restrict dest, const int *restrict src, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
}

void function()
{
    // Accessing global variable
    global_var = 25;
}

int main()
{
    //  Constant variable
    const int constant_var = 5;
    // Volatile variable
    volatile int volatile_var = 20;
    // Static variable
    static int static_var = 30;

    // Arrays for copying
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    printf("Constant variable: %d\n", constant_var);
    printf("Volatile variable: %d\n", volatile_var);
    printf("Static variable: %d\n", static_var);

    volatile_var = 25;

    // Call copy_array with restrict-qualified pointers
    copy_array(destination, source, 5);


    // Accessing global variable
    global_var = 15;

    // Printing copied array
    for (int i = 0; i < 5; i++)
    {
        printf("%d", destination[i]);
    }

    return (0);
}