#include<stdio.h>
main(){
	int a,b,i,j,s;
	j=0; s=0;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &a, &b);
	
		while(a>=b){
			printf("Ordem incorreta.\nTente novamente.\n");
			printf("\nDigite dois numeros inteiros: ");
			scanf("%d %d", &a, &b);

			for(i=a; i<=b; i++){
			s=s+i;
			j++;
			}
		printf("O total da soma de %d ate %d eh igual a: %d\n", a, b, s);
		printf("A quantidade de numeros somados foi de: %d\n", j);
	}
}
	
