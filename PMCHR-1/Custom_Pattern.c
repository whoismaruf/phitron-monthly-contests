#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    char s;
    scanf("%d %c", &N, &s);

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N-i; j++)
        {
            printf(" ");
        }
        for (int p = 0; p < N; p++)
        {
            printf("%c", s);
        }
        printf("\n");
    }
    return 0;
}
