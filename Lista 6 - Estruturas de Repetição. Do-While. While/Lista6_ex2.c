#include<stdio.h>
#include<math.h>

main(){
	float r, comp, resp;
	
	printf("Descubra o comprimento da circunferencia \n");
	
	do {
	
	printf("Escreva aqui o raio da circunferencia: ");
	scanf("%f", &r);
	
	comp=2*M_PI*r;
	
	printf("O comprimento desse raio sera: ");
	printf("%.2f \n", comp);
	
	printf("Outro raio? 1. SIM 2. NAO \n");
	scanf("%f", &resp);
	}	
	while (resp==1);
}
