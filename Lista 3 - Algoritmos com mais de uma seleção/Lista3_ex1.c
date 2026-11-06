#include<stdio.h>

main(){
	
	float nota1, nota2, media;
	
	printf("Qual a nota da primeira avaliacao? ");
	scanf("%f", &nota1);
	
	printf("Qual a nota da segunda avaliacao? ");
	scanf("%f", &nota2);
	
	media=nota1+nota2/2;
	
	if(media>=6){
		printf("Parabens, voce esta aprovado!");
	}
		else
			if(media <6 && media>=3){
				printf("Voce esta em axame. Estude para a prova de recuperacao! ");
			}
	else { 
		printf("Voce esta reprovado! Nos vemos no proximo semestre!");
	}	
}
