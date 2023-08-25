#include<stdio.h>
void main(){
    for (int i = 1; i<=3; ++i)
    {
        printf("First %d\n", i);
        for (int j = 1; j<=4; ++j)
        {
            printf("Second %d\n", j);
        }
    }
}