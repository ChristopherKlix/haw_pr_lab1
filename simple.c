// Lab 1
// Answer to everything
// Author: Christopher Klix
// Date: 2022-10-04
// Version: 1.0


#include <stdio.h>
#include <stdlib.h>


int ask_question(void);


int main(void)
{
    int ch;

    do
    {
        system("clear");

        printf("Hello user\n\n");

        int  answer = ask_question();

        if (answer == 42)
        {
            return 0;
        }

        printf("Try again? [y/n] ");
        ch = getchar();
    }
    while (ch == 'y');

    return 0;
}


int ask_question(void)
{
    int i;

    printf("What is the answer to everything?\n");
    printf(">>> ");

    scanf("%i", &i);

    if (i == 42)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No\n");
    }

    while ((getchar()) != '\n') { }

    return i;
}
