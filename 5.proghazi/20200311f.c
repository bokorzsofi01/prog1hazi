/*
karakter előfordulásainak a száma egy sztringben

Implementáljuk az alábbi függvényt:

// Az s sztringben a c karakter hányszor fordul elő?
int char_count(string s, char c);
Példák:

char_count("Abba", 'b') -> 2
char_count("Abba", 'a') -> 1
char_count("Abba", 'x') -> 0
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

int char_count(string s, char c)
{
    int szamlalo = 0;
    for(int i = 0; i < text_len(s);i++)
    {
        if(s[i]== c)
        {
            szamlalo = szamlalo + 1;
        }
    }
    printf("%d\n", szamlalo);
    return szamlalo;
}

int main()
{
    char_count("Abba", 'b');
    char_count("Abba", 'a');
    char_count("Abba", 'x');

    return 0;
}