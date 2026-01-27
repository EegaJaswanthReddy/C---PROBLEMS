
#include <stdio.h>

int main() {
    char sentence[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ' && sentence[i + 1] != '\n') {
            words++;
        }
    }

    // If the first character is not space or newline, count the first word
    if (sentence[0] != ' ' && sentence[0] != '\n') {
        words++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}
