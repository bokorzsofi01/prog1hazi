/*Kör
Írjunk egy programot, ami a felhasználótól bekéri egy kör sugarát (valós érték). Írjuk ki a képernyőre a kör kerületét és területét.
Mind a beolvasásnál, mind a kiíratásnál informatív módon tájékoztassuk a felhasználót!
Tipp
Szükség lesz a pí értékére is. Ezt ne kézzel írjuk be (3.14)! A standard könyvtárban biztosan szerepel valahol. Nézzük meg a math.h állomány tartalmát…
Ha nagyon nem találjuk, akkor a pí értékét most még kézzel is beírhatjuk.*/

#include <stdio.h>

int main()
{
    double pi;
    pi = 3.14159;
    double sugar;
    printf("Add meg a kor sugarat: ");
    scanf("%lf", &sugar);


    double kerulet = 2*sugar*pi;
    double terulet = pi*sugar*sugar;

    printf("A kor kerulete: %lf cm\n", kerulet);
    printf("A kor terulete: %lf cm^2", terulet);

    return 0;

}