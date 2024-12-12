//Bộ nhớ đệm đầu vào (stdin) thường chứa các ký tự còn lại sau khi một giá trị được đọc bởi scanf. Những ký tự dư này có thể gây ra các vấn đề nếu không được xóa trước khi nhập dữ liệu tiếp theo.
#include <stdio.h>

int main() {
    int number;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Xóa bộ đệm
    while (getchar() != '\n');

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("You entered number: %d and character: '%c'\n", number, ch);
    return 0;
}
