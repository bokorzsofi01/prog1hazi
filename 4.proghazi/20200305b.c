/*
Tömb legkisebb / legnagyobb eleme
A) verzióű
Írjunk fv.-t, ami visszaadja egy egészeket tartalmazó tömb legkisebb elemét. 
Feltételezhetjük, hogy a tömb legalább 1 db elemet tartalmaz.
B) verzió
Írjunk fv.-t, ami visszaadja egy egészeket tartalmazó tömb legnagyobb elemét. 
Feltételezhetjük, hogy a tömb legalább 1 db elemet tartalmaz.
Megjegyzés
Amikor a feladat szövegében az szerepel, hogy "ezt meg ezt feltételezhetjük", 
akkor az azt jelenti, hogy ezt az információt biztosra vehetjük. 
A fenti példában a "feltételezhetjük, hogy a tömb legalább 1 db elemet tartalmaz" jelentése: a fv. 
biztosan nem kap üres tömböt, ezt az esetet nem kell külön levizsgálni. A tömb garantáltan tartalmaz 
minimum 1 db elemet.
*/

#include <stdio.h>

int legkisebb(int t[], int n)
{
    int legkisebbelem = t[0];
    for(int i = 0; i < n; i++)
    {
        if(t[i] < legkisebbelem)
        {
            legkisebbelem = t[i];
        }
    }
    return legkisebbelem;
}

int legnagyobb(int t[], int n)
{
    int legnagyobbelem = t[0];
    for(int i = 0; i < n; i++)
    {
        if(t[i] > legnagyobbelem)
        {
            legnagyobbelem = t[i];
        }
    }
    return legnagyobbelem;
}

int main()
{
    int t[] = {9,6,5,4,7,3,2,45,1};
    int n = 9;

    printf("A tomb legkisebb eleme: %d\n", legkisebb(t,n));
    printf("A tomb legnagyobb eleme: %d\n", legnagyobb(t,n));

    return 0;
}