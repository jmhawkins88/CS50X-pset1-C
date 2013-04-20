/**********************************************************************
*
* Jessie Hawkins - pset1 - greedy.c
*
* This program asks the user for amount of change due and then returns the
* smallest amount of coins that can be used to distribute the change.
*
***********************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // ask for change from user input
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

    //if cents owed is >= to a quarter, subtract quarter and add 1 to coin counter
    while (change >= 25)
    {
        coin++;
        change = change - 25;
    }

    //if cents owed is >= to a dime, subtract dime and add 1 to coin counter
    while (change >= 10)
    {
        coin++;
        change = change - 10;
    }

    //if cents owed is >= to a nickel, subtract nickel and add 1 to coin counter
    while (change >= 5)
    {
        coin++;
        change = change - 5;
    }

    //if cents owed is >= to a penny, subtract penny and add 1 to coin counter
    while (change >= 1)
    {
        coin++;
        change = change - 1;
    }

    //print number of coins
    printf("%d\n", coin);

    //return 0 to indicate no errors occured
    return 0;
}

