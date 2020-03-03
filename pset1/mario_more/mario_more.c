// code for mario more.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;  //variable to store user input height
    do
    {
        h = get_int("Height: ");    //get user input
    }
    while (h < 1 || h > 8);     //check if input is between 1 and 8

    for (int i = 0; i < h; i++)     //number of rows                      
    {
        for (int s = (h - 1); s > i; s--)       //number if spaces per row
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)        //number of hashes on left
        {
            printf("#");
        }
        printf("  ");       //spaces between two pyramids
        for (int j = 0; j <= i; j++)        //number of hashes on right
        {
            printf("#");
        }
        printf("\n");
    }
}