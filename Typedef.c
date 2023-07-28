#include<stdio.h>
void main(){
    typedef unsigned int unin;
    unin v1;
    float v2;
    char v3;
    typedef long long int lli;
    long long int v4 = -23, v5 = 36;
    v1 = 3;
    v2 = 4.2;
    v3 = 'a';
    printf("%d \n%f \n%c \n", v1, v2, v3);
    printf("Value of long long int of v4 = %d, and v5 = %d", v4, v5);
}