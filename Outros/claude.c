#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int resposta;
    int aprovados = 0; // contador de alunos aprovados

    do {
        // Leitura das notas
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        // Cálculo da média
        media = (nota1 + nota2) / 2;

        printf("A media final do aluno e: %.2f\n", media);

        // Verifica aprovação
        if (media >= 6) {
            aprovados++; // incrementa o contador
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno reprovado!\n");
        }

        // Pergunta se deseja continuar
        printf("Calcular a media de outro aluno 1.Sim 2.Nao? ");
        scanf("%d", &resposta);

    } while (resposta == 1);

    // Impressão final
    printf("\nQuantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
