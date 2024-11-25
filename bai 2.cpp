#include <stdio.h>

int main() {
    int num = 40;
    int a;
    while ( num == 40 ){
        printf("hay nhap mot so ");
        scanf("%d", &a);
        if(a == 40){
            printf("dung roi\n");
            break;

        }else if (a > 40){
            printf("lon hon roi\n");
        }else{
            printf("nho hon roi\n");
        }
    }
    return 0;
}
