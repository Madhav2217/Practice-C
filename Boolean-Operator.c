#include<stdio.h>
#include<stdbool.h>
void main(){
    bool a = false;
    bool b = false;
    bool c = true;
    printf("AND OPERATION = %d", a&&b);     //TT(T), Baki sab(F)
    printf("\nOR OPERATION = %d", a||b);    //FF(F), Baki sab(T)
    printf("\n\nNOT OPERATION = %d", !c);   //T(F), F(T)
}