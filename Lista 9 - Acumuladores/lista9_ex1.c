#include<stdio.h>

main(){
	int c, a, num, media;
	c=0;
	a=0;
	
	while(c<10){
		printf("Escreva um numero: ");
		scanf("%d", &num);
		
		a=a+num;
		c++;
		
	}
	
	media=a/c;
	
	printf("A media dos numeros escritos eh: %d\n", media);
	
}
