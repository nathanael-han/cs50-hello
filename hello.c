#include <stdio.h>
#include <cs50.h>

int main(void)

//Prompts user for name. Displays "Hello, name"
{
    string name = get_string("What is your name?\n");
    printf("Hello, %s\n", name);
}