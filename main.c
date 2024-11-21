#include <stdio.h>

int main(void) {
  // Imprime o cabeçalho do nosso Jogo
  printf("******************************************\n");
  printf("* Bem vindo ao nosso jogo de adivinhação *\n");
  printf("******************************************\n");
  // return 0;
  int numerosecreto = 42;
  int chute;

  printf("Qual é o seu chute? ");
  scanf("%d", &chute);
  printf("Seu chute foi %d\n", chute);
}