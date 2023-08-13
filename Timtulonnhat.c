#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100001

int main() {
    char input[MAX_LENGTH];
    char longestWord[MAX_LENGTH];
    int maxWordLength = 0;
    gets(input);
    char* token = strtok(input, " \n");
    while (token != NULL) {
        int wordLength = strlen(token);
        if (wordLength > maxWordLength) {
            strcpy(longestWord, token);
            maxWordLength = wordLength;
        }
        token = strtok(NULL, " ");
    }

    printf("%s - %d\n", longestWord, maxWordLength);
    return 0;
}





