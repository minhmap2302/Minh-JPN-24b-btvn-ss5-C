#include <stdio.h>

int main() {
    int n, sum = 0;
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);
		if (n <= 0) {
            printf("So nhap vao khong phai so nguyen duong. Vui long thu lai!\n");
        }
    } while (n <= 0); // L?p l?i cho d?n khi ngu?i dùng nh?p s? nguyên duong
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}

