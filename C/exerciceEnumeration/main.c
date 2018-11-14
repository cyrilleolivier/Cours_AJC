#include <stdio.h>

int main()
{
    typedef enum {lundi,mardi,mercredi,jeudi,vendredi, samedi,dimanche} jours;

    for(jours i = lundi ; i <=dimanche ; i++)

    {
        printf("les jours de la semaine: %d\n",i);
    }

    return 0;
}
