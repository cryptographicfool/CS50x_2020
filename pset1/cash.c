// Code for cash

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float a;        //float to store user input
    int c;          //int to store roudned value of user input
    int n = 0;      //int to store the number of coins required

    do              //prompt user input
    {
        a = get_float("Change owed: ");
    }
    while (a <= 0);   //ensure that user input is positive

    c = round(a * 100);     //round user input float

    while (c >= 25)          //calculate number of 25 coins needed
    {
        c = c - 25;
        n++;
    }

    while (c >= 10)          //calculate number of 10 coins needed
    {
        c = c - 10;
        n++;
    }

    while (c >= 5)           //calculate number of 5 coins needed
    {
        c = c - 5;
        n++;
    }

    while (c >= 1)             //calculate number of 1 coins needed
    {
        c = c - 1;
        n++;
    }

    printf("%i\n", n);         //print the number of coins needed
}

