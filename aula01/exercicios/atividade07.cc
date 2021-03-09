#include <stdio.h>

int main()
{

  float salario, novoSalario;

  printf("Digite seu salario:");
  scanf("%f%*c", &salario);

  printf("Salario:%4.2f\n", salario);

  novoSalario = (salario - (salario * 10 / 100)) + 50;
  printf("Seu novo salario: %4.2f", novoSalario);
  getchar();
  return 0;
}