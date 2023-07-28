#include<stdio.h>
void main(){
    int num1,num2 = 91,num3 = 119,num4 = 218;
/*
    printf("Enter your age = ");
    scanf("%d", &num1);
    (num1>=18) ? printf("You are elligible for voting."):printf("you are not elligible for voting.");

    num1 = (num2<num3) ? num2:num3;
    printf("%d", num1);
*/
    num1 = (num2<num3) ? (num2<num4? num2:num4):(num3<num4? num3:num4);
    printf("%d", num1);
}