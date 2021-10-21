#include <stdio.h>
#include <stdlib.h>

void intBeolvaso(int *szam);
int faktorialis(int szam);

int main()
{
    int szam;

    printf("fakt. kiszamitasa\n");

    intBeolvaso(&szam);

    printf("%d! = %d\n", szam, faktorialis(szam));

    return 0;
}

void intBeolvaso(int *szam)
{
    int ok;

    do
    {
        ok = 1;

        printf("Kerek egy nem negativ egesz szamot\n");

        if(scanf("%d", szam) != 1)
        {
            printf("rossz adat\n");
            ok = 0;

        }
        while(getchar() != '\n');
    }
    while(!ok || *szam < 0);

    return;
}

int faktorialis(int szam)
{
    int faktorialisSzam = 1;

    while(szam > 1)
    {
        faktorialisSzam *= szam;
        szam--;
    }

    return faktorialisSzam;
}
