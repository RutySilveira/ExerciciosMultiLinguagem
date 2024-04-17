#include <stdio.h>
#include <time.h>
#include <Windows.h>

void exibirMenu()
{
  printf("\n===== Menu =====\n");
  printf("1. Começar o Jogo\n");
  printf("2. Exibir Regras\n");
  printf("3. Sair\n");
  printf("================\n");
}

void exibirRegras()
{
  printf("\n===== Jogo da Velha =====\n");
  printf("O Jogo da Velha é um jogo para dois jogadores, X e O.\n");
  printf("O tabuleiro é uma matriz 3x3.\n");
  printf("Cada jogador, em sua vez, marca uma célula vazia com seu símbolo.\n");
  printf("O objetivo é formar uma linha, coluna ou diagonal com seu símbolo.\n");
  printf("O jogo termina quando um jogador consegue formar uma linha, coluna ou diagonal ou quando não há mais células vazias.\n");
  printf("=========================\n");
}

void exibirTabuleiro(int tabuleiro[3][3])
{
  printf("\nTabuleiro:\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      switch (tabuleiro[i][j])
      {
      case 0:
        printf(" _ ");
        break;

      case 1:
        printf(" X ");
        break;
      default:
        printf(" O ");
        break;
      }
    }

    printf("\n");
  }
  printf("\n");
}

int verificarVencedor(int jogador, int tabuleiro[3][3])
{

  for (int i = 0; i < 3; i++)
  {
    if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
    {
      return 1;
    }
  }

  for (int j = 0; j < 3; j++)
  {
    if (tabuleiro[0][j] == jogador && tabuleiro[1][j] == jogador && tabuleiro[2][j] == jogador)
    {
      return 1;
    }
  }

  if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador)
  {
    return 1;
  }

  if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)
  {
    return 1;
  }

  return 0;
}

void definirJogadaUsuario(int tabuleiro[3][3])
{
  int coluna, linha;

  do
  {
    do
    {
      printf("Digite a coluna: ");
      scanf("%d", &coluna);

      if (coluna < 1 || coluna > 3)
      {
        printf("Coluna inválida, escolha uma opção de 1 a 3!\n");
      }
    } while (coluna < 1 || coluna > 3);

    do
    {
      printf("Digite a linha: ");
      scanf("%d", &linha);

      if (linha < 1 || linha > 3)
      {
        printf("Linha inválida, escolha uma opção de 1 a 3!\n");
      }
    } while (linha < 1 || linha > 3);

    linha--;
    coluna--;

    if (tabuleiro[linha][coluna] != 0)
    {
      printf("Essa posição já está ocupada. Escolha outra.\n");
    }
  } while (tabuleiro[linha][coluna] != 0);

  tabuleiro[linha][coluna] = 1;

  exibirTabuleiro(tabuleiro);
}
void definirJogadaComputador(int tabuleiro[3][3])
{
  int linha, coluna;
  srand(time(NULL));

  printf("O computador joga!\n");

  do
  {
    linha = rand() % 3;
    coluna = rand() % 3;
  } while (tabuleiro[linha][coluna] != 0);

  tabuleiro[linha][coluna] = 2;

  exibirTabuleiro(tabuleiro);
  printf("O computador jogou na linha %d e coluna %d.\n\n", linha + 1, coluna + 1);
}

void iniciarJogo()
{
  int tabuleiro[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  int jogadas = 5;

  printf("\nJogo da Velha iniciado!\n");
  exibirTabuleiro(tabuleiro);

  do
  {
    definirJogadaUsuario(tabuleiro);
    jogadas--;

    if (verificarVencedor(1, tabuleiro) == 1)
    {
      printf("PARABÉNS, Você Venceu!\n");
      return;
    }

    if (jogadas == 0)
    {
      break;
    }

    definirJogadaComputador(tabuleiro);

    if (verificarVencedor(2, tabuleiro) == 1)
    {
      printf("Que Pena, COMPUTADOR Venceu!\n");
      return;
    }
  } while (jogadas > 0);

  printf("Deu VELHA!\n");
}

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  int opcao;

  do
  {
    exibirMenu();
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      iniciarJogo();
      break;
    case 2:
      exibirRegras();
      break;
    case 3:
      printf("Saindo do programa...\n");
      break;
    default:
      printf("Opção inválida. Escolha novamente.\n");
      break;
    }
  } while (opcao != 3);

  return 0;
}