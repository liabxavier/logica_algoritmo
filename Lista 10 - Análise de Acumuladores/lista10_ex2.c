#include<stdio.h>
main(){
	int a, b;
	a=0; b=5;
	
	do{
		b=b-1;
		printf("%d, %d\n", a, b);
		a=a+1;
	}while(b>=a);
}
