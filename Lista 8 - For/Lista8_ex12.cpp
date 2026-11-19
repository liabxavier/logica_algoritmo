#include<stdio.h>
main(){
	int a, b, c, i;
	
	printf("Para um sequencia crescente, comece com 1.\n");
	printf("Para uma sequencia decrescente, comece com 2.\n");
	printf("\nEscreva um trio de numeros inteiros: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==1){
		if(b>c){
			for(i=c; i<=b; i++){
				printf("%d ", i);
			}
		}else{
			for(i=b; i<=c; i++){
				printf("%d ", i);
			}
		}
	}
	if(a==2){
		if(b>c){
			for(i=b; i>=c; i--){
				printf("%d ", i);
			}
		}else{
			for(i=c; i>=b; i--){
				printf("%d ", i);
			}
		}
	}else{
		printf("Valor inicial invalido.\n Programa encerrado.");
	}
}
