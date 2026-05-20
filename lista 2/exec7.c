#include <stdio.h>

int main() {
   int idade;
   printf ("Qual a sua idade: ");
   scanf ("%d",&idade);
   
   if (idade >= 60){
       printf ("Idoso");
   }
   else if (idade >= 18){
       printf ("Adulto");
   }
   else {
       printf ("Menor");
   }
    return 0;
}