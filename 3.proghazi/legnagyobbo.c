/*
Írjon függvényt, ami vissza adja a legnagyobb osztóját a megadott számnak ( önmagát kivéve ),
 majd írjon a main függvényben egy ciklust, kiírja az első 50 szám legnagyobb osztóját 
 a függvény felhasználásával.
*/
#include <stdio.h>

int legnagyobbo_f(int n)
{
    int legnagyobbo = 1;
    for(int i = 1; i < n;i++)
    {
        if(n % i == 0)
        {
            legnagyobbo = i;
        }
    }
    return legnagyobbo;

}

int main()
{
    printf("Elso 50 szam osztoi:\n");
    for(int i = 1; i <= 50; i++)
    {
        int vegeredmeny = legnagyobbo_f(i);
        printf("%d : %d\n", i, vegeredmeny);
    }
    return 0;
}
