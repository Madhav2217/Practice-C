#include<stdio.h>                                                       //header file
void main(){                                                            //main function of void type
    int uid, pass;                                                      //variables
    printf("Enter your User ID = ");
    scanf("%d", &uid);                                                  //User input
    switch (uid)                                                        //Switch Operator
    {
        case 12:                                                        //checking uid with 12
            printf("The Entered User ID is = 12.");
            break;                                                      //exiting switch

        case 52:                                                        //checking uid with 52
            printf("The Entered User ID is = 52.");
            break;                                                      //exiting switch

        case 27:                                                        //checking uid with 27
            printf("Enter your password = ");
            scanf("%d", &pass);                                         //User input
                switch (pass)                                           //switch operator
                {
                    case 991:                                           //checking pass with 991
                        printf("You have succesfully logged in.");
                        break;                                          //exiting switch

                    default:                                            //executing default
                        printf("User ID and Password do not match.");
                }
            break;                                                      //exiting switch

        default:                                                        //executing default
            printf("User ID not found.");
    }
}