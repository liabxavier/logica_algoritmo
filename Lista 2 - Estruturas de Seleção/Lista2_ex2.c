#include<stdio.h>

main(){
	
	int ft;
	float cs;
	
	printf("Qual a temperatura, em Fahrenheit? ");
	scanf("%d", &ft);
	
	cs=(ft-32)*5/9;
	
	printf("A temperatura equivalente em Celsius e: %.2f\n", cs);
	
	
	}
