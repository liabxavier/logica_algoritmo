#include<stdio.h>

main(){
	int num;
	
	printf ("Digite um valor: ");
	scanf ("%d", &num);
	
	while (num !=0){
		if (num>0) {
			printf ("Esse valor eh positivo	\n");
		}
		else { 
		printf("Esse valor eh negativo	\n");
		}
		
		printf("Informe um valor: ");
		scanf("%d", &num);
	}
}
