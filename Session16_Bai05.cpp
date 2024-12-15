#include <stdio.h>

void update(int *arr, int size, int index, int newValue){
    if(index >= 0 && index < size){
        *(arr+index) = newValue;
    }else{
        printf("Vi tri khong hop le\n");
    }
}
int main(){
    int array[] = {1,3,5,7,9};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Mang ban dau: ");
    for(int i=0; i<size; i++){
        printf("%d ", *(array+i));
    }
    printf("\n");
    
    int index, newValue;
    printf("Nhap vi tri can cap nhat (0 - %d): ", size-1);
    scanf("%d", &index);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    update(array, size, index, newValue);
    printf("Mang sau khi cap nhat: ");
    for(int i=0; i<size; i++){
        printf("%d ", *(array+i));
    }

    return 0;
}
