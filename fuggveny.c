//1. elofordito direktiva
#include <stdio.h>
#include <stdlib.h>

//2. fv. prototipus
void csere(int a, int b);
//cim szerinti parameteratadas
//pointeres parameterek
void csere_cimszerintiparamatadas(int *a, int *b);

//3. main fv.
int main()
{
    int a = 5, b = 10;

    printf("2 szam felcserelese\n");

    //csere(a, b);
    csere_cimszerintiparamatadas(&a, &b);

    printf("a: %d, b: %d\n", a, b);
    return 0;
}

//4. fv. def.
void csere(int a, int b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;

    return;
}

void csere_cimszerintiparamatadas(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
