/*
index() függvény megírása: egy tömbben hol (melyik indexpozíción) szerepel egy adott elem? 
Ha a tömbben nincs benne az adott elem, akkor a fv.-nek milyen értéket kellene visszaadni?
*/

#include <stdio.h>

int inde_x(int t[], int n, int elem)
{
    for(int i = 0; i < n; i++)
    {
        if(t[i] == elem)
        {
            return i+1;
        }
    }

    return -1;

}

int main()
{
    int t[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    //int elem = 5;
    int elem = 20;

    if(inde_x(t,n,elem) == -1)
    {
        printf("Az elem nincs a tombben.\n");
    }
    else
    {
        printf("Az %d elem indexe: %d\n", elem, inde_x(t,n,elem));
    }


    return 0;
}