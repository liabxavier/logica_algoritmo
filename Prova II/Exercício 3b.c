#include<stdio.h>
main(){
	int n=7, soma = 0;

do {
   soma += n;
   n -= 2;
  } while (n > 2);
  
  printf("%d, %d\n", n, soma);
}
