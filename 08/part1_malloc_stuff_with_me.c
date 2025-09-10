#include <stdio.h>

int *int_generator(void);
double double_generator(void);
char *char_generator(void);
char *array_generator(void);
struct my_struct *struct_generator(void);

struct my_struct {
    int number;
    char letter;
    double another_number;
};


int main(void) {
    int *num = int_generator();
    printf("%d", *num);

    return 0;
}


int *int_generator(void) {
    int num = 1;
    return &num;
}

/** 
double double_generator(void) {
    double num = 1;
    return &num;
}
char *char_generator(void) {
    char character = 'a';
    return &character;
}

// return the pointer to an array of 5 characters
char *array_generator(void) {
    char array[] = {'a', 'b', 'c', 'd', 'e'};
    return &num;
}

struct my_struct *struct_generator(void) {
    struct my_struct *the_struct = {0};
    return &the_struct;
}
*/