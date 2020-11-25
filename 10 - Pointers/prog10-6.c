#include <stdio.h>

int main (void) 
{
    struct entry
    {
        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    int i;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    n1.next = &n2;  // the next value of n1 points to the struct n2
    n2.next = &n3;  // the same thing here, but with n2 and n3

    i = n1.next->value;     // i holds the value of n2 since n1.next is a pointer and i is accessing the variable value from
                            // the value ot the pointer
    printf("%i ", i);       // here we print the value variable from n2

    printf("%i\n", n2.next->value);     // here we print the value variable from n3

    return 0;
}
