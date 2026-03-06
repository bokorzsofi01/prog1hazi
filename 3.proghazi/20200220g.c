/*Írjunk egy programot, ami bekér egy magasságot, majd kirajzol két derékszögű háromszöget egymás mellé az alább látható módon.
 (A két háromszög között 2 db szóköz legyen).

Példák:

magassag: 3

  #  #
 ##  ##
###  ###
magassag: 1

#  #
magassag: 5

    #  #
   ##  ##
  ###  ###
 ####  ####
#####  #####
*/

#include <stdio.h>

int main()
{
  int magassag;
  printf("magassag:");
  scanf("%d", &magassag);

  for(int i = 1; i <= magassag;i++)
  {
    for (int j = 0; j < magassag-i; j++)
    {
      printf(" ");
    }
    for(int j = 0; j < i; j++)
    {
      printf("#");
    }
    printf("  ");
    for(int j = 0; j< i; j++)
    {
      printf("#");
    }
    printf("\n");
  }

  return 0;
}


