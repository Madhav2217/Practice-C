#include<stdio.h>
void main(){
    float radius = 5, cir;
    const float pi = 3.14;
    printf("Area of a circle with radius 5 = %f \n", pi*radius*radius);
    cir = 2*pi*radius;
    printf("Circumference of a circle with radius 5 = %f", cir);
}