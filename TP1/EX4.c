#define TEST 1
#if TEST

#include <stdio.h>

#define CENTRE_CONSOLE (80/2)
#define LARGEUR_HAUT 6
#define LONGUEUR_HAUT 10
#define LARGEUR_CONE 5

int printCenteredSymbol(const char* Symbol, int nbSymbol, int center);


int main() 
{
    printCenteredSymbol("T",5,CENTRE_CONSOLE);
    printCenteredSymbol("T",3,CENTRE_CONSOLE);
    printCenteredSymbol("T",1,CENTRE_CONSOLE);
    return 0;
}

#else
int main()
{
    int i,j;

    for(i=0; i<LARGEUR_HAUT; i++)printCenteredSymbol("*",i,CENTRE_CONSOLE);

    for(j=0; j<LONGUEUR_HAUT; j++)printCenteredSymbol("|",LARGEUR_HAUT-1,CENTRE_CONSOLE);

    for(i=LARGEUR_HAUT; i<11; i+=2)printCenteredSymbol("^",i,CENTRE_CONSOLE);

    for(j=0; j<5; j++)printCenteredSymbol("|",10,CENTRE_CONSOLE);

    printCenteredSymbol("T",LARGEUR_CONE,CENTRE_CONSOLE);

    for(i=LARGEUR_CONE; i<11; i=i+2)printCenteredSymbol("*",i,CENTRE_CONSOLE);

    printf("\n\n");

    return 0;
}
#endif

int printCenteredSymbol(const char* Symbol, int nbSymbol, int center)
{
    if(nbSymbol > center*2) return 0; // vérification si la requête passe dans la largeur
    else
    {
if(!(nbSymbol%2)) nbSymbol = nbSymbol + 1; // passage en nombre impaire pour centrer

int i;
for(i=0; i<center-nbSymbol; i++) printf(" "); // écriture des espaces vides avant les symboles

for(i=0; i<nbSymbol; i++)
{
printf("%c",*Symbol);
}
printf("\n");
return nbSymbol;
    }
}
