#include<stdio.h>
main(){
	int a, n, i, soma=0;
	printf("escreva dois numeros(separados por espaco): ");
	scanf("%d %d", &a, &n);
	
	while(n<=0){
		printf("Segundo numero digitado eh invalido.\nDigite novo numero: ");
		scanf("%d", &n);
	}
	for(i=0; i<n; i++){
		soma=soma+(a+i);
	}

	printf("Soma %d com seus %d seguintes eh igual a %d\n", a, n, soma);
}
