/*
Diamond
Írjunk egy programot, ami interaktív módon bekéri egy gyémánt magasságát (egész szám).

Először ellenőrizzük le, hogy helyes-e a bemenet. Csak pozitív páratlan számot fogadjunk el, ellenkező esetben írjunk ki egy hibaüzenetet és a program álljon le.

Helyes bemenet (pozitív páratlan szám) esetén rajzoljuk ki a gyémántot a következőképpen:

Magasság: 3

 *
***
 *
Magasság: 7

   *
  ***
 *****
*******
 *****
  ***
   *
Megjegyzés

Az interaktív mód jelentése: a bemenetet a felhasználótól várjuk, a billentyűzeten keresztül.
*/

#include <stdio.h>

int main()
{
   int magassag = 0;
   printf("Magassag: ");
   scanf("%d", &magassag);

   if(magassag <= 0 || magassag % 2 == 0)
   {
      printf("Hiba!\n");
      return 0;
   }
   int kozepe = magassag / 2;

   for(int i = 0; i <= kozepe; i++)
   {
      for(int j = 0; j < kozepe - i; j++)
      {
         printf(" ");
      }
      for(int j = 0; j < 2*i+1; j++)
      {
         printf("*");

      }
      printf("\n");
   }

   for(int i = kozepe - 1; i >= 0; i--)
   {
      for(int j = 0; j < kozepe - i; j++)
      {
         printf(" ");
      }
      for(int j = 0; j < 2*i+1; j++)
      {
         printf("*");

      }
      printf("\n");
   }

   return 0;
}