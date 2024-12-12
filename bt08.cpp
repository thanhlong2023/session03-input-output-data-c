#include <stdio.h>

int main()
{
    int n;

    printf("Nhập số nguyên có 4 chữ số: ");
    scanf("%d", &n);

    int temp = 0;

    temp = temp * 10 + n % 10;
    n /= 10;

    temp = temp * 10 + n % 10;
    n /= 10;

    temp = temp * 10 + n % 10;
    n /= 10;

    temp = temp * 10 + n % 10;
    n /= 10;

    printf("Số nghịch đảo là: %d\n", temp);
    return 0;
}
