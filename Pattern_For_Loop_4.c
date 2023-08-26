#include<stdio.h>
void main(){
    char c = 'A';
    int i, j, row;
    printf("Enter a number = ");
    scanf("%d", &row);
    for (i = 1; i<=row; i++)
    {
        for (j = 1; j<=i; j++)
        {
            printf("%c", c+(j-1));
        }
        printf("\n");
    }
}