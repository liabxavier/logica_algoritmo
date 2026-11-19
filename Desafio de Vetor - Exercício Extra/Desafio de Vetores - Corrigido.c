#include<stdio.h>

int main(){
    
    int n;
    int jogadores[20], idade[20];
    float pontuacao[20];
    int i;
    
    do{
        printf("Qual a quantidade de jogadores(maximo de 20)? ");
        scanf("%d", &n);
    } while (n<0 || n>20);
    
    
    for(i=0; i<n; i++){
        printf("--CADASTRO DE JOGADORES: --\n");
        printf("Numero do jogador: ");
        scanf("%d", &jogadores[i]);
        printf("Idade do jogador: ");
        scanf("%d", &idade[i]);
        printf("Pontuacao do jogador: ");
        scanf("%f", &pontuacao[i]);
    }
    
    int opcao;
    do{
        printf("--MENU DE OPCOES: \n");
        printf("1-Atualizar pontuacao de um jogador: \n");
        printf("2-Aumentar pontuacao de todos(bonus global): \n");
        printf("3-Remover um jogador do torneio: \n");
        printf("4-Exibir relatorio final: \n");
        printf("Digite outro numero - Encerra o programa \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
    
        switch(opcao){
            case 1: {
                int idx;
                float novapontuacao;
                printf("Indique o jogador (0 a %d): ", n-1); 
                scanf("%d", &idx);
                if(idx >= 0 && idx < n){   
                    printf("Qual a nova pontuacao? ");
                    scanf("%f", &novapontuacao);
                    pontuacao[idx]=novapontuacao;
                }else{
                    printf("Indicacao errada. Tente novamente!\n");
                }
                break;
            }
            case 2:{
                int bonus;
                printf("Digite o valor do bonus: ");
                scanf("%d", &bonus);
                for(i=0; i<n; i++){        
                    pontuacao[i]+=bonus;
                }
                break;
            }
            case 3:{
                int idx;
                printf("Escolha qual jogador remover (0 a %d): ", n-1); 
                scanf("%d", &idx);
                if(idx < 0 || idx >= n){
                    printf("Escolha invalida!\n");
                }else{
                    for(i=idx; i<n-1; i++){   
                        jogadores[i]=jogadores[i+1];
                        idade[i]=idade[i+1];
                        pontuacao[i]=pontuacao[i+1];
                    }
                    n--; 
                    printf("Jogador excluido com sucesso. \n");
                }
                break;
            }
            case 4:{
                if(n>0){
                    int idxMaior=0, idxJovem=0;
                    float soma=0;
                    for(i=0;i<n;i++){
                        if(pontuacao[i]>pontuacao[idxMaior]) idxMaior=i;
                        if(idade[i]<idade[idxJovem]) idxJovem=i;
                        soma+=pontuacao[i];
                    }
                    float media;
                    int acimaMedia=0;
                    media=soma/n;
                    for(i=0;i<n;i++){
                        if(pontuacao[i] > media) acimaMedia++; 
                    }
                        
                    printf("-- RELATORIO FINAL -- \n");
                    printf("Jogador com a maior pontuacao: %d (%.2f pontos)\n", jogadores[idxMaior], pontuacao[idxMaior]);
                    printf("Media do torneio: %.2f\n", media);
                    printf("Quantos jogadores estao acima da media: %d\n", acimaMedia );
                    printf("Numero do jogador mais jovem: %d\n", jogadores[idxJovem]);
                }else{
                    printf("Nao ha jogadores cadastrados. \n");
                }
                break;
            
            }
            default:
                printf("Programa encerrado! \n");
        }
    
    }while(opcao>=1 && opcao<=4); 
}

