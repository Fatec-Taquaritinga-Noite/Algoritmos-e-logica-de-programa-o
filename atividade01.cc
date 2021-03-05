#include <stdio.h>

int main()
{

  int valor1, valor2;

  printf("Digite o valor: ");
  scanf("%d%*c", &valor1);
  printf("Digite outro valor: ");
  scanf("%d%*c", &valor2);
  printf("Resultado da soma:%d", (valor1 + valor2));
  getchar();
  return 0;
}