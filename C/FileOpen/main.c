#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livre{
char auteur[50];
char titre[50];
struct livre *suivant;
};

void relier(struct livre *original, struct livre *premier){
    original->suivant  = premier;


}

int main()
{
    struct livre *premier= malloc(sizeof( struct livre));
    strcpy(premier->auteur,"gille");
    strcpy(premier->titre,"la belle voiture");
    premier->suivant=NULL;

    struct livre *deuxieme= malloc(sizeof( struct livre));
    strcpy(deuxieme->auteur,"sebastien");
    strcpy(deuxieme->titre,"Art et dessin");
    deuxieme->suivant=NULL;

    struct livre *troisieme= malloc(sizeof( struct livre));
    strcpy(troisieme->auteur,"bruno");
    strcpy(troisieme->titre,"street art france");
    troisieme->suivant=NULL;

    relier(premier,deuxieme);
    relier(deuxieme, troisieme);

    printf("%s\n%s\n",premier->suivant->auteur,premier->suivant->titre);

    int i;
    for( i = 0 ; i < struct livre; i++ );

    FILE *fp;
    fp = fopen ("dor.txt", "w");
    fprintf(fp, "%s\n %s\n",premier->suivant->auteur, premier->suivant->titre);
    fclose(fp);


    return 0;
}
