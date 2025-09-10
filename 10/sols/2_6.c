#include <stdio.h>

int main (void) {
    int size;
    int rows = 0;
    int cols = 0;

    printf("Enter the size of the pattern: ");
    scanf("%d", &size);

    while (rows < size) {
        cols = 0;
        while (cols < size) {
            if (cols == 0 || cols == size - 1 || rows == 0 || rows == size - 1) {
                printf("*");
            } else {
                printf(" ");
            }
            cols++;
        }
        printf("\n");
        rows++;
    }
    return 0;
}
