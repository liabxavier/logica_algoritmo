#include<stdio.h>
main(){
	float s=0;
	int c;
	
	for(c=1; c<=10; c++){
		if(c%2!=0){
			s=s+(float)c/(c*c);
		} else {
			s=s-(float)c/(c*c);
		}
	}
	printf("Soma: %.4f\n", s);
}
