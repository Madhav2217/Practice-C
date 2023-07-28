#include<stdio.h>
void main(){
    int a=11, b=16;
    printf("Present value of a = %d \n", a);            //11
    a++;                                                //a=11
    printf("Value of a after one change = %d \n", a);   //12
    ++a;                                                //a=13
    printf("Value of a after two changes = %d \n", a);  //a=13, 13
    printf("Current value of b = %d", b);               //16
    printf("\n");
    b--;                                                //b=16
    printf("Value of b after one change = %d \n", b);   //15
    b--;                                                //b=15
    printf("Value of b after two changes = %d \n", b);  //14
    b--;                                                //b=14
    printf("Value of b after third change = %d \n", b); //13
}