#include<stdio.h>
void main(){
    int InputYear;
    printf("Enter a year = ");
    scanf("%d", &InputYear);
    if (InputYear%4==0)
    {
        printf("The given year is a leap year.");
    }
    else
    {
        printf("The given number is not a leap yaer.");
    }
}