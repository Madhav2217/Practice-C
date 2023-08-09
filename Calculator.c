#include<stdio.h>
void main(){
    int Z;
    float A, B, C;
    printf("Choose an operation \n1-Addition \n2-Subtraction \n3-Multiplication \n4-Division \n5-Exit \n");
    scanf("%d", &Z);
/*
    printf("Input two values = ");
    scanf("%f %f", &A, &B);
    C = (Z==1) ? A+B:(Z==2) ? A-B:(Z==3) ? A*B:(Z==4) ? A/B:(Z==5) ? printf("Program Exited."):printf("Invalid Input.");
    printf("%f", C);
*/
    if (Z==1)
    {
        printf("Input two values = ");
        scanf("%f %f", &A, &B);
        C = A+B;
        printf("%f", C);
    }
    
    else if (Z==2)
    {
        printf("Input two values = ");
        scanf("%f %f", &A, &B);
        C = A-B;
        printf("%f", C);
    }
    
    else if (Z==3)
    {
        printf("Input two values = ");
        scanf("%f %f", &A, &B);
        C = A*B;
        printf("%f", C);
    }
    
    else if (Z==4)
    {
        printf("Input two values = ");
        scanf("%f %f", &A, &B);
        C = A/B;
        printf("%f", C);
    }
    
    else if (Z==5)
    {
        printf("Program Exited");
    }
    
    else
    {
        printf("Invalid Input, program terminated.");
    }
}