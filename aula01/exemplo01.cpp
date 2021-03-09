#include <stdio.h>

int main()
{
  float nota1, nota2, soma;
  printf("Nota 1 :");
  scanf("%f%*c", &nota1);
  printf("nota 2:");
  scanf("%f%*c", &nota2);
  soma = nota1 + nota2;
  printf("A soma eh %f", soma);
  getchar();
  return 0;
}
