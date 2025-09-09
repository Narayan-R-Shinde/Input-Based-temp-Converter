#include <stdio.h>
#include <ctype.h>

int main(){

    int conv;
    char unit;
    float temp;

    printf("Which conversion would you like: \n(1) Celsius(C)-Kelvin(K) \n(2) Celsius(C)-Fahrenhiet(F) \n(3) Kelvin(K)-Fahrenhiet(F) \n");
    scanf("%d", &conv);

    if (conv == 1){
        printf("Please enter the units of the input temperature: (C) or (K)");
        scanf("%s", &unit);

        switch(unit){
            
            case 'C':
             printf("Please enter the temperature: ");
             scanf("%f", &temp);

             temp = temp + 274.15;

             printf("The temperature in kelvin is: %f", temp);
            break;
            case 'K':
             printf("Please enter the temperature: ");
             scanf("%f", &temp);

             temp = temp - 274.15;

             printf("The temperature in celsius is: %f", temp);
            break;
        }
    }
    else if(conv == 2){
        printf("Please enter the units of the input temperature: (C) or(F)");
        scanf("%s", &unit);

        switch(unit){
            case 'C':
             printf("Please enter the temperature: ");
             scanf("%f", &temp);

             temp = ((temp*9/5)+32);

             printf("The temperature in kelvin is: %f", temp);
            break;
            case 'F':
             printf("Please enter the temperature: ");
             scanf("%f", &temp);

             temp = (temp-32)*5/9;

             printf("The temperature in celsius is: %f", temp);
            break;
        }
    }
    else if(conv == 3){
        printf("Please enter the units of the input temperature: (K) or(F)");
        scanf("%s", &unit);
        unit = toupper(unit);

        switch(unit){
            case 'K':
             printf("Please enter the temperature: ");
             scanf("%f", &temp);

             temp = (((temp-274.15)*9/5)+32);

             printf("The temperature in kelvin is: %f", temp);
            break;
            case 'F':
             printf("Please enter the temperature: ");
             scanf("%f", &temp);

             temp = (((temp-32)*5/9)-274.15);

             printf("The temperature in celsius is: %f", temp);
            break;
        }
    }
    else{
        printf("Please enter a valid input");
    }

    return 0;
}