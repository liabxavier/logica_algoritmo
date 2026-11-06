#include<stdio.h>

main(){
	int time1, time2;
	
	printf("Quantos gols o Brasil fez nesta partida? ");
	scanf("%d", &time1);
	
	printf("Quantos gols o Pelotas fez nesta partida? ");
	scanf("%d", &time2);
	
	if(time1>time2){
			printf("O vencedor da partida foi o Brasil de Pelotas.");
	}
	else 
		if(time1==time2){
			printf("Essa partida terminou empatada. ");
		}
	else {
		printf("O vencedor dessa partida foi o Pelotas. ");
	}
}
