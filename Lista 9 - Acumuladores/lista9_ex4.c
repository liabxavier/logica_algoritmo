#include<stdio.h>
main(){
	int aprovados=0, exame=0;
	float nota, soma1=0, soma2=0;
	float media1, media2;
	
	while(1){
		printf("Escreva a nota do aluno? ");
		scanf("%f", &nota);
		
		if(nota==99){
			break;
		}
		if(nota>=6){
			soma1=soma1+nota;
			aprovados++;
		}else if(nota<6&&nota>=3){
			soma2=soma2+nota;
			exame++;
		}
	}
	if(aprovados>0){
		media1=soma1/aprovados;
		printf("A media dos alunos aprovados eh %.1f\n", media1);
	}
	if(exame>0){
		media2=soma2/exame;
		printf("A media dos alunos em exame eh %.1f\n",media2);
	}
}
