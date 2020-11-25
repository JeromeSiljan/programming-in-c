#include <stdio.h>

int main (void) 
{
    struct date 
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    // ahh yes, today we encounter the structure pointer operator: ->
    datePtr->month = 9;     // this is equal to 
    // (*datePtr).month = 9;
    // -> just helps keep things neater 
    datePtr->day = 25;
    datePtr->year = 2015;


    printf("Today's date is %i/%i/%0.2i\n",
            datePtr->month, datePtr->day, datePtr->year % 100);     // interesting way to extract last 2 digits of int

    return 0;
}
