#include<stdio.h>   //header file
int main(){         //main function of int type
//    int mn; //mn==money note
    int mn = 50;    //variable mn of int type with value 50
    printf("Enter a money note = 100 \n500 \n1000 \n2000 \n");
    scanf("%d", &mn);   //overwrite value of mn with user input
    switch (mn)         //taking value of mn in switch operation
    {
        case 100:       //checking value of mn with 100
        printf("\nThe entered note is a 100 note.");

        case 500:       //checking value of mn with 500
        printf("\nThe entered note is a 500 note.");
        break;

        case 1000:      //checking value of mn with 1000
        printf("\nThe entered note is a 1000 note.");

        case 2000:      //checking value of mn with 2000
        printf("\nThe entered note is a 2000 note.");
        
        //without break switch once clearing a condition will read everything else as a statement.

        default:    //default statement of switch
        printf("\nThe entered note is not a valid note.");
    }
    return 0;   //return statement because of int main
}
/*
1000

100
500
1000
2000

int main
default
no break
*/