// MAKE ROCK PAPER SCESSOR GAME READY ,PLAY WITH COMPUTER :



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int grandom(int n)
{
  srand(time(NULL));
  return rand() % n;
}
int greater(char c1, char c2)
{
  if (c1 == 'R' && c2 == 'S' || c1 == 'P' && c2 == 'R' || c1 == 'S' && c2 == 'P')
  {
    return 1;
  }
  else if (c1 == c2)
  {
    return 0;
  }
  else
  {
    return -1;
  }
}
int main()
{
  int p1score = 0, cscore = 0, t;
  char p1char, cchar;
  char arr[] = {'R', 'P', 'S'};
  printf("Welcome to rock paper scissor :\n");
  for (int i = 0; i < 3; i++)
  {
    printf("chose 1 for rock, chose 2 for paper, chose 3 for scissor\n");
    printf("Player 1's turn :\n");
    scanf("%d", &t);
    p1char = arr[t - 1];

    printf("chose 1 for rock, chose 2 for paper, chose 3 for scissor\n");
    printf("Computer's turn :\n");
    t = grandom(3) + 1;
    cchar = arr[t - 1];

    printf("Player 1's chose :%c\n", p1char);
    printf("Computer's chose :%c\n", cchar);

    if (greater(cchar, p1char) == 1)
    {
      cscore += 1;
    }

    if (greater(cchar, p1char) == -1)
    {
      p1score += 1;
    }

    else
    {
      p1score += 1;
      cscore += 1;
    }

  printf("the number of win player1 is : %d\n", p1score);
  printf("the number of win computer is : %d\n", cscore);
    }

  if (p1score > cscore)
  {
    printf("player 1 win ");
  }

  else if (p1score < cscore)
  {
    printf("Computer win ");
  }

  else
  {
    printf("DRAW MATCH");
  }
  return 0;
}