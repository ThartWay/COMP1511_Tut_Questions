#include <stdio.h>

struct my_struct {
    int a;
    int b;
    int c;
};

int main(void) {
    printf("Please enter 3 numbers: ");
    
    struct my_struct numbers;
    scanf("%d %d %d", &numbers.a, &numbers.b, &numbers.c);

    if (numbers.a > numbers.b && numbers.a < numbers.c) {
        printf("The middle number is %d\n", numbers.a);
    } else if (numbers.b > numbers.a && numbers.b < numbers.c) {
        printf("The middle number is %d\n", numbers.b);
    } else {
        printf("The middle number is %d\n", numbers.c);
    }

    return 0;
}