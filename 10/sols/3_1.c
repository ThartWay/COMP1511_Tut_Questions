#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100], rev[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int j = 0;
    int len = strlen(str) - 1;
    for (int i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}