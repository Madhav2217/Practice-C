#include<stdio.h>
void main(){
    char InputAplha;
    printf("Enter a alphabet or symbol = ");
    scanf("%c", &InputAplha);
    if (InputAplha==65 || InputAplha==69 || InputAplha==73 || InputAplha==79 || InputAplha==85 || InputAplha==97 || InputAplha==101 || InputAplha==105 || InputAplha==111 || InputAplha==117)
    {
        printf("The input is an alphabet and a vowel.");
    }
    else if (InputAplha>=65 && InputAplha<=90)
    {
        printf("The input is an alphabet but not an vowel.");
    }
    else if (InputAplha>=97 && InputAplha<=122)
    {
        printf("The input is an alphabet but not an vowel.");
    }
    else
    {
        printf("The input is not an alphabet.");
    }
    
}