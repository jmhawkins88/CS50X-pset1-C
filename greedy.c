#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
   // ask for user input of change
   float user_input;
   do
   {
       printf("Hi friend, how much change do you have?\n");
       user_input = GetFloat();
   }
   while (user_input < 0.0);

   //convert float to int
   int change = (round)(user_input * 100);
   
   //declare counter
   int coin = 0;  

   //check for quarters
   while (change >= 25) 
   {
        coin++;
        change = change - 25;
   } 

   //check for dimes
   while (change >= 10)
   {
        coin++;
        change = change - 10;
   }

   //check for nickels
   while (change >= 5)
   {
        coin++;
        change = change - 5;
   }

   //check for pennies
   while (change >= 1)
   {
        coin++;
        change = change - 1;
   }

   //print number of coins
   printf("%d\n", coin);
   return 0;
}
   
