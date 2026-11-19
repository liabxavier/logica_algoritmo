#include<stdio.h>
main(){
	int a, b, i;
	
	printf("Digite dois numeros inteiros, separados por espaco: ");
	scanf("%d %d", &a, &b);
	
	if(a>0){
		for(i=1; i<=a; i++){
			printf("%d",b);
			if(i<a){
				printf(", ");
			}
		}
		
	}else{
		printf("\n\nPrograma encerrado:\n Valor digitado e invalido.");
	}
}
