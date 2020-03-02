#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name?\n"); //User input
    printf("hello, %s\n", name); //Output
}