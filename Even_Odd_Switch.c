#include<stdio.h>
void main(){
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);
    switch (num%2)
    {
        case 0:
        printf("The input is even.");
        break;

        case 1:
        printf("The input is odd.");
        break;
    }
}