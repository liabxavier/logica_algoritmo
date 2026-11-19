#include<stdio.h>
main(){
	int a, b;
	a=7, b=15;
	
	for(a=7; a<=9; a++){
		for(b=15; b>12; b--){
			printf("%d, %d\n", a, b);
		}
		b=10;
		if(a>b){
			a--;
		} else {
			b+=3;
		}
		
		printf("%d, %d\n", a, b);
	}
}
