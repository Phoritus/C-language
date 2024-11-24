#include <stdio.h>

int main() {
    int rows;
    char symbol = '*';

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // ครึ่งบนของหัวใจ
    for (int i = 1; i <= rows / 2; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    // ครึ่งล่างของหัวใจ
    for (int i = rows / 2; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}