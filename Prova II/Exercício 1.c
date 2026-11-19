#include<stdio.h>
main(){
	
	int tempo, maior=0;
	int qtd=0, total=0;
	float media;
	
		printf("Qual o tempo de uso? ");
		scanf("%d", &tempo);
		
	
	while(tempo>0){
		
		qtd++;
		total=total+tempo;
		
		if(tempo>maior){
			maior=tempo;
		}
		
		printf("Qual o tempo de uso? ");
		scanf("%d", &tempo);
	}
	
	media=(float)total/qtd;
	
	printf("\n=======ESTATISTICAS=========\n\n");
	
	printf("Os computadores foram utilizados %d vezes.\n", qtd);
	printf("O tempo total de de uso foi de %d minutos.\n", total);
	printf("A media de tempo utilizado eh de %.2f minutos.\n", media);
	printf("O maior tempo de uso foi de %d minutos.\n", maior);
	
}
