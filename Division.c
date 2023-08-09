#include<stdio.h>
void main(){
    int a = 12, b = 5, e;
    float c;
    char d = 'a';
    c = (float) a/b;                            //Explicit Type-Casting
    printf("The value of variable c = %f", c);
    e = d;                                      //Implicit Type-Casting
    printf("\nThe value of variable e = %d", e);
    d = d+1;                                    //Implicit Type-Casting
    printf("\nThe value of variable d = %c", d);
}