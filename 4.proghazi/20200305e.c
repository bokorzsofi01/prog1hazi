/*
Páros? Páratlan?
A) verzió [páros]
Írjon egy függvényt, ami megkap egy egész számot, 
és ha az átadott szám páros, akkor 1-gyel (igazzal) tér vissza, különben 0-val (hamissal).
A függvény deklarációja:
int is_even(int n);
B) verzió [páratlan]
Írjon egy függvényt, ami megkap egy egész számot, és ha az átadott szám páratlan, akkor 1-gyel tér vissza,
különben 0-val.
A függvény deklarációja:
int is_odd(int n);
Kérdés
Próbálja meg úgy is implementálni a B) verziót, hogy felhasználja az is_even() fv.-t
*/

int is_even(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_odd(int n)
{
     if(n % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_odd2(int n)
{
    if(is_even(n) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
#include <stdio.h>
int main()
{

    int n = -4;
    if(is_even(n) == 1)
    {
        printf("A szam paros.\n");
    }
    else
    {
        printf("A szam paratlan.\n");
    }
    return 0;
}
