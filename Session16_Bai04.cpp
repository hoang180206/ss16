#include <stdio.h>
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("Phan tu thu %d: %d\n", i, *(arr+i));
    }
}
int main(){
    int array[] = {1,3,5,8,2};
    int size = sizeof(array)/sizeof(array[0]);
    printArray(array, size);
    return 0;
}
