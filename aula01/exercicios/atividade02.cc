#include <stdio.h>

int main()
{

  float nota1, nota2, nota3, media;

  printf("Nota1:");
  scanf("%f%*c", &nota1);
  printf("Nota2:");
  scanf("%f%*c", &nota2);
  printf("Nota3:");
  scanf("%f%*c", &nota3);

  media = (nota1 + nota2 + nota3) / 3;
  printf("Media:%f", media);
  getchar();
  return 0;
}