#include<stdio.h>
main(){
	float s=0;
	int c;
	
	for(c=1; c<=50; c++){
		s=s+(2.0*c-1)/c;
	}
	printf("Soma: %f\n", s);
}
