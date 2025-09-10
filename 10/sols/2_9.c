int count_lowercase(char string[MAX_CHARS]) {
    int count = 0;
    for (int i = 0; i < string[i] != '\0'; i++) {
        if (is_lowercase(string[i])) {
            count++;
        }
    }
    return count;
}