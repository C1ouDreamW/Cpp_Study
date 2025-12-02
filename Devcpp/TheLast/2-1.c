#include <stdio.h>
// 定义打印空心等边三角形的函数
void triangle(int n) {
	int i,j,k;
    for (i = 1; i <= n; i++) {
        // 打印每行前面的空格
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        // 打印每行的星号
        for (k = 0; k < 2 * i - 1; k++) {
            if (i == n || k == 0 || k == 2 * i - 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    triangle(n);
    return 0;
}
