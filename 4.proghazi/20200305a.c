/*
Tömb rendezett-e?
Írjunk függvényt, mely egy adott tömbről eldönti, hogy rendezett-e (*).
A tömb egész számokat tartalmaz. Az üres tömböt tekintsük rendezettnek.
(*) Rendezett tömb alatt (ha mást nem mondunk) olyan tömböt értünk, 
melyben az elemek növekvő (pontosabban nemcsökkenő) sorrendben helyezkednek el.
Megjegyzés #1
Amikor a feladat megfogalmazása úgy szól, hogy "írjunk függvényt", 
akkor természetesen nem csupán egy függvényt kell írni, hanem egy komplett, működő programot.
Viszont a programban legyen egy olyan függvény, amit a feladat kér!
A főprogramban (a main() fv.-ben) hívjuk meg a fv.-t, demonstráljuk annak használatát.
Megjegyzés #2
A feladat jelen esetben egy olyan fv.-t kér, ami egy egész számokat tartalmazó tömböt vár. 
A főprogramban hozzunk létre egy tömböt, töltsük fel tetszőleges egész értékekkel,
majd ezt adjuk át a fv.-nek.
*/

int rendezett_e(int t[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(t[i] > t[i+1])
        {
            return 0;
        }
    }
    return 1;
}




#include <stdio.h>
int main()
{
    /*int t[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    */

    int t[] = {1,3,2,4,5,6,7,8,9,10};
    int n = 10;

    if(rendezett_e(t,n))
    {
        printf("A tomb rendezett.\n");
    }
    else
    {
        printf("A tomb nem rendezett.\n");
    }

    return 0;
}