#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get height from user
    int height;
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);    

    // print rows
    for (int row = 1; row <= height; row++)
    {
        // print spaces
        for (int space = (height-row); space >= 1; space--)
            printf(" ");

        // print hashes
        for (int hash = (height-row) ; hash <= height ; hash++)
            printf("#");  

	//print new line
        printf("\n");           
    }    
    return 0;      
}
    
