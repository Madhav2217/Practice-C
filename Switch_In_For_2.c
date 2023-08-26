#include<stdio.h>
void main(){
    int i, j, k = 0;
    j = 2 * 3 / 4 + 2015 + 8 / 5;   //int(2*3/4)+int(2015)+int(8/5) =  1 + 2015 + 1 = 2017
    k-=--j;                         //k=k-(--j)  = k=k-(2016) = k=-2016
    for (i = 0; i<5; i++)
    {
        switch (i+k)
        {
            case 1:
            case 2:
                printf("%d", i+k);
            case 3:
                printf("%d", i+k);
            default:
                printf("%d", i+k);
        }
    }
}       //-2016, -2015, -2014, -2013, -2012