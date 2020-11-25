#include <stdio.h>

int main (void) 
{
    char c = 'Q';
    char *char_pointer = &c;    // this is a pointer to char

    printf("%c %c\n", c, *char_pointer);    // prints char c and value at the address of char_pointer

    c = '/';
    printf("%c %c\n", c, *char_pointer);    // still pointing to the value at the address of char_pointer. 
                                            // since c changed, the value at the address of char_pointer changes as well

    *char_pointer = '(';    // here, we change the value at the address of char_pointer by using the indirection operator, *
    printf("%c %c\n", c, *char_pointer);

    return 0;
}
