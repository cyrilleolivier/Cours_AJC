#include <stdio.h>
#include <time.h>

void retour(char *date, int *jour, int *mois, int *annee)
{
    *jour = (date[0]-48) *10 + (date[1]-48);
    *mois = (date[3]-48) *10 + (date [4]-48);
    *annee = (date[6]-48) *1000 + (date [7]-48)*100 + (date [8]-48)*10 + (date [9]-48);
}
int main(void)
{
char date[] = "23/03/2014";
int jour = 0;
int mois = 0;
int annee = 0;
retour(date, &jour, &mois, &annee);
printf("%s %d %d %d\n", date, jour, mois, annee);


}
