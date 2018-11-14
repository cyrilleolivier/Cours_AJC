#include <stdio.h>


typedef struct _noalign {
char c;
/* 1 octet */
double d;
/* 8 octets */
int i;
/* 4 octets */
char c2[3]; /* 3 octets */
}noalign; /* 24 octets car padding */
typedef struct _align{
double d;
/* 8 octets */
int i;
/* 4 octets */
char c2[3] ;/* 3 octets */
char c;
/* 1 octet */
}align; /* 16 octets */
int main()
{


   printf(" sizeof(struct_align") == %u \n" sizeof (_align);
   printf(" sizeof(struct_align") == %u \n" sizeof (noalign);

    return 0;
}
