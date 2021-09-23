#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bekertEgeszSzam;
    printf("Bekert szam paritasanak ellenorzese\n");

    printf("Kerem adjon meg egy egesz szamot!\n");
    printf("egesz szam:");
    scanf("%d", &bekertEgeszSzam);

    printf("A bekert szam ");
    printf( bekertEgeszSzam % 2 == 0 ? "paros" : "paratlan");
    printf("\n");

    if(bekertEgeszSzam % 2 == 0)
    {
        printf("A bekert szam paros\n");
    }
    else
    {
        printf("A bekert szam paratlan\n");
    }

    switch (bekertEgeszSzam % 2)
    {
        case 0:
                printf("A bekert szam paros\n");
                break;

        case 1:
                printf("A bekert szam paratlan\n");
                break;
    }

    return 0;
}
