#include<stdio.h>
main(){
	int soma=0, total=0, i;
	
	
	for(i=1; soma<=100; i++){
		soma=soma+i;
		total=i;
	}
	printf("O total de numeros em sequencia ate 100 eh %d\n", total);
}
