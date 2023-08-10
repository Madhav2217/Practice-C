#include<stdio.h>
int main(){
    int body_ratio;
    printf("Enter your body ratio = ");
    scanf("%d", &body_ratio);
    if (body_ratio>=70 && body_ratio<=90)
    {
        printf("You are elligible for long distance lap.");
    }
    else if (body_ratio>=50 && body_ratio<70)
    {
        printf("You are elligible for short distance lap.");
    }
    else if (body_ratio>=40 && body_ratio<50)
    {
        printf("You need to gain weight.");
    }
    else if (body_ratio<40)
    {
        printf("You are not elligibe.");
    }
    else
    {
        printf("Out of range.");
    }
    return 0;
    /*
    if 70+,90-     long distance lap
    else if 50+,70-     short
    else if 40+,50-     need practice
    else 40-         not elligible
    */
}
