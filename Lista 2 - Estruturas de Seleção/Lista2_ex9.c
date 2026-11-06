#include<stdio.h>
#include<math.h>

main()
{
	int sexo;
	float peso_ideal, altura;
	
	printf("Digite sua altura em metros(ex: 1.75): \n");
	scanf("%f", &altura);
	
	printf("Digite qual o seu sexo (1-Homem | 2- Mulher)");
	scanf("%d", &sexo);
	
	if(sexo==1){
	peso_ideal= (72.7*altura)-58;
	printf("O peso ideal para sua altura e: %.2f\n", peso_ideal);
}
	else {
	
	peso_ideal= (62.1*altura)-44.7;
	printf("O peso ideal para a sua altura e: %.2f\n ", peso_ideal);
}
	
}
