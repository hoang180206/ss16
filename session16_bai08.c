#include <stdio.h>
#include <string.h>

void get(char *input, int size){
    printf("nhap vao chuoi ki tu: ");
    fgets(input, size, stdin);
    int length = strlen(input);
    if(length>0 && input[length-1]=='\n'){
        input[length-1] = '\0';
    }
}

void reverse(char *input, char *reverse){
    int length = strlen(input);
    for(int i=0; i< length; i++){
        reverse[i] = input[length-1-i];
    }
    reverse[length] = '\0'; 
}

int main(){
    char inputString[100];
    char reverseString[100];

    get(inputString, sizeof(inputString));

    reverse(inputString, reverseString);
    printf("Chuoi goc: %s\n", inputString);    
    printf("Chuoi đao nguoc: %s\n", reverseString); 
    
    return 0;
}