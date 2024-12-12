#include <stdio.h>

int main()
{
    int n;

    printf("Nhập số nguyên có 4 chữ số: ");
    scanf("%d", &n);

    int sum = 0;

    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;

    printf("Tổng các chữ số là: %d\n", sum);
    return 0;
}
