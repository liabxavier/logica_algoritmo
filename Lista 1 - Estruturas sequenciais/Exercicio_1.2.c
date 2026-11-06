#include<stdio.h>
#include<math.h>

main(){
	float ht,vh;
	int m;
	float sb, sf;
	
	printf("Quantas horas trabalhadas em um mes? ");
	scanf("%f,", &ht);
	
	printf("Qual o valor da hora trabalhada? ");
	scanf("%f", &vh);
	
	printf("Quantos filhos menores de 14 anos tens? ");
	scanf("%d", &m);
	
	sb=ht*vh;
	
	sf=sb+(sb*0.02*m);
	
	printf("O salario a ser recebido e de R$ %.2f\n", sf);
	
}
