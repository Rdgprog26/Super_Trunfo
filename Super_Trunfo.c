#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  printf ("Desafio Super Trunfo!\n");
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char Estado_1 = 'A';
  char Código_1[20] = "A01";
  char Nome_Cidade_1 [20] = "Tóquio";
  int Populacão_1 = 13503810;
  float Área_1 = 2189.08;
  float PIB_1 = 868.6;
  int Número_de_Pontos_Turísticos_1 = 250;

  char Estado_2 = 'B';
  char Código_2[20] = "A02";
  char Nome_Da_Cidade_2 [20] = "Veneza";
  int Populacão_2 = 249466;
  float Área_2 = 414.0;
  float PIB_2 = 45.0;
  int Número_de_Pontos_Turísticos_2 = 190;

  // Área para entrada de dados

  /*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/
  printf ("Carta 1: %c\n", Estado_1);
  printf ("Código da Carta: %s\n", Código_1);
  printf ("Cidade: %s\n", Nome_Cidade_1);
  printf ("População: %d\n", Populacão_1);
  printf ("Área por Km²: %.2f\n", Área_1);
  printf ("PIB em Bilhões: %.2f\n", PIB_1);
  printf ("Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos_1);

  printf ("Carta 2: %c\n", Estado_2);
  printf ("Código da Carta: %s\n", Código_2);
  printf ("Cidade: %s\n", Nome_Da_Cidade_2);
  printf ("População: %d\n", Populacão_2);
  printf ("Área por Km²: %.2f\n", Área_2);
  printf ("PIB Em Bilhões: %.2f\n", PIB_2);
  printf ("Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos_2);

  // Área para exibição dos dados da cidade

return 0;
} 
