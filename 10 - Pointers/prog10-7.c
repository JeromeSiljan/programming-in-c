#include <stdio.h>

int main (void) 
{
    struct entry
    {
        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;    // creating several struct "entry"
    struct entry *list_pointer = &n1;   // creating a pointer to struct entry and assigning the address of n1 to it

    n1.value = 100;     // setting the n1 value to 100
    n1.next = &n2;      // setting the next value as pointer to the next struct (n2)
    
    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;   // setting the pointer to the next struct as a null pointer


    while(list_pointer != (struct entry *) 0){  // while the list_pointer  is not a null pointer
        printf("%i\n", list_pointer->value);    // print the value element of the struc the list pointer references
        list_pointer = list_pointer->next;      // set the list_pointer to be the address of the "next" value of the struct the current list_pointer points to
    }

    return 0;
}
