#include<stdio.h>

main(){
	int alunos,a, c;
	float nota, media;
	
	c=0;
	a=0;
	
	printf("Quantos alunos tem na turma? ");
	scanf("%d", &alunos);
	
	do{
		printf("Digite nota de um aluno: ");
		scanf("%f", &nota);
		
		a=a+nota;
		c++;
		
	} while(c<5);
	
		media=a/alunos;
		
		printf("A media da turma eh de: %.2f",media);
}
