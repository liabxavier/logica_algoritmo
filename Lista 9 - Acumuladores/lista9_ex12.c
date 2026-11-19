#include<stdio.h>
main(){
	int x, z, soma=0, total=0;
	
	printf("Escreva dois numeros(separados por espaco): ");
	scanf("%d %d", &x, &z);
	
	while(x>z){
		printf("Segundo numero escrito eh invalido.\nDigite um novo numero: ");
		scanf("%d",&z);
	}
	while(soma<=z){
		soma=soma+(x+total);
		total++;
	}
	printf("Quantidade de numeros somados: %d\n", total);
	printf("Total da soma: %d\n", soma);
}
