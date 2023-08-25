//find the sum of n natural numbers
#include<stdio.h>
void main(){
    int a, b = 0, i;
    printf("Enter a number = ");
    scanf("%d", &a);
    for (i = 1; i<=a; i++)
    {
        b+=i;
    }
    printf("The sum of all natural numbers uptil %d = %d", a, b);
}