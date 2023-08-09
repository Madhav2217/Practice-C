#include<stdio.h>

int Age, V_ID_N, PN, VBJP = 0, VC = 0, VAJP = 0, X = 1;

void Voting(){
    printf("Enter your age = ");
    scanf("%d", &Age);
    if (Age>=18)
    {
        printf("Enter your Voter ID Number = ");
        scanf("%d", &V_ID_N);
        printf("BJP(1)\nCongress(2)\nAJP(3)\n");
        scanf("%d", &PN);

        if (PN==1)
        {
            VBJP++;
        }
        
        else if (PN==2)
        {
            VC++;
        }
        
        else if (PN==3)
        {
            VAJP++;
        }
        
        else
        {
            printf("Invalid Party Number.\n");
            X--;
        }
        
    }
    
    else
    {
        printf("You are underage, not elligible for voting.\n");
        X--;
    }
    
}

void Tally(){
    if (VBJP>VC)
    {
        if (VBJP>VAJP)
        {
            printf("BJP Wins.");
        }
        
        else if (VAJP>VBJP)
        {
            printf("AJP Wins.");
        }
        
        else
        {
            printf("Tie between BJP and AJP.");
        }
        
    }

    else if (VAJP>VBJP)
    {
        if (VAJP>VC)
        {
            printf("AJP Wins.");
        }
        
        else if (VC>VAJP)
        {
            printf("Congress Wins.");
        }
        
        else
        {
            printf("Tie between AJP and congress.");
        }
        
    }

    else if (VC>VAJP)
    {
        if (VC>VBJP)
        {
            printf("Congress Wins.");
        }
        
        else if (VBJP>VC)
        {
            printf("BJP Wins.");
        }
        
        else
        {
            printf("Tie between BJP and Congress.");
        }
        
    }
}

void main(){
    while (X<11)
    {
        Voting();
        X++;
    }
    Tally();
    printf("\nVotes of BJP = %d", VBJP);
    printf("\nVotes of Congress = %d", VC);
    printf("\nVotes of AJP = %d", VAJP);
}