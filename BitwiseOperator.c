#include<stdio.h>
int main(){
  //float a, b;
    int c=12, d=25, e=5, f=9;
/*
    scanf("%f %f", &a, &b);
    (a>b) ? printf("%f\n", a):printf("%f\n", b);
    a-=b;   //a=a-b
    a*=b;   //a=a*b
    printf("%f\n", a);
*/
    printf("Bitwise AND = %d \n", c&d);
    printf("Bitwise XOR = %d \n", c^d);
    printf("Bitwise OR = %d \n", c|d);
    printf("Bitwise COMPLEMENT = %d \n", ~c);
    printf("Bitwise LEFT SHIFT = %d \n", e<<1);
    printf("Bitwise RIGHT SHIFT = %d \n", f>>1);
    return 0;
}