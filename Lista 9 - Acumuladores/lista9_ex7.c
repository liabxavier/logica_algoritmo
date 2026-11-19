#include <stdio.h>

main() {
    int e, eleva = 0, elevb = 0, elevc = 0;

    printf("===== PESQUISA DE CONDOMINIO =====\n");
    printf("Qual elevador voce mais utiliza: 1, 2 ou 3: ");
    scanf("%d", &e);

    while (e == 1 || e == 2 || e == 3) {
        switch (e) {
            case 1: eleva++; break;
            case 2: elevb++; break;
            case 3: elevc++; break;
        }
        printf("Qual elevador voce mais utiliza: 1, 2 ou 3: ");
        scanf("%d", &e);
    }

    if (eleva >= elevb && eleva >= elevc) {
        printf("O elevador mais utilizado e o numero 1\n");
    } else if (elevb >= elevc) {
        printf("O elevador mais utilizado e o numero 2\n");
    } else {
        printf("O elevador mais utilizado e o numero 3\n");
    }

}
