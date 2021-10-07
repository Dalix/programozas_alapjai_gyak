#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h> //time()

#define MERET 5

int main()
{
//    int elsoSzam, masodikSzam, harmadikSzam, negyedikSzam, otodikSzam;
//    int hatodikSzam;

    int lottoszamok[MERET];
    int i, j;
    int veletlenszam;

    printf("lottosorsolas!\n");

    srand(time(NULL));

    for(i = 0; i < MERET;)
    {
        //rand() %
        //      (felsoHatar - alsoHatar + 1) + alsoHatar
        veletlenszam = rand() % 90 + 1;

        //sorsoltunk-e ilyen szamot
        for(j = 0; j < i; j++)
        {
            if (lottoszamok[j] == veletlenszam)
            {
                break;
            }
        }

        //eddig nem letezott sorsoltunk ki
        if(i == j)
        {
            lottoszamok[i] = veletlenszam;
            i++;
        }
    }

    //lottoeredmenyek kiirasa
    for(i = 0; i < MERET; i++)
    {
        printf("%d. szam: %d\n", i + 1, lottoszamok[i]);
    }

    return 0;
}
