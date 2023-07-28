#include<stdio.h>
int main(){
    float A, W, X, Y, Z;
    printf("Input 4 decimal values = ");
    scanf("%f %f %f %f", &W, &X, &Y, &Z);
    A = (W>X) ? (W>Y? (W>Z? W:Z):(Y>Z? Y:Z)):(X>Y? (X>Z? X:Z):(Y>Z? Y:Z));
    printf("%f", A);
    return 0;
}