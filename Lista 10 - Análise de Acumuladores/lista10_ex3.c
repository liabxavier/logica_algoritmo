#include<stdio.h>
main(){
	int a, b;
	a=0; b=0;
	
	while(a<7){
		if(a<3){
			if(a<2){
				a=a+2;
			} else {
				a=a+1;
			}
		} else {
			b=b+1;
			if(b==1){
				b=b+2;
			} else {
				a=a+b;
			}
		}
		
		printf("%d, %d\n", a,b);
	} 
}
