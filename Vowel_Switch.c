#include<stdio.h>
void main(){
    char x;
    printf("Enter an alphabet = ");
    scanf("%c", &x);
    switch (x)
    {

        /*case 'a':
        printf("The input is a vowel.");
        break;

        case 'A':
        printf("The input is a vowel.");
        break;

        case 'e':
        printf("The input is a vowel.");
        break;

        case 'E':
        printf("The input is a vowel.");
        break;

        case 'i':
        printf("Vowel.");
        break;

        case 'I':
        printf("Vowel.");
        break;

        case 'o':
        printf("Vowel.");
        break;

        case 'O':
        printf("Vowel.");
        break;

        case 'u':
        printf("Vowel.");
        break;

        case 'U':
        printf("Vowel.");
        break;

        default:
        printf("Constant.");
        */
        
        
        
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("\nThe input is a vowel.");
        break;

        default:
        printf("\nConstant.");
        
    }
}