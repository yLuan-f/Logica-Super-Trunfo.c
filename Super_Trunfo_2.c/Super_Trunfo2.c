#include <stdio.h>

int main() {
 
  // CARTA 01 
  char Estado01 = 'A';
  char CodigoC01[5] = "A01";
  char NomeDCidade01[20] = "Maceio";
  int Populacao01 = 12340000;
  float Area01 = 1521.11;
  float PIB01 = 699000000000.0;
  int PontosTuristicos01 = 50;
  float DensidadePopulacional01;
  float PIBperCapita01;
  // CARTA 02
  char Estado02 = 'B';
  char CodigoC02[5] = "B02";
  char NomeDCidade02[20] = "Santos";
  int Populacao02 = 234596000;
  float Area02 = 1200.27;
  float PIB02 = 361000000000.0;
  int PontosTuristicos02 = 30;
  float DensidadePopulacional02;
  float PIBperCapita02;

  // CALCULOS 02

  DensidadePopulacional01 = Populacao01 / Area01;
  PIBperCapita01 = (PIB01 * 1000000000) / Populacao01;

 // CALCULOS 02

  DensidadePopulacional02 = Populacao02 / Area02;
  PIBperCapita02 = (PIB02 * 1000000000) / Populacao02;

  // CARTA 01 SAÍDAS

  printf("~~~~~~Carta 01~~~~~~\n");
  printf("Estado: %c\n", Estado01);
  printf("Código: %s\n", CodigoC01);
  printf("Nome da Cidade:%s\n", NomeDCidade01);
  printf("População: %d\n", Populacao01);
  printf("Área: %.2f\n", Area01);
  printf("PIB: %.2f\n", PIB01);
  printf("Número de Pontos Turísticos: %d\n", PontosTuristicos01);
  printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional01);
  printf("PIB per Capita: %.2f Reais\n", PIBperCapita01);

  //CARTA 02 SAÍDAS

  printf("~~~~~~Carta 02~~~~~~\n");
  printf("Estado: %c\n", Estado02);
  printf("Código: %s\n", CodigoC02);
  printf("Nome da Cidade:%s\n", NomeDCidade02);
  printf("População: %d\n", Populacao02);
  printf("Área: %.2f km²\n", Area02);
  printf("PIB: %.2f Bilhões de Reais\n", PIB02);
  printf("Número de Pontos Turísticos: %d\n", PontosTuristicos02);
  printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional02);
  printf("PIB per Capita: %.2f Reais\n", PIBperCapita02);


  //COPARACAO

  printf("**** Comparacao de cartas****\n");

  printf("Atributo: Area\n");
  printf("Carta 1: %.2f\n", Area01);
  printf("Carta 2: %.2f\n", Area02);

  if (Area01 > Area02) {
  printf("A carta 1 venceu!\n");
  } else {
  printf("A carta 2 venceu!\n");
}
  return 0;

}