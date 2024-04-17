int main(void)
{
  int contador1, contador2, somatorio = 0, num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  for (contador1 = 1; contador1 <= num; contador1++)
    for (contador2 = 1; contador2 <= num; contador2++)
      somatorio += contador1 + contador2;
  printf("O somatorio é: %d.", somatorio);
}