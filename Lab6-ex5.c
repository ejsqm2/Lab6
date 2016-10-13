#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char *a;

   a = (char *) malloc(3);
   strcpy(a, "hey");

   a = (char *) realloc(a, 5);
   strcpy(a, "hello");
   printf("%s\n", a);
   
   free(a);
   
   return(0);
}