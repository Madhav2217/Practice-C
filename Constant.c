#include<stdio.h>
void main(){
    int var1 = 15;
    const float var2 = 12;
    const int var3;
//    var3 = 23;
    printf("Present value of var1 = %d \n", var1);          //15
    var1++;
    var1 = 20;
    printf("Value of var1 after one change = %d \n", var1); //20
    printf("Present value of var2 = %f \n", var2);          //12
//    var2++;
//    var2 = 18;
    printf("Value of var2 after one change = %f \n", var2); //12
    printf("Value of var3 = %d", var3);
}