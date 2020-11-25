#include <stdio.h>

int main (void) 
{
    int i1, i2;
    int *p1, *p2;

    i1 = 5;
    p1 = &i1;
    i2 = *p1 / 2 +10;   // here, i2 is set to the value at the address p1 / 2 + 10
    p2 = p1;    // p2 is set to equal p1, which means that p2 now points to i1


    printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);

    return 0;
}
