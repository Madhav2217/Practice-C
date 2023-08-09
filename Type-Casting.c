#include<stdio.h>
void main(){
    int a = 7;
    float b;
    float c = 12.4;
    b = c;
    printf("The value of variable b = %f", b);
    printf("\nThe value of variable c = %f", c);
    b = a;                                          //b is taking integer value.  *Implicit Type-Casting.
    printf("\nThe value of variable a = %d", a);
    printf("\nThe value of variable b = %f", b);
    b = (float) a;                                  //b is taking integer value after it is converted into float.  *Explicit Type-Casting.
    printf("\nThe value of variable b = %f", b);
    printf("\nThe value of variable a = %d", a);
}