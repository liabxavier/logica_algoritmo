#include<stdio.h>

main(){
	
	float nota1, nota2, notafinal;
	
	printf("Qual a nota da primeira avaliacao? ");
	scanf("%f", &nota1);
	
	printf("Qual a nota da segunda avaliacao? ");
	scanf("%f", &nota2);
	
		notafinal=(nota1+nota2)/2;
	
	if(notafinal<=6){ 
		
		printf("Parabens, esta aprovado! ");
	}
	else(notafinal>=6);{
		printf("Reprovado, estude mais! ");
	}
}
