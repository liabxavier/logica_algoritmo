#include<stdio.h>
main(){
	int n, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if(n>0){
		for(i=1; i<=n; i++){
			printf("Programacao\n");
		}
	}else{
		printf("\n\nPrograma encerrado:\n Valor digitado e invalido.");
	}
}
