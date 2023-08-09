#include<stdio.h>
#include<math.h>
int A, B, C, G;
float D, E, F, H, I;
void main(){
    printf("Ax^2+Bx+C");
    printf("\nEnter A = ");
    scanf("%d", &A);
    printf("Enter B = ");
    scanf("%d", &B);
    printf("Enter C = ");
    scanf("%d", &C);
    G = pow(B, 2);
    F = sqrt(G-4*A*C);
    H = -B-F;
    I = -B+F;
    D = I/(2*A);
    E = H/(2*A);
    printf("Roots of the equation are %f and %f", D, E);
}