#include <stdio.h>

void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a+b; 
}
int main(){
    int x= 10;
    int y= 2;  
    int sum= 0;
    tinhTong(x, y, &sum);
    printf("Tong cua %d va %d la: %d\n", x, y, sum);

    return 0;
}
