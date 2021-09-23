#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bekertEgeszSzam;

    printf("Bekert szam paritasanak ellenorzese\n");

    printf("Kerem adjon meg egy egesz szamot!\n");
    printf("egesz szam:");
    scanf("%d", &bekertEgeszSzam);

    if(bekertEgeszSzam > 0)
    {
        printf("%d abszoluterteke: %d", bekertEgeszSzam, bekertEgeszSzam);
    }
    else
    {
        printf("%d abszoluterteke: %d", bekertEgeszSzam, bekertEgeszSzam*(-1));
    }
    return 0;
}
