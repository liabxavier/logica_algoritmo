#include<stdio.h>
#include<math.h>

main(){
	float sm, pr, sr;
	
	printf("Qual seu salario mensal? ");
	scanf("%f", &sm);
	
	printf("Qual percentual de reajuste prometido (em centesimos)? ");
	scanf("%f", &pr);
	
	sr=sm+(sm*pr);
	
	printf("Seu salario reajustado sera de R$ %.2f\n", sr);
	
}
