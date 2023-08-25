#include<stdio.h>
void main(){
    char v1;
    printf("Enter a character = ");
    scanf("%c", &v1);
    switch (v1)
    {
        case 'a':
            printf("The value of v1 = a");
            break;
        
        case 'b':
            printf("The value of v1 = b");
            break;
        
        default:
            printf("The value of v1 is not a or b");
    }
}