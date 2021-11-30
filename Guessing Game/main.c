#include <stdio.h>
#include <stdlib.h>



int main() /*any code put here will be first to be executed*/
{
   int secretNumber = 5;
   int guess;

   while(guess != secretNumber){
    printf("Enter a number: ");
    scanf("%d", &guess);
    printf("You Win!");
   }


















   int secretNumber = 5;
   int guess; /*no assigned value as user has to input guess*/

   /*keep promtping user to keep guessing*/
   while(guess != secretNumber){
    printf("Enter a number: ");
    scanf("%d", &guess);

   }
    /*if guess is correct:*/

    printf("You Win!");



    return 0;
}



/*scanf needs %lf to store floats. printf needs %f only. unse d ouble */
/*change int num1 to double num2*/
