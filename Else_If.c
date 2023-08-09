#include<stdio.h>
void main(){
    int input_number;
    printf("Enter a number = ");
    scanf("%d", &input_number);
    if (input_number>0)
    {
        printf("The input is a positive integer.");
    }
    else if (input_number<0)
    {
        printf("The input is a negetive integer.");
    }
    else
    {
        printf("The input is Zero.");
    }
}