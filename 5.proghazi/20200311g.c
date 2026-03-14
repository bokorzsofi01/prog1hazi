/*
karakter utolsó előfordulásának a helye egy sztringben

Implementáljuk az alábbi függvényt:

// Az s alapsztringben keressük a c karakter utolsó előfordulásának a helyét.
// Visszatérési érték: a c utolsó előfordulásának az indexe az s-ben.
// Ha nincs benne: -1 a visszatérési érték.
int rfind_char(string s, char c);
Példák:

rfind_char("Abba", 'b') -> 2
rfind_char("Abba", 'a') -> 3
rfind_char("Abba", 'x') -> -1
rfind_char("Aladar", 'a') -> 4
*/

#include <stdio.h>
#include "prog1.h"

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


int rfind_char(string s, char c)
{
    int iszamlalo = -1;
    for(int i = 0; i < text_len(s); i++)
    {
        if(s[i]==c)
        {
            iszamlalo = i;
        }
    }
    printf("%d\n", iszamlalo);
    return iszamlalo;
}

int main()
{
    rfind_char("Abba", 'b');
    rfind_char("Abba", 'a');
    rfind_char("Abba", 'x');
    rfind_char("Aladar", 'a');

    return  0;
}