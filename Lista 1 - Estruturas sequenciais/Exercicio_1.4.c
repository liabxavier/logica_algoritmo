#include<stdio.h>

main(){
	float c, ft, cs;
	
	printf("Qual a temperatura, em Fahrenheit? ");
	scanf("%f", &ft);
	
	c=cs/5*(ft-32)/9;
	
	printf("Sua temperatura em Celsius e: %*5f\n", c);
	
}
