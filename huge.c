#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000000000

int main(int argc, char **argv)
{
    int *list;

    list = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        list[i] = i;
    }

    printf("%i\n", list[N-1]);
    free(list);

    return 0;
}