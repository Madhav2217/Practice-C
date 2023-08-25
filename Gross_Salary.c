#include<stdio.h>
void main(){
    int bs;
    float gs, hra, oa;
    printf("Enter your Basic Salary = ");
    scanf("%d", &bs);
    if (bs>0 && bs<1500)
    {
        hra = (0.1)*bs;
        oa = (0.9)*bs;
        gs = bs + hra + oa;
        printf("\nYour Gross Salary = %f", gs);
    }
    else if (bs>=1500)
    {
        hra = 500;
        oa = (0.98)*bs;
        gs = bs + hra + oa;
        printf("\nYour Gross Salary = %f", gs);
    }
    else
    {
        printf("\nInvalid Input.");
    }
}