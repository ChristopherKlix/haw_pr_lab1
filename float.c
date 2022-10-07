#include <stdio.h>


int main(void)
{
    int x = 7;
    int y = 3;


    // Division between two integers
    // results in a rounded integer value
    // that is then stored in a float var
    float a = 7 / 3;

    printf("%f\n", a);  // console will print a = 2.0000000
    


    // Division between one int & one float
    // results in a floating point value
    // that is then stored in a float var
    float b = (float) 7 / 3;

    printf("%f\n", b);  // console will print a = 2.3333333

    return 0;
}