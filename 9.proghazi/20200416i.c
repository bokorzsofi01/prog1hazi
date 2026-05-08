#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = a[(bal + jobb) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            /* */
            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(a, bal, j);
    if (i < jobb) quicksort(a, i, jobb);
}

int main(int argc,char *argv[])
{
    FILE *fajl = fopen(argv[1],"r");
    int kapacitas = 1000;
    int meret = 0;
    int *szamok = malloc(kapacitas * sizeof(int));
    int szam;

    while(fscanf(fajl,"%d",&szam) == 1)
    {
        if(meret == kapacitas)
        {
            kapacitas = kapacitas * 2;
            szamok = realloc(szamok,kapacitas*sizeof(int));
        }
        szamok[meret] = szam;
        meret = meret+1;
    }

    fclose(fajl);
    quicksort(szamok,0,meret-1);

    for(int i = 0;i < meret;i++)
    {
        printf("%d\n", szamok[i]);
    }

    free(szamok);
    return 0;
}