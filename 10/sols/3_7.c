#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int char_count = 0;
    for (int i = 0; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++) {
            char_count++;
        }
    }
    printf("Total characters is %d\n", char_count);
    
    return 0;
}
