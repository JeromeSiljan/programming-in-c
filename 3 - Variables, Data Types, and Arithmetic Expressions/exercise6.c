#include <stdio.h>
#include <math.h>   // needed for pow function

int main (void)
{
    // execute polynomial:
    // 3x^2 - 5x^2 + 6
    // when x = 2.55
    
    int x = 2.55, result;

    result = (3 * pow(x, 1)) - (5 * pow(x, 2)) + 6;

    printf("result is: %i\n", result);

    return 0;
}
