#include<stdio.h>

main(){
	
	float nota1, nota2, media;
	int c, opcao;
	
	c=0;

	do{
	printf("Escreva a nota da primeira avaliacao: ");
	scanf("%f", &nota1);
	
	printf("Escreva nota da segunda avaliacao: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) /2;

	printf("A media final do aluno eh: %.2f\n", media);
	
	if(media>=6){
		c++;
		printf("Aluno aprovado.");
	}
		else{ printf("Aluno reprovado.");
		}
		
	printf("Deseja calcular mais uma media? 1-Sim 2-Nao:  ");
	scanf("%d", &opcao);
	
	}while(opcao==1);
	
	printf("A quantidade de aprovados eh: %d\n", c);
}
