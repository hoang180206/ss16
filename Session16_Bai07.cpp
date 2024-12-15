#include <stdio.h>

void sapXepArr(int *arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(*(arr+j) > *(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}
int main(){
    int array[] ={1,3,5,7,9};
    int size = sizeof(array)/sizeof(array[0]);
    sapXepArr(array, size);
    printf("Mang sau khi sap xep: ");
    for(int i=0; i<size; i++){
        printf("%d ", *(array+i));
    }

    return 0;
}
