int main()
{
  float media, nota1, nota2, nota3, nota4, nota5;

  scanf("%f", &nota1);
  scanf("%f", &nota2);
  scanf("%f", &nota3);
  scanf("%f", &nota4);
  scanf("%f", &nota5);

  media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
  printf("A média do aluno é: %.2f\n", media);

  if (media >= 12.0)
  {
    printf("Aluno Aprovado\n");
  }
  else
  {
    printf("Aluno Reprovado\n");
  }
}