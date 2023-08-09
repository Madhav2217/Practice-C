#include<stdio.h>
void main(){
    int a, b, c;
    printf("Enter three numbers = ");
    scanf("%d\n %d\n %d", &a, &b, &c);
    if (a<b && a<c)
    {
        printf("The smallest number = %d", a);
    }
    if (b<a && b<c)
    {
        printf("The smallest number = %d", b);
    }
    if (c<a && c<b)
    {
        printf("The smallest number = %d", c);
    }
    if (a==b && a==c)
    {
        printf("All numbers are equal.");
    }
}