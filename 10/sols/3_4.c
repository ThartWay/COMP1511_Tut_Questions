void delete_following_words(char string[MAX_CHARS]) {
    for (int i = 0; i < string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            string[i] = '\0';
        }
    }
    return;
}