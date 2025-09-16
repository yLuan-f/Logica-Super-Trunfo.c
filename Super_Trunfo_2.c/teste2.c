#include <stdio.h>

int main() {
 
  char PrimeiroAtributo, SegundoAtributo;
  int resultado01 = 0, resultado02 = 0; // Inicializar evita lixo de memória
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
  printf("A. Populacao.\nB. Area.\nC. PIB.\nD. Numero de pontos turisticos.\nE. Densidade Populacional.\nF. PIBpercapita. \n");

  printf("Escolha a comparacao:");
  scanf(" %c", &PrimeiroAtributo);

  switch (PrimeiroAtributo)
  {
    case 'A': case 'a':
      printf("Voce escolheu a opcao populacao. \n");
      resultado01 = Populacao01 > Populacao02 ? 1 : 0;
      valor01_1 = Populacao01; valor01_2 = Populacao02;
      break;

    case 'B': case 'b':
      printf("Voce escolheu a opcao Area. \n");
      resultado01 = Area01 > Area02 ? 1 : 0;
      valor01_1 = Area01; valor01_2 = Area02;
      break;

    case 'C': case 'c':
      printf("Voce escolheu a opcao PIB. \n");
      resultado01 = PIB01 > PIB02 ? 1 : 0;
      valor01_1 = PIB01; valor01_2 = PIB02;
      break;

    case 'D': case 'd':
      printf("Voce escolheu a opcao Pontos Turisticos. \n");
      resultado01 = PontosTuristicos01 > PontosTuristicos02 ? 1 : 0;
      valor01_1 = PontosTuristicos01; valor01_2 = PontosTuristicos02;
      break;

    case 'E': case 'e':
      printf("Voce escolheu a opcao Densidade Populacional. \n");
      resultado01 = DensidadePopulacional01 < DensidadePopulacional02 ? 1 : 0;
      valor01_1 = DensidadePopulacional01; valor01_2 = DensidadePopulacional02;
      break;

    case 'F': case 'f':
      printf("Voce escolheu a opcao PIB per capita. \n");
      resultado01 = PIBperCapita01 > PIBperCapita02 ? 1 : 0;
      valor01_1 = PIBperCapita01; valor01_2 = PIBperCapita02;
      break;

    default:
      printf("Opcao invalida.\n");
      break;
  }

  printf("Escolha o segundo atributo: \n");
  printf("A. Populacao.\nB. Area.\nC. PIB.\nD. Numero de pontos turisticos.\nE. Densidade Populacional.\nF. PIBpercapita. \n");
  scanf(" %c", &SegundoAtributo);

  if (PrimeiroAtributo == SegundoAtributo)
  {
    printf("Voce escolheu o mesmo atributo! \n");
  } else {
    switch (SegundoAtributo)
    {
      case 'A': case 'a':
        printf("Voce escolheu a opcao populacao. \n");
        resultado02 = Populacao01 > Populacao02 ? 1 : 0;
        valor02_1 = Populacao01; valor02_2 = Populacao02;
        break;

      case 'B': case 'b':
        printf("Voce escolheu a opcao Area. \n");
        resultado02 = Area01 > Area02 ? 1 : 0;
        valor02_1 = Area01; valor02_2 = Area02;
        break;

      case 'C': case 'c':
        printf("Voce escolheu a opcao PIB. \n");
        resultado02 = PIB01 > PIB02 ? 1 : 0;
        valor02_1 = PIB01; valor02_2 = PIB02;
        break;

      case 'D': case 'd':
        printf("Voce escolheu a opcao Pontos Turisticos. \n");
        resultado02 = PontosTuristicos01 > PontosTuristicos02 ? 1 : 0;
        valor02_1 = PontosTuristicos01; valor02_2 = PontosTuristicos02;
        break;

      case 'E': case 'e':
        printf("Voce escolheu a opcao Densidade Populacional. \n");
        resultado02 = DensidadePopulacional01 < DensidadePopulacional02 ? 1 : 0;
        valor02_1 = DensidadePopulacional01; valor02_2 = DensidadePopulacional02;
        break;

      case 'F': case 'f':
        printf("Voce escolheu a opcao PIB per capita. \n");
        resultado02 = PIBperCapita01 > PIBperCapita02 ? 1 : 0;
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

  // RESULTADO
  printf("### Resultado Final ### \n");
  printf("Cidade 1: %s | Atributos escolhidos: %.2f e %.2f | Soma: %.2f\n",
         NomeDCidade01, valor01_1, valor02_1, soma01);
  printf("Cidade 2: %s | Atributos escolhidos: %.2f e %.2f | Soma: %.2f\n",
         NomeDCidade02, valor01_2, valor02_2, soma02);

  if (resultado01 > resultado02)
  {
    printf("%s Venceu! \n", NomeDCidade01);
  } 
  else if (resultado02 > resultado01) 
  {
    printf("%s Venceu! \n", NomeDCidade02);
  } 
  else 
  {
    printf("Empate!!!\n");
  }

  return 0;
}
