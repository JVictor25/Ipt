#include <stdio.h>
int main(){
    double valor, kelvin, farenheit, celsius;
    char escala, C, F, K;
    scanf("%lf %c", &valor, &escala);
    C='C';
    F='F';
    K='K';
    if (escala==C)
    {celsius = valor ;
     kelvin = celsius + 273.15;
     farenheit = (celsius * 1.8) + 32;
    printf("Celsius: %.2lf\n", celsius); 
    printf("Farenheit: %.2lf\n", farenheit);
    printf("Kelvin: %.2lf\n", kelvin);
    
    }
    if (escala==F)
    {farenheit = valor ;
     kelvin = ((farenheit-32)/1.8) + 273.15;
     celsius = ((farenheit-32)/1.8);
    printf("Celsius: %.2lf\n", celsius); 
    printf("Farenheit: %.2lf\n", farenheit);
    printf("Kelvin: %.2lf\n", kelvin);
    }
    if (escala==K)
    {kelvin = valor ;
     celsius = kelvin - 273.15;
     farenheit = ((kelvin - 273.15) * 1.8) + 32;
    printf("Celsius: %.2lf\n", celsius); 
    printf("Farenheit: %.2lf\n", farenheit);
    printf("Kelvin: %.2lf\n", kelvin);
    }
return 0;
}