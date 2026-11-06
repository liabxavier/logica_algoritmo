#include<stdio.h>

main(){
	int qtdl, medl, total1, total2;
	
	printf("Poligonos! \n");
	printf("Quantos lados tem esse poligono? ");
	scanf("%d", &qtdl);
	
	if(qtdl==5){
		printf("Esse poligono eh um pentagono");
	}
	else
		if(qtdl==3){
			printf("Qual a medida desse lado? ");
			scanf("%d", &medl);
			
			total1=medl*3;	
			printf("Esse poligono eh um triangulo e seu perimentro eh %d\n", &total1);
		}
		else if(qtdl ==4){ printf("Qual a medida desse lado? ");
			scanf("%d", &medl);
			
			total2=medl*medl;	
			printf("Esse poligono eh um quadrado e sua area eh %d\n", &total2);
			
		}
}
