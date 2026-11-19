#include<stdio.h>
main(){
	int i = 1;
	int soma = 0;

 while (i <= 8) {
  if (i % 2 == 0 || i == 5) {
  	  soma += i;
	 }
	  i++;
	   }
	   printf("%d\n", soma);
}
