#include<stdio.h>
void main(){
    int a;
    printf("Enter a number = ");
    scanf("%d", &a);
    if (a%2==0)             //% - mod    a%2 means this statement gives the reminder when a is divided by 2.
    {
        printf("The given number is even.");
    }
}