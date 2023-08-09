#include<stdio.h>
void main(){
    char InputColor, Input_Egg, InputNon_Vegg;
    int InputAge;
    printf("Enter your favorite color - \nViolet(V) \nIndigo(I) \nBlue(B) \nGreen(G) \nYellow(Y) \nOrange(O) \nRed(R) \n");
    scanf("%c", &InputColor);
    printf("Enter your age = ");
    scanf("%d", &InputAge);
    printf("Do you eat egg? \nYes(Y) \nNo(N) \n");
    scanf(" %c", &Input_Egg);
    printf("Do you eat Non-Vegg? \nYes(Y) \nNo(N) \n");
    scanf(" %c", &InputNon_Vegg);

    if (InputColor=='B' || InputColor=='G' || InputColor=='R')
    {
        printf("\nYou passed the color test.");
    }

    if (InputColor=='V' || InputColor=='I' || InputColor=='Y' || InputColor=='O')
    {
        printf("\nYou failed the color test.");
    }

    if (InputAge>=10 && InputAge<=18)
    {
        printf("\nYou passed the age test.");
    }

    if (InputAge<10 || InputAge>18)
    {
        printf("\nYou failed the age test.");
    }
    
    if (Input_Egg=='N' && InputNon_Vegg=='N')
    {
        printf("\nYou passed the Egg and Non Vegg test.");
    }

    if (Input_Egg=='Y' || InputNon_Vegg=='Y')
    {
        printf("\nYou failed the Egg and Non Vegg test.");
    }
    
    /*
    blue green red --   char a = b, input;
    18>Age>10  --   ...
    food -- egg, non-vegg !.... ok 
    Homework.
    */
}