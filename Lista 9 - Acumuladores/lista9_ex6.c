#include<stdio.h>
main(){
	int alunos, i, aprovados=0;
	float n1, n2, media total=0;
	
	printf("Quantidade de alunos na turma: ");
	scanf("%d", &alunos);
	
	for(i=1;i<=alunos; i++){
		printf("\nNotas das avaliacoes deste aluno(separadas por espaco): ");
		scanf("%f %f", &n1, &n2);
		media=(n1+n2)/2;
		printf("Nota final do aluno: %.1f\n", media);
	if(media>=6){
		total=total+media;
		aprovados++;
		}
	 }

    if (aprovados > 0) {
        printf("\nA media dos aprovados eh %.1f\n", total / aprovados);
    } else {
        printf("\nNao houve alunos aprovados.\n");
    }

    printf("O percentual de alunos aprovados na turma eh %.1f%%\n",
           (float)aprovados / alunos * 100);

}
