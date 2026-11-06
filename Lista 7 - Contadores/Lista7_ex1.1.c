#include<stdio.h>
main(){
	
	float nota1, nota2, media;
	int c, resp;
	c=0;
	
	do{
		printf("Escreva a primeira nota: ");
		scanf("%f", &nota1);
		printf("EScreva a segunda nota: ");
		scanf("%f", &nota2);
		
		media=(nota1+nota2)/2;
		
		printf("A media desse aluno eh: %.1f\n", media);
		if(media>=6){
			c=c+1;
		
		printf("Calcular média de outro aluno? 1-Sim 2-Não:  ");
		scanf("%d", &resp);
		}
	}while(resp==1);
		printf("O total de alunos aprovados eh: %d\n", c);
}
