#include<stdio.h>

int Category;
int TempChoice, CurrencyChoice, MassChoice;
float InputFaren, OutputCelcius, InputCelsius, OutputFaren;
float InputINR, InputUSD, InputAED, OutputINR, OutputUSD, OutputAED;
float InputGrams, InputPounds, OutputGrams, OutputPounds;

void Temperature(){
    printf("Farenheit to Celsius(1), Celsius to Farenheit(2), Exit(3)\n");
    scanf("%d", &TempChoice);

    if (TempChoice==1)
    {
        printf("Input Temp = ");
        scanf("%f", &InputFaren);
        OutputCelcius = ((InputFaren-32)*5)/9;
        printf("Temp in Celsius = %f", OutputCelcius);
    }

    else if (TempChoice==2)
    {
        printf("Input Temp = ");
        scanf("%f", &InputCelsius);
        OutputFaren = ((InputCelsius*9)/5)+32;
        printf("Temp in Farenheit = %f", OutputFaren);
    }
        
    else if (TempChoice==3)
    {
        printf("Program Exited.");
    }
    
    else
    {
        printf("Invalid Input, Program Terminated.");
    }
}

void Currency(){
    printf("INR to USD(1), INR to AED(2), USD to INR(3), AED to INR(4), Exit(5)\n");
    scanf("%d", &CurrencyChoice);

    if (CurrencyChoice==1)
    {
        printf("Input Value = ");
        scanf("%f", &InputINR);
        OutputUSD = InputINR/80;
        printf("Value in USD = %f", OutputUSD);
    }

    else if (CurrencyChoice==2)
    {
        printf("Input Value = ");
        scanf("%f", &InputINR);
        OutputAED = InputINR/20;
        printf("Value in AED = %f", OutputAED);
    }

    else if (CurrencyChoice==3)
    {
        printf("Input Value = ");
        scanf("%f", &InputUSD);
        OutputINR = InputUSD*80;
        printf("Value in INR = %f", OutputINR);
    }

    else if (CurrencyChoice==4)
    {
        printf("Input Value = ");
        scanf("%f", &InputAED);
        OutputINR = InputAED*20;
        printf("Value in INR = %f", OutputINR);
    }
    
    else if (CurrencyChoice==5)
    {
        printf("Program Exited.");
    }
    
    else
    {
        printf("Invalid Input, Program Terminated.");
    }
    
}

void Mass(){
    printf("Grams to Pounds(1), Pounds to Grams(2), Exit(3)\n");
    scanf("%d", &MassChoice);

    if (MassChoice==1)
    {
        printf("Input Mass = ");
        scanf("%f", &InputGrams);
        OutputPounds = InputGrams/(453.6);
        printf("Mass in Pounds = %f", OutputPounds);
    }

    else if (MassChoice==2)
    {
        printf("Input Mass = ");
        scanf("%f", &InputPounds);
        OutputGrams = InputPounds*(453.6);
        printf("Mass in Grams = %f", OutputGrams);
    }
    
    else if (MassChoice==3)
    {
        printf("Program Exited.");
    }

    else
    {
        printf("Invalid Input, Program Terminated.");
    }
    
}

void main(){
    printf("Temperature(1), Currency(2), Mass(3), Exit(4)\n");

    scanf("%d", &Category);

    if (Category==1)
    {
        Temperature();
    }

    else if (Category==2)
    {
        Currency();
    }

    else if (Category==3)
    {
        Mass();
    }
    
    else if (Category==4)
    {
        printf("Program Exited.");
    }
    
    else
    {
        printf("Invalid Input, Program Terminated.");
    }
    
}