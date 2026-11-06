#include<stdio.h>
#include<math.h>

main(){
	float  h, cat1, cat2;
	
	printf("Informe o cateto 1: ");
	scanf("%f", &cat1);
	printf("Informe o cateto 2: ");
	scanf("%f", &cat2);
	
	h=sqrt(cat1*cat1 + cat2*cat2);
	
	printf("Hipotenusa: %f\n",h);
}
