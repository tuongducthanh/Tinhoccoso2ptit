#include <stdio.h>
#include <string.h>

// Hàm tìm và in ra các ký t? s? trong xâu
void findDigits(char S[]) {
    int len = strlen(S);
    int hasDigit = 0;
 int i;
    for (i = 0; i < len; i++) {
        if (S[i] >= '0' && S[i] <= '9') {
            printf("%c", S[i]);
            hasDigit = 1;
        }
    }

    if (!hasDigit) {
        printf("-1");
    }

    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[100];
        scanf("%s", S);

        findDigits(S);
    }

    return 0;
}
