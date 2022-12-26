#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int l;
    scanf("%lld", &l);
    long long int res;
    res = pow(l, 2)*6;
    printf("%lld", res);
    return 0;
}
