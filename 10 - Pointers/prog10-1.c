#include <stdio.h>

int main (void) 
{
    int count = 10, x;
    int *int_pointer;   // int_pointer is type pointer to int, this is denoted by the *

    int_pointer = &count;   // set int_pointer to the address (&) of count
    x = *int_pointer;   // x references the content at the address held in int_pointer, which is count (10)

    printf("count = %i, x = %i\n", count, x);

    return 0;
}
