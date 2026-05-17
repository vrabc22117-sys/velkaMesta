#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#define MAX 100
typedef struct
{
    char nazev[40];
    int pocetOb;
    char kraj[40];
    float rozloha;
} Tmesto;

void nacteniMest(Tmesto mesta[])
{
    mesta[0] = (Tmesto){"Praha", 1397880, "Hlavni mesto Praha", 496.21};
}

void test_nacteni()
{
  Tmesto mesta[1];
  nacteniMest(mesta);
  printf("nactena Praha\n");
}
int main()
{
    test_nacteni();
    return 0;
}
