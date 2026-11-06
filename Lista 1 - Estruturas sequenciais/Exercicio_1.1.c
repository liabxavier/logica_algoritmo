#include<stdio.h>
#include<math.h>

main(){
	int h, parc1, parc2;
	
	printf("Informe o valor da base: ");
	scanf("%d", &parc1);
	
	printf("Informe o valor da altura: ");
	scanf("%d", &parc2);
	
	h= (parc1*parc2)/2;
	
	printf("O valor da area e: %d\n", h);
}
