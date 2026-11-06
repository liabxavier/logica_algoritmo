#include <stdio.h>
#define max_atletas 100

int main(void){
	int tempo[max_atletas];
	int qtd, i, j, aux;

	printf("=== Classificacao de Corrida ===\n\n");
	printf("Os tempos dos atletas (em segundos) de uma corrida\n");
	printf("serao classificados e apresentados do menor para o maior.\n\n");

	do{
		printf("Qual a quantidade de atletas participantes (1 a %d)? ", max_atletas);
		scanf("%d", &qtd);

		if(qtd < 1 || qtd > max_atletas){
			printf("Numero de atletas invalido. Registre novamente.\n");
		}
	}while(qtd < 1 || qtd > max_atletas);
	
	for(i = 0; i < qtd; i++){
		printf("Digite o tempo do atleta %d (em segundos): ", i + 1);
		scanf("%d", &tempo[i]);
	}


	printf("\nTempos antes da ordenacao:\n");
	for(i = 0; i < qtd; i++){
		printf("%d ", tempo[i]);
	}
	printf("\n");

	
	for(i = 0; i < qtd - 1; i++){
		for(j = 0; j < qtd - 1 - i; j++){
			if(tempo[j] > tempo[j + 1]){
				aux = tempo[j];
				tempo[j] = tempo[j + 1];
				tempo[j + 1] = aux;
			}
		}
	}

	printf("\n== RANKING ==\n");
	for(i = 0; i < qtd; i++){
		printf("%do lugar: %d segundos\n", i + 1, tempo[i]);
	}

	return 0;
}
