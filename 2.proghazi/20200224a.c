/*
Írassuk ki az ASCII táblázatot a következő formában (részlet):

...
55: 7
56: 8
57: 9
58: :
59: ;
60: <
61: =
62: >
63: ?
64: @
65: A
66: B
67: C
68: D
...
Elegendő csupán a 32-126 (zárt) intervallumot figyelembe venni. 0-tól 31-ig a nem nyomtatható karakterek szerepelnek. A 127-es karakter (DEL) sem nyomtatható. 127 felett pedig lehetnek eltérések az egyes kódtáblák között. A [32, …, 126] intervallumban viszont mindig ugyanazok a nyomtatható karakterek szerepelnek.

Kérdés

Mennyi az angol ábécé nagybetűihez tartozó ASCII értékek összege?
*/

/*
#include <stdio.h>

int main() 
{
    for (int i = 32; i <= 126; i++) 
    {
        printf("%d: %c\n", i, i);
    }
    return 0;
}
*/

#include <stdio.h>

int main() 
{
    int osszeg = 0;

    for (int i = 65; i <= 90; i++) 
    {
        osszeg = osszeg + i;
    }

    printf("Osszeg: %d\n", osszeg);

    return 0;
}