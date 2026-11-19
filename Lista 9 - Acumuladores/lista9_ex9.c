#include<stdio.h>
main(){
	int i, dias=0;
	float supi;
	
	printf("Suprmento incial de Blobs(em kg): ");
	scanf("%f", &supi);
	
	for(i=1; supi>=1;){
		supi=supi-supi/2;
		dias++;
	}
	printf("A quantidade de dias que levou para o suprimento\ninical chegar em 1kg ou menos foi de %d dias.", dias);
}
