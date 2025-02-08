#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "999", s2[] = "999";
    int n1 = 0, n2 = 0, sum = 0;

 
    int i = 0;
    while (s1[i] != '\0') {
        n1 = n1 * 10 + (s1[i] - '0');
        i++;
    }

   
    i = 0;
    while (s2[i] != '\0') {
        n2 = n2 * 10 + (s2[i] - '0');
        i++;
    }

   
    sum = n1 + n2;
     
    char sumStr[1000];
    sprintf(sumStr, "%d", sum); 
   
     printf("sum: %s", sumStr);

    return 0;
}
