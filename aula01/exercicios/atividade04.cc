#include <stdio.h>

int main()
{

  float salario, novoSalario;

  printf("Digite seu salario:");
  scanf("%f%*c", &salario);

  novoSalario = salario + (salario * 25 / 100);

  printf("Seu novo salario teve um reajuste de 25%  eh %f:", novoSalario);

  getchar();
  return 0;
}