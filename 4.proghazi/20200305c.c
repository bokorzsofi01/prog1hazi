/*
felhőkarcolók

Adott egy tömb, amiben egymás melletti felhőkarcolók magasságát tároljuk, pl.: [2, 4, 8, 3, 9, 7, 1].
Számítsuk ki a szomszédos felhőkarcolók magasságkülönbségének az összegét.
A fenti példára a válasz 25 lenne, hiszen 2 + 4 + 5 + 6 + 2 + 6 = 25.
Feladat
Vegyük a 21024 számot. Ha ezen szám számjegyeit felhőkarcolók magasságának tekintjük, 
akkor mennyi lesz a szomszédos felhőkarcolók magasságkülönbségének az összege.
Segítség
Most nem egy teljesen általános megoldás kell, ami bármilyen számra működik. Van egy konkrét kérdés, 
ami a 21024 szám feldolgozását kéri. Egy olyan programot kell most írnunk, ami erre a konkrét kérdésre ad választ.
Vagyis: ki kell számítani, hogy mennyi 21024, venni kell az egyes számjegyeket, majd ezeket be kell tenni egy tömbbe. 
Ezt úgy oldják meg, ahogy tudják (vagyis nem muszáj C-t használni ehhez a részhez).
Miután a forráskódba beírták a tömböt, onnantól már tudnak tovább dolgozni. 
A tömb feldolgozására viszont már egy általános fv.-t kell írni, 
ami bármilyen tömb esetén felelni tud a feladatban szereplő kérdésre (vagyis, hogy mennyi a szomszédos felhőkarcolók magasságkülönbségének az összege).
*/


#include <stdio.h>

int kulonbseg_oszeg(int t[], int n)
{
    int osszeg = 0;
    for(int i = 0; i < n-1; i++)
    {
        int kulonbseg = t[i] - t[i+1];

        if(kulonbseg < 0)
        {
            kulonbseg = -1*kulonbseg;  
        }
        osszeg = osszeg + kulonbseg;
    }
    return osszeg;
}

int main()
{
    int t[] = {2,1,0,2,4};
    int n = 5;
    printf("Osszeg: %d\n", kulonbseg_oszeg(t,n));
    return 0;
}