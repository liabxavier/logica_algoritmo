#include<stdio.h>
main(){
	int anos=0;
	float popa, popb;
	
	popa=500;
	popb=1500;
	
	printf("O bairro A tem 500 habitantes.\n");
	printf("O bairro B tem 1500 habitantes.\n");
	printf("Em quanto tempo a populacao de A ultrapassa a de B? \n");
	
	while(popa<popb){
		popa=popa+(popa*0.052);
		popb=popb+(popb*0.018);
		anos++;
	}
	printf("A populacao passa a ser maior depois de %d anos\n", anos);
}
