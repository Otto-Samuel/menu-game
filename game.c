#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define num_caixas 5

int descricao1(){
    v1:
    printf("Bem-Vindo ao jogo de perguntas e respostas, e um jogo onde voce tera\n"
           "que responder 5 perguntas simples.\n\n");
    int inicia;
    printf("1.comecar o jogo\n");
    scanf("%d", &inicia);
    if(inicia == 1){
        system("cls");
       pergunta();
    }
    else{
        system("cls");
        goto v1;
    }
}

int pergunta(){
/*============================================================================================== 
                                            questao 1
  ==============================================================================================*/
    char esc1[1] = "";
    printf("O conceito de polimorfismo em Orientacao a Objetos implica:");
    printf("\n-------------------------------------------------------------\n");
    printf("\n(A) a possibilidade de interagir com objetos de classes diferentes ao mesmo tempo;");
    printf("\n(B) trabalhar com instancias de classes diferentes, de forma unificada, via uma abstracao;");
    printf("\n(C) uma tecnica do paradigma OO que garante o reuso de uma classe em situacoes distintas;");
    printf("\n(D) garantir, de forma centralizada, a integridade interna de varias instancias de uma classe;\n");
    printf("R: ");
    scanf("%s", esc1);

    if(strcmp(esc1,"a") == 0||strcmp(esc1,"c") == 0||strcmp(esc1, "d") == 0){
       printf("\nresposta incorreta !!!\nA resposta e: B\n\n");
        int cont = 3;printf("proxima questao em: ");
        while(cont >= 0){
          sleep(1);
          printf("%d ",cont);
          cont--;
          }
       goto quest1;
    }else if(strcmp(esc1,"b") == 0){
        printf("\nParabens voce acertou !\n\n");
        // tempo
        int cont = 3;printf("proxima questao em: ");
        while(cont >= 0){
          sleep(1);
          printf("%d ",cont);
          cont--;
        }quest1:
        system("cls");
/*============================================================================================== 
                                            questao 2 
  ==============================================================================================*/
        char esc2[1];
        printf("qual e a capital do Brasil ?");
        printf("\n-------------------------------------------------------------\n");
        printf("\n(A) Brasilia");
        printf("\n(B) Canada");
        printf("\n(C) espirito santo");
        printf("\n(D) camaroes\n");
        printf("R: ");
        scanf("%s", esc2);
        if(strcmp(esc2,"b") == 0||strcmp(esc2,"c") == 0||strcmp(esc2, "d") == 0){
            printf("\nresposta incorreta !!!\nA resposta e: A\n\n");
            int cont = 3;printf("proxima questao em: ");
            while(cont >= 0){
            sleep(1);
            printf("%d ",cont);
          cont--;
          }
            goto quest2;
        }else if(strcmp(esc2,"a") == 0){
           printf("\nParabens voce acertou !\n\n");
           printf("proxima questao em: ");
           // tempo
           int cont = 3;
           while(cont >= 0){
           sleep(1);
           printf("%d ",cont);
           cont--;
          }quest2:
          system("cls");
/*============================================================================================== 
                                            questao 3 
  ==============================================================================================*/
          char esc3[1];
          printf("quanto e (4 x 2)2");
          printf("\n-------------------------------------------------------------\n");
          printf("\n(A) 16");
          printf("\n(B) 8");
          printf("\n(C) 32");
          printf("\n(D) 64\n");
          printf("R: ");
          scanf("%s", esc3);
          if(strcmp(esc3,"b") == 0||strcmp(esc3,"c") == 0||strcmp(esc3, "a") == 0){
            printf("\nresposta incorreta !!!\nA resposta e: D\n\n");
            int cont = 3;printf("proxima questao em: ");
            while(cont >= 0){
            sleep(1);
            printf("%d ",cont);
            cont--;
            }goto quest3;
          }else if(strcmp(esc3,"d") == 0){
              printf("\nParabens voce acertou !\n\n");
              printf("proxima questao em: "); 
              // tempo
              int cont = 3;
              while(cont >= 0){
              sleep(1);
              printf("%d ",cont);
              cont--;
              }quest3:
            system("cls");
/*============================================================================================== 
                                            questao 4
  ==============================================================================================*/
            char esc4[1];
            printf("quanto e 22 / 2");
            printf("\n-------------------------------------------------------------\n");
            printf("\n(A) 16\n(B) 11\n(C) 32\n(D) 64\n");
            printf("R: ");
            scanf("%s", esc4);
            if(strcmp(esc4,"a") == 0||strcmp(esc4,"c") == 0||strcmp(esc4, "d") == 0){
              printf("\nresposta incorreta !!!\nA resposta e: B\n\n");
              int cont = 3;printf("proxima questao em: ");
              while(cont >= 0){
              sleep(1);
              printf("%d ",cont);
              cont--;
              }goto quest4;
            }else if(strcmp(esc4,"b") == 0){
              printf("\nParabens voce acertou !\n\n");
              printf("proxima questao em: ");
              // tempo
              int cont = 3;
              while(cont >= 0){
              sleep(1);
              printf("%d ",cont);
              cont--;
              }quest4:
              system("cls");
/*============================================================================================== 
                                            questao 5
  ==============================================================================================*/
              char esc5[1];
              printf("Qual e o triangulo que tem todos os lados diferentes?");
              printf("\n-------------------------------------------------------------\n");
              printf("\n(A) equilatero\n(B) isoceles\n(C) escaleno\n(D) trapezio\n");
              printf("R: ");
              scanf("%s", esc5);
              if(strcmp(esc5,"b") == 0||strcmp(esc5,"a") == 0||strcmp(esc5, "d") == 0){
                printf("\nresposta incorreta !!!\nA resposta e: C\n\n");
                int cont = 3;printf("proxima questao em: ");
                while(cont >= 0){
                  sleep(1);
                  printf("%d ",cont);
                  cont--;
                  }goto quest5;
              }else if(strcmp(esc5,"c") == 0){
                printf("\nParabens voce acertou !\n");
                quest5:    
                int voltar;
                printf("\n1. repetir jogo\n");
                printf("2. voltar para o menu\n");
                scanf("%d",&voltar);if(voltar == 1){system("cls");pergunta();}else if(voltar == 2){system("cls");main();};
              }
          }
        }
      }
    }
}
void descricao2(){
    v1:
    printf("\tVoce e seu colega de trabalho estavam explorando a tumba do farao Neebe quando\n"
           "\tentraram em uma grande sala com escrituras na parede. Enquanto inspecionavam as\n"
           "\tescrituras, voces acidentalmente pressionaram um botao escondido que lacrou as\n"
           "\tportas, prendendo-os la dentro. Entao, cinco caixas apareceram no centro da sala, uma\n"
           "\tdelas contendo o botao para abrir as portas, mas uma delas contem uma cobra mortal!\n"
           "\tVoces decidem jogar turnos para abrir uma caixa de cada vez, na esperanca de nao\n"
           "\tencontrar a cobra.\n\n");
    int inicia;
    printf("1.comecar o jogo\n");
    scanf("%d", &inicia);
    if(inicia == 1){
        system("cls");
        cobra();
    }
    else{
        system("cls");
        goto v1;
    }
}
//                         JOGO DA COBRA NA CAIXA
int cobra(){
        int caixa[num_caixas];
        int player1, player2, snake, button;
        int i;

        for (i = 0; i < num_caixas; i++) {
            caixa[i] = 0;
        }

        srand(time(NULL));
        snake = rand() % num_caixas;
        button = rand() % num_caixas;

        while (button == snake) {
            button = rand() % num_caixas;
        }

        while (1) {
            // Jogador 1 escolhe uma caixa
            printf("Jogador 1, escolha uma caixa: ");
            scanf("%d", &player1);
            while (player1 < 1 || player1 > 5 || caixa[player1-1] != 0) {
                printf("Entrada invalida, escolha outra caixa: ");
                scanf("%d", &player1);
            }
            caixa[player1-1] = 1;

            // Verifica se o jogador 1 acertou o botão ou a cobra
            if (player1 == button) {
                printf("Jogador 1 encontrou o botao e ganhou o jogo!\n");
                break;
            }
            else if (player1 == snake) {
                printf("Jogador 1 encontrou a cobra e perdeu o jogo!\n");
                break;
            }

            // Jogador 2 escolhe uma caixa
            printf("Jogador 2, escolha uma caixa: ");
            scanf("%d", &player2);
            while (player2 < 1 || player2 > 5 || caixa[player2-1] != 0) {
                printf("Entrada invalida, escolha outra caixa: ");
                scanf("%d", &player2);
            }
            caixa[player2-1] = 2;
            if (player2 == button) {
                printf("Jogador 2 encontrou o botao e ganhou o jogo!\n");
                break;
            }
            else if (player2 == snake) {
                printf("Jogador 2 encontrou a cobra e perdeu o jogo!\n");
                break;
            }
        }
        ret:
        int final;
        printf("\n\n1.jogar denovo\n");
        printf("2.voltar para o menu\n");
        printf("R: ");
        scanf("%d",&final);
        if(final == 1){
            system("cls");
            cobra();
        }else if(final == 2){
            system("cls");
            main();
        }else{
            printf("entrada invalida tente denovo..\n");
            system("cls");
            goto ret;
        }
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                       //     classe principal     //
int main()
{  inicio: 
   system("cls");
   printf("\t\t\t< GAME DEV >");
   printf("\n1. perguntas e respostas\n");
   printf("2. cobra na caixa!\n");
   printf("3. Sair\n");
   int escolha;
   printf("escolha: ");
   scanf("%d", &escolha);

   switch (escolha)
   {
   case 1:
   printf("\ncarregando jogo...");
   sleep(3);
   system("cls");
    //pergunta();
    descricao1();
    break;

   case 2:
   printf("\ncarregando jogo...");
   sleep(3);
   system("cls");
    descricao2();
    break;
    case 3:
    printf("\nSaindo do menu...");
    sleep(3);
    break;
   default:
    goto inicio;
   }
   return 0;
}