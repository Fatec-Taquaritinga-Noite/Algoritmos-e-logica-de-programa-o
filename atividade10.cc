#include <stdio.h>

int main()
{

  float area, raio;

  printf("Digite a area do circulo:");
  scanf("%f%*c", &raio);
  area = 3.1415 * (raio * raio);
  printf("Area do circulo eh : %4.2f", area);
  getchar();
  return 0;
}