#include <stdio.h>

int main() {
    int number;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &number); // Đọc số nguyên

    printf("Enter a character: ");
    scanf("%c", &ch); // Ký tự xuống dòng '\n' còn trong bộ đệm sẽ được đọc

    printf("You entered number: %d and character: '%c'\n", number, ch);
    return 0;
}
