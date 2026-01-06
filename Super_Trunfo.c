#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  
  printf ("Desafio Super Trunfo!\n");
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char Estado_1 = 'A';
  char Código_1[20] = "A01";
  char Nome_Cidade_1 [20] = "Tóquio";
  unsigned long int Populacão_1 = 1350810;
  float Área_1 = 2189.00;
  float PIB_1 = 1968000000;
  int Número_de_Pontos_Turísticos_1 = 250;

  char Estado_2 = 'B';
  char Código_2[20] = "B02";
  char Nome_Da_Cidade_2 [20] = "Veneza";
  unsigned long int Populacão_2 = 249466;
  float Área_2 = 414.0;
  float PIB_2 = 757000000.0;
  int Número_de_Pontos_Turísticos_2 = 190;
  
  /*Calculando o PIB per capita e a Densidade Populacional utilizando 
  a Divisão de duas variáveis.
  */
  

  float Densidade_populacional_A01 = Populacão_1 / Área_1;
  float PIB_Per_Capita_A01 = PIB_1 / Populacão_1;
  float Densidade_populacional_B02 = Populacão_2 / Área_2;
  float PIB_Per_Capita_B02 = PIB_2 / Populacão_2;

  /*Calculando o Super Poder de Cada Carta somando cada valor de variavel
  E o inverso da Densidade populacional.
  */

  float Superpoder_A01 = 1 / Densidade_populacional_A01 + Populacão_1 + Área_1 + PIB_1 + Número_de_Pontos_Turísticos_1 + PIB_Per_Capita_A01;
  float Superpoder_B02 = 1 / Densidade_populacional_B02 + Populacão_2 + Área_2 + PIB_2 + Número_de_Pontos_Turísticos_2 + PIB_Per_Capita_B02;
  
  //comparando e idenficicando o maior poder de cada variavel entre carta as 2 cartas.

  int resultado_populacao = Populacão_1 > Populacão_2;
  int resultado_área = Área_1 > Área_2;
  int resultado_pib = PIB_1 > PIB_2;
  int resultado_pontoTuristico = Número_de_Pontos_Turísticos_1 > Número_de_Pontos_Turísticos_2;
  int resultado_densidade = Densidade_populacional_A01 < Densidade_populacional_B02;
  int resultado_pibPerCapta = PIB_Per_Capita_A01 > PIB_Per_Capita_B02;
  int resultado_SuperPoder = Superpoder_A01 > Superpoder_B02;

  // Área para exibição dos dados das duas cartas
  
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
  printf ("População: %ld\n", Populacão_1);
  printf ("Área por Km²: %.2f\n", Área_1);
  printf ("PIB: %.2f\n", PIB_1);
  printf ("Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos_1);
  printf ("Densidade Populacional: %.2f\n",Densidade_populacional_A01);
  printf ("PIB Per Capita: %.2f\n", PIB_Per_Capita_A01);
  printf ("O Super Poder da Carta 1 é: %.2f\n", Superpoder_A01);

  printf ("Carta 2: %c\n", Estado_2);
  printf ("Código da Carta: %s\n", Código_2);
  printf ("Cidade: %s\n", Nome_Da_Cidade_2);
  printf ("População: %ld\n", Populacão_2);
  printf ("Área por Km²: %.2f\n", Área_2);
  printf ("PIB: %.2f\n", PIB_2);
  printf ("Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos_2);
  printf ("Densidade Populacional: %.2f\n",Densidade_populacional_B02);
  printf ("PIB Per Capita: %.2f\n", PIB_Per_Capita_B02);
  printf ("O Super Poder da Carta 2 é: %.2f\n", Superpoder_B02);
 
// Área para exibição dos Resultados das comparações dos poderes de cada variável das 2 cartas

printf ("A Carta %s tem o valor de poder População maior que %s: %d\n", Código_1 , Código_2 , resultado_populacao);
printf ("A Carta %s tem o valor de poder Área maior que %s: %d\n", Código_1 , Código_2 , resultado_área);
printf ("A Carta %s tem o valor de poder PIB maior que %s: %d\n", Código_1 , Código_2 , resultado_pib);
printf ("A Carta %s tem o valor de poder Ponto Turístico maior que %s: %d\n", Código_1 , Código_2 , resultado_pontoTuristico);
printf ("A Carta %s tem o valor de poder Densidade maior que %s: %d\n", Código_1 , Código_2 , resultado_densidade);
printf ("A Carta %s tem o valor de poder PIB per Capita maior que %s: %d\n", Código_1 , Código_2 , resultado_pibPerCapta);
printf ("A Carta %s tem o valor de Superpoder maior que %s: %d\n", Código_1 , Código_2 , resultado_SuperPoder);

return 0;
} 
