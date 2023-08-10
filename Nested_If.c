#include<stdio.h>
void main(){
    int input;
    printf("Enter a number = ");
    scanf("%d", &input);
    if (input<12)
    {
        if (input==7)
        {
            printf("The input is = 7\n");
        }
        printf("The input is less than 12\n");
    }
    printf("The input = %d, It is checked for being less than 12", input);
    printf("\nThen it was checked for being equal to 7");
    /*
    input int   input<pre-defined     yes(input=2nd pre-defined    yes(output"=7"))  input and compare.
    */
}