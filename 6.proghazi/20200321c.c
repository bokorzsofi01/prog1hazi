/*
két szám összege
Írjunk programot, ami parancssori argumentumként vár két egész számot. A program írja ki a két szám összegét.
Ha a felhasználó nem pontosan két argumentumot adott meg, akkor írjon ki egy hibaüzenetet!
Példa
$ ./a.out
Hiba! Két paramétert (számot) kell megadni.
$ ./a.out 20
Hiba! Két paramétert (számot) kell megadni.
$ ./a.out 20 5
25
$ ./a.out 20 5 67
Hiba! Két paramétert (számot) kell megadni.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{

    if(argc != 3) 
    {
        printf("Hiba!\n");
    }
    else 
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        printf("%d\n", a + b);
    }

    return 0;
}