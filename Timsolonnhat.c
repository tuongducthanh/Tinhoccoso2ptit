#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

int main() {
    char c[1000001], b[1000][1000] = {0};
    gets(c);
    int n = 0;
    char *token = strtok(c, " ");
    while (token != NULL ) {
        strcpy(b[n], token);
        token = strtok(NULL, " ");
        n++;
    }
    int i, j;
    char temp[1000];
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (atoll(b[i]) < atoll(b[j])) {
                strcpy(temp, b[i]);
                strcpy(b[i], b[j]);
                strcpy(b[j], temp);
            }
        }
    }
    printf("%s\n", b[0]);
    return 0;
}
