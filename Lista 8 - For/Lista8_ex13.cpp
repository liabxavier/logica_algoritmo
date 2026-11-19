#include<stdio.h>
main(){
	int x, i;
	
   printf("Digite um numero inteiro: ");
   scanf("%d", &x);
 while(x>10 || x<1){
 	printf("Valor incorreto.\n Tente novamente. \n");
 	printf("Digite um numero inteiro: ");
   	scanf("%d", &x);
 }
	for(i=1; i<=10; i++){
		printf("%dx%d=%d\n",i, x, i*x);
	}
}
