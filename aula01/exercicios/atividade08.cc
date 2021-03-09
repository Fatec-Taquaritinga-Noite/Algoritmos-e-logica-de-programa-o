#include <stdio.h>

int main()
{

  float deposito, taxaJuros,redimento, calc;

  printf("Digite O deposito:");
  scanf("%f%*c", &deposito);
  printf("Digite a taxa de juros:");
  scanf("%f%*c", &taxaJuros);

  redimento =  deposito * taxaJuros / 100;
  calc = deposito + redimento;
  printf("O valor do rendimento %f", redimento);
  printf("O valor do deposito  com rendimento %f", calc);

  getchar();
  return 0;
}