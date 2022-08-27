#include <stdio.h>
int main(){
    double valor, kelvin, farenheit, celsius;
    char escala, C, F, K;
    scanf("%lf %c", &valor, &escala);
    C='c';
    F='f';
    K='k';
    if (escala==C)
    {celsius = valor ;
     kelvin = celsius + 273.15;
     farenheit = (celsius * 1.8) + 32;
     printf("Kelvin = %.2lf K\n", kelvin);
     printf("Farenheit = %.2lf ºF\n", farenheit);
     printf("Celsius = %.2lf ºC\n", celsius);
    }
    if (escala==F)
    {farenheit = valor ;
     kelvin = (farenheit+32/1.8) + 273.15;
     celsius = (farenheit+32/1.8);
     printf("Kelvin = %.2lf K\n", kelvin);
     printf("Farenheit = %.2lf ºF\n", farenheit);
     printf("Celsius = %.2lf ºC\n", celsius);
    }
    if (escala==K)
    {kelvin = valor ;
     celsius = kelvin - 273.15;
     farenheit = ((kelvin - 273.15) * 1.8) + 32;
     printf("Kelvin = %.2lf K\n", kelvin);
     printf("Farenheit = %.2lf ºF\n", farenheit);
     printf("Celsius = %.2lf ºC\n", celsius);
    }
return 0;
}