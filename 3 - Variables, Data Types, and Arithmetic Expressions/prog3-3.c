#include <stdio.h>

int main (void)
{
    int a = 25;
    int b = 2;

    float c = 25.0;
    float d = 2.0;

    printf("6 + a / 5 * b = %i\n", 6 + a / 5* b);    
    // operator precedence: division is calculated before addition
    printf("a / b * b = %i\n", a / b * b);
    // since a & b are both int, a / b = 12, not 12.5. Therefore, output = 24
    //
    // integers divided are always truncated, not rounded
    //
    printf("c / d * d = %f\n", c / d * d);
    // different story here since c / d = 12.5. Therefore, output = 25
    printf("-a = %i\n", -a);
    // the - is a unary operator: it operates on only one variable at a time.
    // unary operators have the highest precedence when compared to binary operators

    return 0;
}
