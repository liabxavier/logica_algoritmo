#include<stdio.h>
main(){
	int i, n, diaMenor;
	float kg, media, total=0, menor;
	
	do{
		printf("Quantos dias serão analisados? ");
		scanf("%d", &n);
	}while(n<=0);
	
	for(i=1; i<=n; i++){
		printf("\nQuantidade de material recolhido nesse dia(em kg): ");
		scanf("%f", &kg);
		
		total=total+kg;
		
		if(i==1 || kg<menor){
			
			menor=kg;
			diaMenor=i;
		}
	}
	
	media=(float)total/n;
	
	printf("\n\n======= ESTATISTICAS =======\n");
	printf("A menor quantidade recolhida em um dia foi de %.1f quilogramas.", menor);
	printf("\nEssa menor coleta ocorreu no dia %d.", diaMenor);
	printf("\nO total recolhido nos %d dias analisados foi de %.1f quilogramas.", n, total);
	printf("\nA media de recolhimento eh de %.1f quilogramas por dia.", media);
}
