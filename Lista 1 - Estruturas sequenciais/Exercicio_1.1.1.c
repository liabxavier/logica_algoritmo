#include<stdio.h>
#include<math.h>

main(){
	int r, n1, n2;

	n1=3;
	n2=4;
	
	r=(n1*n2)/2;
	printf("A area de um triangulo retangulo e: %d\n", r);
	
	r= n1*n2;
	printf("A area de um retangulo e: %d\n", r);
	
	r= n2*n2;
	printf("A area de um quadrado e: %d\n", r);
	
	float h, n3;
	n3=5;
	
	h= M_PI*n3*n3;
	printf("A area de circunferencia do circulo e: %f\n", h);
	
}
