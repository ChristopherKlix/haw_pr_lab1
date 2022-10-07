// HAW PR1
// Printing a 7x7 matrix
// Author: Christopher Klix
// Date: 2022-10-07
// Version: 1.0


#include <stdio.h>


// Prototyping methods
int version_best_practice(void);
int version_alternative(void);


int main(void)
{
    version_best_practice();
    version_alternative();

    return 0;
}


// Best Practice Version
// 
// note: this version is the most
//       elegant implementation 
//       
// This version uses a counting variable n
// and the i and j indeces can be
// neglected and are only used
// for keeping track of for-loop
// iterations
int version_best_practice(void)
{
    // We first define the size of our matrix
    // Why? Cause we don't want 'magical numbers'
    // (hard-coded integers) to appear
    // somewhere in the code
    const int MATRIX_ROWS = 7;
    const int MATRIX_COLUMNS = 7;

    // Our counting variable
    // 
    // Counting vars are usually called 'n'
    // by convention
    int n = 0;

    // We start with a first loop
    // with 7 iterations
    // 
    // each iteration is representative
    // of a ROW
    for (int i = 0; i < MATRIX_ROWS; i++)
    {
        // Each ROW loop has it's nested
        // inner loop with another 7 iterations
        // 
        // each iteration is representative
        // of a COLUMN in a single ROW
        for (int j = 0; j < MATRIX_COLUMNS; j++)
        {
            // Increment n and then print it
            // ++n instead of n++ since n is
            // initially assigned 0
            // why not 1? (because 0 is best practice once more)
            printf("%3d", ++n);
        }
        
        // Print a single newline once each inner loop has finished
        // And we jump to the next ROW loop iteration
        printf("\n");
    }

    // Print a single newline at the end
    // for better UX
    printf("\n");

    return 0;
}


// Alternative Version
// 
// note: this version works but it is
//       considered to be 'very unelegant'
//       and people will laugh at you
// 
// This version uses a single for-loop
// with 49 iterations (7 x 7)
// 
// We manage to print a \newline
// after 7 integers by getting the modulo (%)
// and comparing it to 0:
// e.g.:
//          7 % 6 = 6
//          7 % 7 = 0 <-- print \n here
//          7 % 8 = 1
// 
// Issues:
// Since it is 'best practice' to start counting at i = 0
// we have to set our int i to 0
// But since we have to start printing from number 1
// we have to add 1 to i twice in each for-loop iteration.
// Hence, there is no way to implement this version
// as a 'best practice' version.
int version_alternative(void)
{
    // We first define the size of our matrix
    // Why? Cause we don't want 'magical numbers'
    // (hard-coded integers) to appear
    // somewhere in the code
    const int MATRIX_ROWS = 7;
    const int MATRIX_COLUMNS = 7;

    // We now use a single for-loop to count
    // from 0 to 49 (since 7 x 7 = 49)
    for (int i = 0; i < (MATRIX_ROWS * MATRIX_COLUMNS); i++)
    {
        // Print i incremented by 1
        printf("%3d", (i+1));

        // Print a \newline every multiple
        // of matrix_columns
        if ((i+1) % MATRIX_COLUMNS == 0)
        {
            printf("\n");
        }    
    }

    // Print a single newline at the end
    // for better UX
    printf("\n");

    return 0;
}