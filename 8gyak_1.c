//1. eloforditoi direktiva
#include <stdio.h>
#include <stdlib.h>

//2. fv. prototipus
//void arfolyamBekerese(double *arfolyamok, int meret);
void arfolyamBekerese(double *, int);
//void arfolyamBekerese(double arfolyamok[], int meret);
//void arfolyamokKiirasa(double *arfolyamok, int meret);
void arfolyamokKiirasa(double arfolyamok[], int meret);

//3. main
int main()
{
    const int meret = 2;
    double arfolyamok[meret];

    printf("EURO arfolyamok\n");

    //arfolyamBekerese(arfolyamok, meret);
    arfolyamBekerese(&arfolyamok[0], meret);

    arfolyamokKiirasa(arfolyamok, meret);

    return 0;
}

//4. fv. definiciok
void arfolyamBekerese(double *arfolyamok, int meret)
{
    int joEAzAdat;
    int i;

    for(i = 0; i < meret; i++)
    {
        do
        {
            joEAzAdat = 1;

            printf("%d. arfolyam: ", i+1);

            if(scanf("%lf", &arfolyamok[i]) != 1 || arfolyamok[i] < 340 || arfolyamok[i] > 370)
            {
                printf("rossz adat\n");
                joEAzAdat = 0;
            }

            while(getchar() != '\n');
        }
        while(!joEAzAdat);
    }

    return;
}

void arfolyamokKiirasa(double arfolyamok[], int meret)
{
    int i;

    for(i = 0; i < meret; i++)
    {
        printf("%2d. ertek: %.2lf\n", i + 1, arfolyamok[i]);
    }

    return;
}
