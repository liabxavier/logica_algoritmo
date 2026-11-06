#include<stdio.h>

main(){
	
	int sal;
	float reaj, salf;
	
	printf("Qual o salario mensal? ");
	scanf("%d", &sal);
	
	printf("Qual o percentual, em centesimos, de reajuste oferecido? ");
	scanf("%f", &reaj);
	
	salf=sal+(sal*reaj);
	
	printf("O salario reajustado sera de: %.2f\n", salf);
	
}
