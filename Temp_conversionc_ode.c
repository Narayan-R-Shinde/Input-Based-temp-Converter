#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("Is the temperature value is (C) or (F)");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit=='C'){
        printf("The temperature is in %c",unit);
        printf("\nEnter the temp in celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenhiet : %.1f", temp);
    }
    else if (unit=='F'){
        printf("The temperature is in %c",unit);
        printf("\nEnter the temp in Farenhiet : ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celcius : %.1f", temp);
    }
    else{
        printf("%c is not a valid measurement", unit);
    }


    return 0;
}
