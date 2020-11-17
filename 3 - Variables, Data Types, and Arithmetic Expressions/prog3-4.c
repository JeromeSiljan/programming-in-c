#include <stdio.h>

int main (void)
{
    int a = 25, b = 5, c = 10, d = 7;   // this is cool, efficient, and fun

    printf("a = %i, b = %i, c = %i, and d = %i\n", a, b, c, d);
    printf ("a %% b = %i\n", a % b);    // %% escapes a %. this line gets the remainder of a / b, which is 0
    printf ("a %% c = %i\n", a % c);    
    printf ("a %% d = %i\n", a % d);
    printf ("a / d * d + a %% d = %i\n",    // any time there is a space, program cann be continued on a new line
            a / d * d + a % d);     // modulus has same precedence as multiplication and division
    // modulus is meant to be used for only int

    return 0;
}
