#include <stdio.h>

int main()
{
  float base, altura, area;

  printf("Digite o valor da base:");
  scanf("%f%*c", &base);
  printf("Digite o valor da altura:");
  scanf("%f%*c", &altura);

  area = (base * altura) / 2;

  printf("A area do triagulo eh %4.2f", area);

  getchar();
  return 0;
}