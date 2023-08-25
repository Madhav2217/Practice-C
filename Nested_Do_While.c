#include<stdio.h>
void main(){
    int i = 1;
    do
    {
        printf("First %d\n", i);
            int j = 2;
            do
            {
                printf("Second %d\n", j);
                j+=2;
            }
            while (j<=10);
        i+=2;
    } while (i<=10);
    
}