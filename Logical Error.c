#include<stdio.h>
void main(){
/*
    int var1 = 2, var2 = 5;
    printf("The product of 2 and 5 = %d \n", var1-var2);
    (var2=0) ? printf("Value of var2 = 0"):printf("Value of var2 is not 0");
    printf("\nValue of var2 = %d", var2);
*/

    int value;
    printf("Input a value ");
    scanf("%d", &value);
    printf("The sum of all natural numbers uptil %d = ", value);
    printf("%d", (value*(value-1))/2);
}