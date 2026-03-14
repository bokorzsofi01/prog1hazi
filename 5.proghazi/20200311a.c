/*
match_ends

#include "prog1.h"
#include <stdio.h>
#include <string.h>
Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):

match_ends(["aba", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1
Egészítsük ki a fenti kódot a feladat leírásának megfelelően (lásd komment rész). Írjuk meg a match_ends() fv.-t, s teszteljük le a fent látható tesztesetekre.
*/

#include <stdio.h>
#include "prog1.h"
#include <string.h>


int text_len(char text[]) 
{
    int length = 0;
    for(int i = 0; i < 100; i++) 
    {
        if(text[i] == '\0') 
        {
            break;
        }
        length = length + 1;
    }

    return length;
}

int match_ends(int n, string words[])
{
    int szamlalo = 0;
    for(int i = 0; i < n; i++)
    {
        int hossz = text_len(words[i]);
        if(hossz >= 2 && words[i][0] == words[i][hossz - 1])
        {
            szamlalo = szamlalo + 1;
        }
    }
    return szamlalo;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    printf("Sztringek szama: %d\n", match_ends(szavak1_meret, szavak1));

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}