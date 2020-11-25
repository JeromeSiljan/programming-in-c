#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_all(char **shopping_list, int *size){
    if(*size == 0){
        printf("No items on shopping list\n");
    }
    else if(*size != 1){
        for(int i = 0; i < *size; i++){
            printf("%s", *(shopping_list + i));
        }
    }
    else{
        printf("%s", *(shopping_list));
    }

}

void print_menu(){
    printf("1. List Items\n");
    printf("2. Add Item\n");
    printf("3. Exit\n");
    printf(" > ");
}

void add_item(char **shopping_list, int *size){
    int buf_size = 1024;
    char buffer[buf_size];
    printf("What would you like to add to the list?\n > ");
    fgets(buffer, buf_size, stdin);
    if(*size != 0){
        shopping_list = realloc(shopping_list, *size);
    }
    *(shopping_list + (*size)) = calloc(buf_size, sizeof(char));
    strcpy(*(shopping_list + (*size)), buffer);
    printf("Added %s", *(shopping_list + *(size)));
    *size = *size + 1;
    printf("Size of shopping list: %d\n", *size);
}



void get_results(char **shopping_list, int *size, int *leave){
    int buf_size = 1024, option;
    char buffer[buf_size];
    option = atoi(fgets(buffer, buf_size, stdin));
    if(option == 1){
        print_all(shopping_list, size);
    }
    else if(option == 2){
        add_item(shopping_list, size);
    }
    else if(option == 3){
        *leave = 1;
    }
}

int main(void)
{
    int *leave = calloc(1, sizeof(int));
    int *size = calloc(1, sizeof(int));
    *leave = 0;
    *size = 0;
    char **shopping_list = calloc(*size, sizeof(char*));

    while(*leave == 0){
            print_menu();
            get_results(shopping_list, size, leave);
    }

    free(shopping_list);
    free(leave);
    free(size);
    return 0;
}
