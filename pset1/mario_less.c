// Pseudocode
// - prompt user for an integer, between 1 and 8, lets call it 'h' .
// - check if user input is between 1 and 8, if yes, move to the next step, if no, prompt user again.
// - lets say 'n' is the number of the strings being printed ( first string being 1 second being 2, third being 3, etc.)
// - print a string 'n' that has spaces 's' equal to 'h-n', followed by '#' symbols, number of '#' symbols printed is equal to 'n'./
// - loop this until 'n' equals 'h'.



// Code

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
        for (int j = 0; j <= i; j++)        //number of hashes per row
        {
            printf("#");
        }
        printf("\n");
    }
}   