#include <stdio.h>

int main() {
    int a, b, soa, sob, UCLN;
    do {
        printf("Nhap so nguyen duong thu nhat: ");
        scanf("%d", &a);
        if (a <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (a <= 0);

    do {
        printf("Nhap so nguyen duong thu hai: ");
        scanf("%d", &b);
        if (b <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (b <= 0);
    soa = a;
    sob = b;

    while (sob != 0) {
        int remainder = soa % sob;
        soa = sob;
        sob = remainder;
    }
    UCLN = soa;
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, UCLN);

    return 0;
}

