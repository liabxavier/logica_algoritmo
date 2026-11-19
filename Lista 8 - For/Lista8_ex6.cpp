#include<stdio.h>
main(){
	int a, i;
	
	printf("Escreva um numero inteiro(1 a 9): ");
	scanf("%d", &a);
	
	for(i=1; i<=20; i+=a){
		printf("%d ", i);
	}
}
