#include<stdio.h>
#include<math.h>

main(){
	
	int qtdln, medln, perimetro, area;
	
	printf("POLIGONOS \n");
	printf("Quantas linhas tem esse poligono? ");
	scanf("%d", &qtdln);
	
	if(qtdln==3){
		printf("Qual o tamanho da linha desse poligono? ");
		scanf("%d", &medln);
		perimetro=3*medln;
		printf("Esse poligono eh um triangulo e seu perimetro eh %d\n", perimetro);
	}
	else	
		if(qtdln==4){
			printf("Qual o tamanho da linha desse poligono? ");
		scanf("%d", &medln);
		area=medln*medln;
		printf("Esse poligono eh um quadrado e sua area eh igual a %d\n", area);
		}
		else { printf("Esse poligono tem cinco lados e eh um pentagono");
		}
}
