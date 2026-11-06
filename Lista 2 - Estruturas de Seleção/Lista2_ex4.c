#include<stdio.h>

main(){
	
	float vi, desc, vf;
	
	desc=0.18;
	
	printf("Qual o valor inicial da peça? ");
	scanf("%f", &vi);
	
	vf=vi-(vi*desc);
	
	printf("O valor da peca com desconto e de: %.3f\n", vf);
	
}
