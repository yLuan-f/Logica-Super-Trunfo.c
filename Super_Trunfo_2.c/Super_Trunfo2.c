#include <stdio.h>
#include <stdlib.h>

int main() {
 
  char PrimeiroAtributo, SegundoAtributo;
  float soma01, soma02;
  float valor01_1, valor01_2, valor02_1, valor02_2;
  
  // CARTA 01 
  char NomeDCidade01[20] = "Maceio";
  int Populacao01 = 12340000;
  float Area01 = 1521.11;
  float PIB01 = 699000000000.0;
  int PontosTuristicos01 = 50;
  float DensidadePopulacional01;
  float PIBperCapita01;
  // CARTA 02
  char NomeDCidade02[20] = "Santos";
  int Populacao02 = 234596000;
  float Area02 = 1200.27;
  float PIB02 = 361000000000.0;
  int PontosTuristicos02 = 30;
  float DensidadePopulacional02;
  float PIBperCapita02;

  // CALCULOS 01

  DensidadePopulacional01 = Populacao01 / Area01;
  PIBperCapita01 = (PIB01 * 1000000000) / Populacao01;

 // CALCULOS 02

  DensidadePopulacional02 = Populacao02 / Area02;
  PIBperCapita02 = (PIB02 * 1000000000) / Populacao02;


  //COMPARACAO

  printf("Bem vindo ao jogo. \n");
  printf("Escolha o primeiro atributo:\n");
  printf("A. Populacao.\n");
  printf("B. Area.\n");
  printf("C. PIB.\n");
  printf("D. Numero de pontos turisticos.\n");
  printf("E. Densidade Populacional.\n");
  printf("F. PIBpercapita. \n");

  scanf(" %c", &PrimeiroAtributo);

  switch (PrimeiroAtributo)
  {
    case 'A':
    case 'a':
    printf("Voce escolheu a opcao populacao. \n");
    valor01_1 = Populacao01; valor01_2 = Populacao02;
    break;
    case 'B':
    case 'b':
    printf("Voce escolheu a opcao Area. \n");
    valor01_1 = Area01; valor01_2 = Area02;
    break;
    case 'C':
    case 'c':
    printf("Voce escolheu a opcao PIB. \n");
    valor01_1 = PIB01; valor01_2 = PIB02;
    break;
    case 'D':
    case 'd':
    printf("Voce escolheu a opcao Pontos Turisticos. \n");
    valor01_1 = PontosTuristicos01; valor01_2 = PontosTuristicos02;
    break;
    case 'E':
    case 'e':
    printf("Voce escolheu a opcao Densidade Populacional. \n");
    valor01_1 = DensidadePopulacional01; valor01_2 = DensidadePopulacional02;
    break;
    case 'F':
    case 'f':
    valor01_1 = PIBperCapita01; valor01_2 = PIBperCapita02;
    break;
  default:
      printf("Opcao invalida.");
    break;
  }

    printf("Escolha o segundo atributo:\n");
      if (PrimeiroAtributo != 'A' && PrimeiroAtributo != 'a')
    printf("A. Populacao.\n");
      if (PrimeiroAtributo != 'B' && PrimeiroAtributo != 'b')
    printf("B. Area.\n");
      if (PrimeiroAtributo != 'C' && PrimeiroAtributo != 'c')
    printf("C. PIB.\n");
      if (PrimeiroAtributo != 'D' && PrimeiroAtributo != 'd')
    printf("D. Numero de pontos turisticos.\n");
      if (PrimeiroAtributo != 'E' && PrimeiroAtributo != 'e')
    printf("E. Densidade Populacional.\n");
      if (PrimeiroAtributo != 'F' && PrimeiroAtributo != 'f')
    printf("F. PIB per capita.\n");
    scanf(" %c", &SegundoAtributo);
    {
  switch (SegundoAtributo)
  {
      case 'A':
    case 'a':
    printf("Voce escolheu a opcao populacao. \n");
    valor02_1 = Populacao01; valor02_2 = Populacao02;
    break;
    case 'B':
    case 'b':
    printf("Voce escolheu a opcao Area. \n");
    valor02_1 = Area01; valor02_2 = Area02;
    break;
    case 'C':
    case 'c':
    printf("Voce escolheu a opcao PIB. \n");
    valor02_1 = PIB01; valor02_2 = PIB02;
    break;
    case 'D':
    case 'd':
    printf("Voce escolheu a opcao Pontos Turisticos. \n");
    valor02_1 = PontosTuristicos01; valor02_2 = PontosTuristicos02;
    break;
    case 'E':
    case 'e':
    printf("Voce escolheu a opcao Densidade Populacional. \n");
    valor02_1 = DensidadePopulacional01; valor02_2 = DensidadePopulacional02;
    break;
    case 'F':
    case 'f':
    valor02_1 = PIBperCapita01; valor02_2 = PIBperCapita02;
    break;
  default:
      printf("Opcao invalida.\n");
    break;
  }
}

  // SOMA

   soma01 = valor01_1 + valor02_1;
   soma02 = valor01_2 + valor02_2;

   // RESULTANDO

   printf("### Resultado Final ### \n");

   printf("Cidade 1: %s | Atributos escolhidos: %.2f e %.2f | Soma: %.2f\n",
          NomeDCidade01, valor01_1, valor02_1, soma01);
   printf("Cidade 2: %s | Atributos escolhidos: %.2f e %.2f | Soma: %.2f\n",
          NomeDCidade02, valor01_2, valor02_2, soma02);

   printf("%s\n", 
      (soma01 > soma02) ? NomeDCidade01 : 
      (soma02 > soma01) ? NomeDCidade02 : "Empate!!");

return 0;
}