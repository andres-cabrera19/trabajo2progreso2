#include <stdio.h>
int main(int argc, char const *argv[])
{
   int i = sizeof(int);
   printf("%d byte(s)\n",i);
   int arreglo[]={3,6,9,12,15,18};
   int j = sizeof arreglo;
   printf("%d byte(s)",j);
   return 0;
}