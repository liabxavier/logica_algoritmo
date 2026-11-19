#include<stdio.h>
main(){
	int n, d, r;
	float vol, total=0, menor, media;
	
	printf("Numero de regioes analisadas? ");
	scanf("%d", &r);
	
	for(n=1; n<=r; n++){
		total=0;
		for(d=1; d<=4; d++){
			printf("Volume de chuva do dia: ");
			scanf("%f", &vol);
			total+=vol;	
					
		if(n==1 && d==1 || vol<menor){
			menor=vol;
			}
		}

		media=(float)total/4;
		
		
		printf("Media da regiao (em mm): %.1f\n", media);
	}		
		printf("O menor volume de chuva dentre todas as regioes foi de %.1f mm.", menor);
	
}
