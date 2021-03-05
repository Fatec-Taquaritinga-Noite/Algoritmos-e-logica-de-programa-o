#include <stdio.h>

int main()
{

  float salario, novoSalario;

  printf("Digite seu salario:");
  scanf("%f%*c", &salario);

  novoSalario = salario + (salario * 5 / 100) - (salario *7/100);
  printf("Seu salario eh %4.2f ", novoSalario);
  getchar();
  return 0;
}