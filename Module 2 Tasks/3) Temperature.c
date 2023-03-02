#include <stdio.h>

int main()
{
    double value;
    int options;
    scanf("%lf",&value);
    printf("Please Choose From one of the options\n\t1)celcius to farenheit\n\t2)Farenheit to celcius\n\t3)celcius to kelvin\n\t4)kelvin to farenheit\n");
    scanf("%d",&options);
    switch(options)
    {
        case 1:
            printf("%.2lf Celius = %lf Farenheit",value,((value*(9.0/5.0))+32));
            break;
            
        case 2:
            printf("%.2lf Farenheit = %lf Celius",value,((value-32)*(5.0/9.0)));
            break;
            
        case 3:
            printf("%.2lf Celius = %lf Kelvin",value,(value+273.15));
            break;
        
        case 4:
            printf("%.2lf Kelvin = %lf Fahrenheit",value,(((9.0/5.0)*(value-273.15))+32));
            break;
            
        default:
            printf("Wrong Option");
            break;
    }
    
    return 0;
}

/*
To convert temperatures in degrees Celsius to Fahrenheit, multiply by 1.8 (or 9/5) and add 32
To convert temperatures in degrees Fahrenheit to Celsius, subtract 32 and multiply by .5556 (or 5/9).
The conversion of Celsius to Kelvin: Kelvin = Celsius + 273.15.
Kelvin to Fahrenheit: F = 9/5(K - 273) + 32 or F = 1.8(K - 273) + 32.
*/