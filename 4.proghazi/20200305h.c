/*
pozitív hozzáállás
Írjon eljárást, ami kap egy egészeket tartalmazó tömböt. 
Az eljárás cserélje ki a tömbben lévő negatív számokat az abszolútértékükre! Az eljárás a tömböt helyben módosítja.
A main() fv.-ben írassa ki a tömböt kétszer (a fenti eljárás meghívása előtt, majd után).
*/


#include <stdio.h>

void pozitiv(int t[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(t[i] < 0)
        {
            t[i] = t[i]*-1;
        }
    }
}

int main()
{

    int t[] = {1,2,3,4,-5,-6,-7,8,9,-10};
    int n = 10;

    printf("1. ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");

    pozitiv(t,n);

     printf("2. ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
    


    return 0;
}