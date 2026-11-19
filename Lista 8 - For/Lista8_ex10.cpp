#include<stdio.h>
main(){
	int a, b, i;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &a, &b);
	
	while(a>b){
		printf("Valores invalidos.\nTente novamente.\n\n");
		printf("Digite dois numeros inteiros: ");
		scanf("%d %d", &a, &b);
	}
	
	for(i=a; i<=b; i++){
		printf("%d ", i);
	}

}
