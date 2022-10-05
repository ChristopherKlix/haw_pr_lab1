// Lab 1
// Answer to everything
// Author: Christopher Klix
// Date: 2022-10-04
// Version: 1.0


#include <stdio.h>
#include <stdlib.h>


// Protoype(s) so CLANG knows
// that these method(s) exists
int ask_question(void);
void surprise(void);


int main(void)
{
    // Declaring working variables
    int ch;     // var for storing 'try again' input
                // i.e., for do-while loop condition

    // Main execution of prompting user and repeat
    // Do-while so that the conditional is checked
    // AFTER first asking the question
    do
    {
        // Clear terminal window for better UX
        system("clear");

        // Greeting the user
        printf("Hello user\n\n");

        // Prompt user the main question
        int  answer = ask_question();

        if (answer == 42)
        {
            return 0;
        }

        // Ask user for repition or quit
        printf("Try again? [y/n] ");
        ch = getchar();
    }
    while (ch == 'y');

    // return 0 for okay execution
    return 0;
}


// Implementation of ask_question function
// 
// Prompt the user with a question
// and receive input
// 
// Respond to user input
// and return input value
int ask_question(void)
{
    // Declare working variable for user input
    int i;

    // Prompt user THE question
    printf("What is the answer to everything?\n");
    printf(">>> ");

    // Read the users input
    // To-Do: checking the format of the user input
    scanf("%i", &i);

    // Simple conditional for responding to the input
    if (i == 42)
    {
        printf("Yes!\n");
        surprise();
    }
    else
    {
        printf("No\n");
    }

    // Clear input buffer
    while ((getchar()) != '\n') { }

    // return answer for further use
    return i;
}


void surprise(void)
{
    printf("\n");
    printf("    _|  _|      _|_|  \n");
    printf("    _|  _|    _|    _|\n");
    printf("    _|_|_|_|      _|  \n");
    printf("        _|      _|    \n");
    printf("        _|    _|_|_|_|\n");
    printf("\n");
}
