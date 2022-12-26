#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1010];
    scanf("%s", &str);
    int flag = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'c' || str[i] == 'C'){
            if ((str[i+1] == 'h' || str[i+1] == 'H') && (str[i+2] == 'a' || str[i+2] == 'A') && (str[i+3] == 'm' || str[i+3] == 'M') && (str[i+4] == 'p' || str[i+4] == 'P') && (str[i+5] == 'i' || str[i+5] == 'I') && (str[i+6] == 'o' || str[i+6] == 'O') && (str[i+7] == 'n' || str[i+7] == 'N') && (str[i+8] == 's' || str[i+8] == 'S')) {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1) printf("Yes");
    else printf("No");
    
    return 0;
}
