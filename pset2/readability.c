//Code to calculate Readability grade of text.

#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int count_letters(string x);
int count_words(string x);
int count_sentences(string x);

int main(void)
{
    //Prompt user to input text.
    string text = get_string("Input the text: ");

    //call function to count letters.
    int letters = count_letters(text);
    //call function to count words.
    int words = count_words(text);
    //call function to count sentences.
    int sentences = count_sentences(text);

    //Calculate l and s for Readability index formula.
    float l = ((float)letters / words) * 100;
    float s = ((float)sentences / words) * 100;

    //Readability index formula.
    float i = 0.0588 * l - 0.296 * s - 15.8;

    //Round the result.
    int index = roundf(i);

    //Loop to print readablitiy index grade.
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index > 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i\n", index);
    }
}

//Function to count sentences.
int count_sentences(string x)
{
    int sen = 0;
    int i = 0;

    while (x[i] != '\0')
    {
        if (x[i] == '.' || x[i] == '?' || x[i] == '!')
        {
            sen++;
        }
        i++;
    }
    return sen;
}

//Function to count words.
int count_words(string x)
{
    int words = 1;
    int i = 0;

    while (x[i] != '\0')
    {
        if (x[i] == ' ')
        {
            words++;
        }
        i++;
    }

    return words;
}

//Function to count letters.
int count_letters(string x)
{
    int l = 0;
    int i = 0;

    while (x[i] != '\0')
    {
        if ((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
        {
            l++;
        }
        i++;
    }
    return l;
}