#include<stdio.h>
void main(){
    char gender;
    int age;
    printf("Enter your Gender - \nBoy(B) \nGirl(G) \n");
    scanf("%c", &gender);
    if (gender=='B')
    {
        printf("Enter your age = ");
        scanf("%d", &age);
        if (age>=15)
        {
            printf("You are elligible for Senior Male's Basketball.");
        }
        else
        {
            printf("You are elligible for Junior Male's Basketball.");
        }
    }
    else if(gender=='G')
    {
        printf("You are elligible for Female Basketball.");
    }
    else
    {
        printf("Invalid Input.");
    }
}
/*
if(B || g)
(b  15+)
*/