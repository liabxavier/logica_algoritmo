#include<stdio.h>
main(){
	int n;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &n);
	
	while(n>0){
		printf("%d ", n);
		
		while(n!=1){
			if(n%2==0){
				n=n/2;
			} else {
				n=3*n+1;
			} printf("%d ", n);
		}
		printf("\n \n");
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
	}
}
