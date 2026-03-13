/*
Tömb elemei, vesszővel elválasztva
Írjon eljárást, ami kap egy tömböt, s kiírja a tömb elemeit egymás mellé. 
Az elemek között legyen vessző és szóköz. Az utolsó elem után csak sortörés szerepeljen!
Példa kimenet:
4, 7, 34, 23, 67
*/

#include <stdio.h>

void kiir(int t[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i < n -1)
        {
            printf("%d, ", t[i]);
        }
        else
        {
            printf("%d\n", t[i]);
        }
    }
}

int main()
{

    int t[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    kiir(t,n);
    return 0;
}