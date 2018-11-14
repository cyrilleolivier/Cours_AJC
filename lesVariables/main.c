#include <stdio.h>


void f(void)
{
    static int i = 0;
    int j = 0;
    i++;
    j++;
    printf("i vaut %d et j vaut %d.\n", &i, &j);
}


/*variable global*/

int A = 15;
int main()
{
    int tab[]={16,17,18,19};
    int i;
     printf("l'adresse mémoire est: %d \n" , &A);
    return 0;
}

// **************************************************************************
/*variable local*/

int main()
{
int B = 4 /0 ;
printf("");
 printf(" %d \n" , B);
    return 0;
}

//**************************************************************************





