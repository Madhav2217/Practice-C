#include<stdio.h>
void main(){
    char Z;
    int A, B;
    printf("Enter A=1, B=0 for char and A=0, B=1 for int \n");
    printf("A= ");
    scanf("%d", &A);
    printf("B= ");
    scanf("%d", &B);
//    (A>B) ? scanf("%c", &Z):scanf("%c", &Z);
    (A>B) ? printf("%d", A):printf("%d", A);
//    printf("%c \n", Z);
//    printf("%c", Z);
}