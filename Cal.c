#include<stdio.h>
#include<math.h>
void main(){
    int Z;
    float A, B, C;
    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Power \n6.Root \n7.Exit \n");
    scanf("%d", &Z);

    if (Z==1)
    {
        printf("\nInput two values = ");
        scanf("%f %f", &A, &B);
        C = A+B;
        printf("%f", C);
    }
    else if (Z==2)
    {
        printf("\nInput two values = ");
        scanf("%f %f", &A, &B);
        C = A-B;
        printf("%f", C);
    }
    else if (Z==3)
    {
        printf("\nInput two values = ");
        scanf("%f %f", &A, &B);
        C = A*B;
        printf("%f", C);
    }
    else if (Z==4)
    {
        printf("\nInput two values = ");
        scanf("%f %f", &A, &B);
        C = A/B;
        printf("%f", C);
    }
    else if (Z==5)
    {
        printf("\nEnter Number = ");
        scanf("%f", &A);
        printf("\nEnter Power = ");
        scanf("%f", &B);
        C = pow(A, B);
        printf("%f", C);
    }
    else if (Z==6)
    {
        printf("\nEnter Number = ");
        scanf("%f", &A);
        printf("Enter Root = ");
        scanf("%f", &B);
        C = pow(A, 1/B);
        printf("%f", C);
    }
    else if (Z==7)
    {
        printf("\nProgram Exited.");
    }
    else
    {
        printf("\nInvalid Input, Program Terminated.");
    }
}