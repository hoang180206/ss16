#include <stdio.h>

int main (){
	int number=10;
	int *ptr=&number;
	
	//cach 1
	printf("Gia  tri cua number: %d\n", number);
	printf("Dia chi cua number: %d\n", &number);
	
	//cach 2
	printf("Gia  tri cua number: %d\n", *ptr);
	printf("Dia chi cua number: %d\n", ptr);
	
	return 0;
}
