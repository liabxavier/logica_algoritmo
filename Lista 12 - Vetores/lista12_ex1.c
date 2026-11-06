#include<stdio.h>
main(){
	int i, x, v[10];
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &x);
	
	for(i=0; i<10; i++){
		v[i]=x;
	}
	printf("Conteudo do vetor: \n");
	for(i=0; i<10; i++){
		printf("v[%d]=%d\n", i, v[i]);
	}
}
