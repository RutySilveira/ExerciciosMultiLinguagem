#include <stdio.h>
#include <time.h>
#include <Windows.h>

void exibirMenu() // funcao que exibi o menu, para que o usuario escolha umas das opcoes que consta no menu.
{
  printf("\n===== Menu =====\n");
  printf("1. Começar o Jogo\n");
  printf("2. Exibir Regras\n");
  printf("3. Sair\n");
  printf("================\n");
}

void exibirRegras() // Funcao que exibe as regras do jogo
{
  printf("\n===== Jogo da Velha =====\n");
  printf("O Jogo da Velha é um jogo para dois jogadores, X e O.\n");
  printf("O tabuleiro é uma matriz 3x3.\n");
  printf("Cada jogador, em sua vez, marca uma célula vazia com seu símbolo.\n");
  printf("O objetivo é formar uma linha, coluna ou diagonal com seu símbolo.\n");
  printf("O jogo termina quando um jogador consegue formar uma linha, coluna ou diagonal ou quando não há mais células vazias.\n");
  printf("=========================\n");
}

void exibirTabuleiro(int tabuleiro[3][3]) // Funcao que exibi o tabuleiro. Ele sera exibido ao fim de cada jogada, do usuario ou do computador. Entao essa funcao esta sendo chamada varias vezes ao longo do codigo.
{
  printf("\nTabuleiro:\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      switch (tabuleiro[i][j])
      {
      case 0:
        printf(" _ "); // Se a célula/posicao estiver vazia (0), exibe um espaço para representar.. Quando o tabuleiro foi criada, as posicoes guaram o valor 0 . Mas aqui cada posição será mostrada com _    POIS o tabuleiro será exibido dessa forma.
        break;

      case 1:
        printf(" X "); // Se a célula/posicao estiver marcada pelo usuário (1), exibe 'X'.
        break;
      default:
        printf(" O "); // Se a célula/posicao estiver marcada pelo computador (2), exibe 'O'.
        break;
      }
    }

    printf("\n"); // Move para a próxima linha após exibir uma linha do tabuleiro.
  }
  printf("\n"); // Adiciona uma linha em branco para melhorar a legibilidade.
}

int verificarVencedor(int jogador, int tabuleiro[3][3]) // Funcao que verifica quem ganhou, ele esta verificando tanto o computador quanto do usuario, em outra parte do codigo ela esta sendo chamada e o numero do jogador esta sendo passado como parametro para verificar se ele é o ganhador.
{
  for (int i = 0; i < 3; i++) // Aqui as linhas vao de 0,1,2. Entao enquanto a linha for menor que 3, ela esta sendo verificada, e incrementada para passar para a proxima linha, e assim entao acontecerá a verificacao de todas as linhas
  {
    if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) // O tabuleiro é uma matriz. Esse if esta verificando as posicoes da matriz. Aqui esta sendo verificada as linhas. Ex: i significa linha, j significa coluna.Ex: tabuleiro[i][0], esta verificando a linha 0, coluna 0, tabuleiro[i][1], esta verificando a linha 0, coluna 1, tabuleiro[i][2], esta verificando a linha 0, coluna 2. Se uma linha inteira na horizontal for preeenchida por apenas um jogador, entao ele ganha.
    {
      return 1; // Se true retorna 1.
    }
  }

  for (int j = 0; j < 3; j++) // Aqui esta verificando a coluna. Se houve um ganhador por coluna. A coluna é o j .
  {
    if (tabuleiro[0][j] == jogador && tabuleiro[1][j] == jogador && tabuleiro[2][j] == jogador) // Aqui esta verificando a coluna. Se houve um ganhador por coluna. A coluna é o j .
    {
      return 1; // Se true retorna 1, que houve um ganhador pela coluna.
    }
  }

  if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) // Esta verificando se houve um ganhador pela diagonal principal
  {
    return 1; // True se houver um ganhador pela diagonal principal
  }

  if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) // Esta verificando se houve um ganhador pela diagonal secundaria. No caso se todas as posicoes da diagonal secundaria foi marcada apenas por um jogador.
  {
    return 1; // Se true retorna 1, que houve um ganhador pela diagonal secundaria.
  }

  return 0;
}

void definirJogadaUsuario(int tabuleiro[3][3]) // Funcao que irá controlar a jogada do usuario.
{
  int coluna, linha; // variaveis

  do
  {
    do
    {
      printf("Digite a coluna: "); // Aqui a coluna será pedida
      scanf("%d", &coluna);

      if (coluna < 1 || coluna > 3) // Se o valor informado na jogada para a coluna for menor que 1 OU maior que 3, o printf abaixo sera exibido na tela. Esse do while ira se repetir ate que o usuario passe um valor aceito. As colunas vao de 1 a 3 . Nao podendo ser menor que 1 ou maior que 3.
      {
        printf("Coluna inválida, escolha uma opção de 1 a 3!\n");
      }
    } while (coluna < 1 || coluna > 3);

    do
    {
      printf("Digite a linha: "); // Aqui será pedido o valor da linha, que pode ser de 1 a 3.
      scanf("%d", &linha);

      if (linha < 1 || linha > 3) // Se os valores forem menores que 1 ou maior que 3. os valores nao serao aceitos, e o printf abaixo sera exibido. E o lopp ficará rodadndo ate que um valor aceitavel seja digitado.
      {
        printf("Linha inválida, escolha uma opção de 1 a 3!\n");
      }
    } while (linha < 1 || linha > 3); // Esse do while ira se repetir ate que um valor aceitavel seja informado, como citado, tendo ele que ser maior  ou igual a 1 ou menor ou igual a 3.

    linha--;  // linha esta sendo decrementada
    coluna--; // linha esta sendo decrementada

    if (tabuleiro[linha][coluna] != 0) // O tabuleiro é iniciado com todas as posições contendo o numero 0. Indicando que a posicao nao esta ocupada. Entao se o valor da posicao for diferente de zero, é pq a posicao ja foi ocupada. Entao o printf abaixo será printado. Entao o jogador irá indicar outra posicao novamente.
    {
      printf("Essa posição já está ocupada. Escolha outra.\n");
    }
  } while (tabuleiro[linha][coluna] != 0);

  tabuleiro[linha][coluna] = 1; // Indica que a jogada do usuario será preenchida com 1, mas no tabuleiro isso irá aparecer como X .

  exibirTabuleiro(tabuleiro); // Aqui a funcao esta sendo chamada para exibir o tabuleiro depois da jogada do usuario.
}

void definirJogadaComputador(int tabuleiro[3][3]) // Funcao que controla a jogada do computador
    int linha,
    coluna;        // variaveis
srand(time(NULL)); // Inicializa a semente para a função rand() usando o tempo atual. Pequise esse funcao para entender melhor.

printf("O computador joga!\n");

do
{
  linha = rand() % 3;                    // Gera um número aleatório entre 0 e 2 para a linha. Pesquise essa funcao para entender melhor.
  coluna = rand() % 3;                   // Gera um número aleatório entre 0 e 2 para a linha
} while (tabuleiro[linha][coluna] != 0); // Repete a geração de números aleatórios até encontrar uma posição vazia.

tabuleiro[linha][coluna] = 2; // Marca a jogada do computador com '2' no tabuleiro. Mas no tabuleiro é exibido como 'O' .

exibirTabuleiro(tabuleiro);                                                       // Exibe o tabuleiro depois da jogada do computador.
printf("O computador jogou na linha %d e coluna %d.\n\n", linha + 1, coluna + 1); // printa a posicao que o computador jogou.
}

void iniciarJogo() // Funcao que irá iniciar o jogo.
{
  int tabuleiro[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}; // Aqui esta sendo usada uma matriz 3x3, e ja esta sendo definido seus valores, que no caso será 0.
  int jogadas = 5;                                         // variavel que irá funcionar como um contador, contando o numero de jogadas, que no total sao 9, mas aqui esta sendo verificada apenas do usuario, que comeca a partida, depois das 9 rodadas, o usuario jogou apenas 5 vzs.

  printf("\nJogo da Velha iniciado!\n");
  exibirTabuleiro(tabuleiro); // A funcao exibir tabuleiro esta sendo chamada, para o tabuleiro ser exibido na tela.

  do
  {
    definirJogadaUsuario(tabuleiro); // Aqui a funcao que irá definir a jogada do usuario.
    jogadas--;                       // decremento do contador

    if (verificarVencedor(1, tabuleiro) == 1) // Aqui temos um Se que esta usando/chamando a funcao que verifica o vencedor, os parametros estao sendo passados nos parenteses. O usuario é o numero 1, se o tabuleiro for == 1. Significa que o usuario ganhou, pois todas as opcoes estao marcadas com o seu numero, que no caso é o 1 . Mas o tabuleiro == 1 significa que deu True na funcao que verifica quem venceu o jogo. True é igual a 1.
    {
      printf("PARABÉNS, Você Venceu!\n");
      return;
    }

    if (jogadas == 0) // Se o numero de jogadas for igual a zero, significa que o jogo acabou, entao será verificado se tem algum ganhador.
    {
      break;
    }

    definirJogadaComputador(tabuleiro); // Aqui a funcao esta sendo chamada para o computador jogar.

    if (verificarVencedor(2, tabuleiro) == 1) // Aqui a funcao esta sendo chamada no if para verificar se o jogador numero 2 (que é o computador ganhou.) Esse 1 significa o retorno da Funcao. Esse 1 significa TRUE. Se o retorno for igual a 1, significa que ganhou, se o retorno for diferente de 1, significa FALSE, e que o computador nao ganhou. Mas esse if verifica se o computador ganhou, se sim o printf abaixo é exibido.
    {
      printf("Que Pena, o COMPUTADOR te Venceu!\n");
      return;
    }
  } while (jogadas > 0); // Esse do while roda ate que tenha um vencedor, ou ate que todas as jogadas tenham sido feitas, Aqui esta utilizando o contador jogadas.

  printf("Deu VELHA!\n"); // Se o jogo ficar empatado, significa que deu velha. Entao isso será exibido.
}

// Função principal, usando do while, essa funcao exibe o menu, as regras, inicia o jogo, ou encerra o programa.
int main()
{
  SetConsoleOutputCP(CP_UTF8); // Aqui é apenas uma configuração para imprimir corretamente os caracteres especiais no printf.

  int opcao; // variavel

  do
  {
    exibirMenu(); // Exibe o menu, logo depois vc escolhe uma das opcoes do menu, que vai para os case abaixo.
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      iniciarJogo(); // chama a funcao que inicia o jogo
      break;
    case 2:
      exibirRegras(); // chama a funcao que exibe as regras do jogo
      break;
    case 3: // Aqui o programa é encerrado
      printf("Saindo do programa...\n");
      break;
    default: // Se nao foi dada nenhuma opcap valida, cai no default, e uma nova opcao sera solicitada ao usuario.
      printf("Opção inválida. Escolha novamente.\n");
      break;
    }
  } while (opcao != 3); // Enquanto a opcao for diferente de 3, o menu ficará sendo exibido!

  return 0;
}