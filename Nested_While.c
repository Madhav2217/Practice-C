#include<stdio.h>
void main(){
    int i = 1;
    while (i<=10)
    {
        printf("First %d\n", i);
            int j = 2;
            while (j<=10)
            {
                printf("Second %d\n", j);
                j+=2;
            }
        i+=2;
    }
}