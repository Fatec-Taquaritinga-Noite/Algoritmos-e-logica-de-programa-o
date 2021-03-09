#include <stdio.h>


int main()
{

  float salario, novoSalario,percentual;

  printf("Digite seu salario:");
  scanf("%f%*c", &salario);
  printf("Digite o percentual do reajuste do salario:");
  scanf("%f%*c", &percentual);

  novoSalario = salario + (salario * percentual / 100);

  printf("Seu novo salario teve um reajuste de %4.2f   eh %4.2f:", percentual, novoSalario);

  getchar();
  return 0;
}