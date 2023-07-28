#include<stdio.h>
#include<conio.h>
int main(){
    int A;
    float B;
    char C, D;
/*
    printf("Input Value 1\n");
    scanf("%d", &A);
    printf("My value is = %d", A);
    printf("\nInput value 2\n");
    scanf("%f", &B);
    printf("Value 2 is = %f", B);
*/
    //printf("\nInput Character\n");
    //scanf("%c", &C);
    //printf("Character is = %c", C);
    //printf("\nInput Character 2\n");
    //scanf("%c", &D);
    //printf("Character is = %c", D);
    
    //other way

    printf("\nInput Character\n");
    scanf("%c %c", &C, &D);
    printf("Character is = %c, %c\n", C, D);
    return 0;
}