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
    mesta[1] = (Tmesto){"Brno", 402739, "Jihomoravsky kraj", 230.18};
    mesta[2] = (Tmesto){"Ostrava", 283187, "Moravskoslezsky kraj", 214.23};
    mesta[3] = (Tmesto){"Plzen", 187928, "Plzensky kraj", 137.67};
    mesta[4] = (Tmesto){"Liberec", 108090, "Liberecky kraj", 106.09};
    mesta[5] = (Tmesto){"Olomouc", 103063, "Olomoucky kraj", 103.33};
    mesta[6] = (Tmesto){"Ceske Budejovice", 97231, "Jihocesky kraj", 55.60};
    mesta[7] = (Tmesto){"Hradec Kralove", 94311, "Kralovehradecky kraj", 105.69};
    mesta[8] = (Tmesto){"Pardubice", 92319, "Pardubicky kraj", 82.66};
    mesta[9] = (Tmesto){"Usti nad Labem", 90866, "Ustecky kraj", 93.97};
    mesta[10] = (Tmesto){"Zlin", 74684, "Zlinsky kraj", 102.83};
    mesta[11] = (Tmesto){"Kladno", 69664, "Stredocesky kraj", 36.97};
    mesta[12] = (Tmesto){"Havirov", 68674, "Moravskoslezsky kraj", 32.08};
    mesta[13] = (Tmesto){"Most", 63474, "Ustecky kraj", 86.94};
    mesta[14] = (Tmesto){"Opava", 55684, "Moravskoslezsky kraj", 90.61};
    mesta[15] = (Tmesto){"Frydek-Mistek", 55557, "Moravskoslezsky kraj", 51.53};
    mesta[16] = (Tmesto){"Jihlava", 54508, "Kraj Vysocina", 87.85};
    mesta[17] = (Tmesto){"Karvina", 51933, "Moravskoslezsky kraj", 57.49};
    mesta[18] = (Tmesto){"Teplice", 49575, "Ustecky kraj", 23.77};
    mesta[19] = (Tmesto){"Karlovy Vary", 48864, "Karlovarsky kraj", 59.10};
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
