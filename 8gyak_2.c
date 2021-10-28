#include <stdio.h>
#include <stdlib.h>
#include <time.h> //time
#include <math.h> //round

void tombFeltolteseVeletlenszamokkal(double *, int);
int limitAlattiakDarabszama(double *arfolyamok, int meret, int limit);

int main()
{
    const int meret = 12;
    double arfolyamok[meret];
    double limit = 350;
    int limitAlattiak;

    printf("euro arfolyam veletlenszamokkal\n");

    tombFeltolteseVeletlenszamokkal(arfolyamok, meret);

    limitAlattiak = limitAlattiakDarabszama(arfolyamok, meret, limit);

    printf("%d darab ertek van limit %.2lf alatt\n", limitAlattiak, limit);

    return 0;
}

void tombFeltolteseVeletlenszamokkal(double *tomb, int meret)
{
    int i;
    int alsoHatar = 340;
    int felsoHatar = 370;

    srand(time(NULL));

    for(i = 0; i < meret; i++)
    {
        tomb[i] = rand() / (double) RAND_MAX * (felsoHatar - alsoHatar) + alsoHatar;
        tomb[i] = round(tomb[i] * 100) / 100;

        printf("%lf\n", tomb[i]);
    }

    return;
}

int limitAlattiakDarabszama(double *arfolyamok, int meret, int limit)
{
    int i;
    int darabSzam = 0;

    for(i = 0; i < meret; i++)
    {
        if(arfolyamok[i] < limit)
        {
            darabSzam++;
        }
    }

    return darabSzam;
}
