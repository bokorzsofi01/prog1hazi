/*
contains() függvény megírása: egy tömbben szerepel-e egy adott elem?
*/
#include <stdio.h>
int szerepele(int t[], int n, int elem)
{
    for(int i = 0; i < n; i++)
    {
        if(t[i] == elem)
        {
            return 1;
        }  
    }
    return 0;
}


int main()
{
    //int t[] = {1,2,3,4,5,6,7,8,9,10};
    int t[] = {1,2,3,4,6,7,8,9,10};
    int n = 10;
    int elem = 5;
    if(szerepele(t,n,elem))
    {
        printf("Az elem szerepel.");
    }
    else
    {
        printf("Az elem  nem szerepel.");
    }

    return 0;
}