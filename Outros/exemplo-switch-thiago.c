#include<stdio.h>
#include<math.h>

main(){
	
	int quantidadeLado, medln, perimetro, area;
	
	printf("POLIGONOS \n");
	printf("Quantas linhas tem esse poligono? ");
	scanf("%d", &quantidadeLado);
	
	switch(quantidadeLado) {
			
	    case  3:
	    	printf("Qual o tamanho da linha desse poligono? ");
			scanf("%d", &medln);
			perimetro=3*medln;
			printf("Esse poligono eh um triangulo e seu perimetro eh %d\n", perimetro);
			break;
		case 4:
	    	printf("Qual o tamanho da linha desse poligono? ");
			scanf("%d", &medln);
			area=medln*medln;
			printf("Esse poligono eh um quadrado e sua area eh igual a %d\n", area);
			break;
		case 5:
		    printf("Esse poligono tem cinco lados e eh um pentagono");
		    break;
    }	
}
