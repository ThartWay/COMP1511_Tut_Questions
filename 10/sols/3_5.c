#include <stdio.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 01; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    printf("Sum: %d\n", sum);
    
    return 0;
}