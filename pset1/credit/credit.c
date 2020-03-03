//Pseudocode for credit
//- Define long to store cc number.
//- Define digit1 = 0, digit2 = 0, numberOfDigits=n, sumOdd=0, sumEven=0
//- Prompt user to imput cc number, which is a long > 0.
//- Seperate the digits in cc number, store number of digits in numberOfDigits.
//  - Store digit1 and digit2.
//  - Calculate sum of even digits.
//  - Calculate sum of odd digits.
// - increment numberOfDigits.
//  - loop while cc number is > 0.
//- Check if input is valid cc number.
//- Calculate first 2 digits on card.
//- Check if it is visa. Print Visa.
//- Check if it is Mastercard. Print Mastercard.
//- Check if it is Amex, print Amex.
//- Print Invalid if it the number is invalid.

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Stores cc number
    long cnumber;
    int digit1 = 0, digit2 = 0, digitn = 0, sumOdd = 0, sumEven = 0;
    
    do
    {
        // Prompts user to input cc number
        cnumber = get_long("Card Number: ");
    } 
    while (cnumber < 0);
    
    // Seperates the digits in cc number, stores the number of digits in 'digitn'
    while (cnumber > 0)
    {
        digit2 = digit1;
        digit1 = cnumber % 10;

        // Calculates sum of even digits
        if (digitn % 2 == 0)
        {
            sumEven += digit1;
        }

        // Calculates sum of odd digits
        else
        {
            int m = 2 * digit1;
            sumOdd += (m / 10) + (m % 10);
        }

        cnumber /= 10;
        digitn++;
    }

    // Checks if input is a valid cc number
    bool valid = (sumEven + sumOdd) % 10 == 0;
    // Calculates first 2 digits on the card.
    int first2 = (digit1 * 10) + digit2;

    // Checks if it is a VISA number
    if (digit1 == 4 && digitn >= 13 && digitn <= 16 && valid)
    {
        printf("VISA\n");
    }

    // Checks if it is a MASTERCARD number
    else if (first2 >= 51 && first2 <= 55 && digitn == 16 && valid)
    {
        printf("MASTERCARD\n");
    }

    // Checks if it is an AMEX number
    else if ((first2 == 34 || first2 == 37) && digitn == 15 && valid)
    {
        printf("AMEX\n");
    }

    // Outputs INVALID if input is not a valid cc number.
    else
    {
        printf("INVALID\n");
    }
}
