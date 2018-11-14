#include <stdio.h>
#include <stdio.h>

void main(int argc, char *argv[])
{

       printf("le nombre d'argument est : %d\n et le nom du programme est: %s\n", argc, argv[0] );
       int i;

       for(i = 1 ; i < argc ; i++ ){
           printf("les argument sont : %s\n", argv[i]);
       }



 return 0;
}




