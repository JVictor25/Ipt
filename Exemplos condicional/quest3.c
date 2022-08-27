int main(){
    double n, k, f, c;
    char e, C, F, K;
    scanf("%lf %c", &n, &e);
    C="c";
    F="f";
    K="k";
    if (e==C)
    {c = n ;
     k = c + 273.15;
     f = (c * 1.8) + 32;
     printf("Kelvin = %lf K", k);
     printf("Farenheit = %lf ºF", f);
     printf("Celsius = %lf ºC", c);
    }
    if (e==F)
    {f = n ;
     k = (f+32/1.8) + 273.15;
     c = (f+32/1.8);
     printf("Kelvin = %lf K", k);
     printf("Farenheit = %lf ºF", f);
     printf("Celsius = %lf ºC", c);
    }
    if (e==K)
    {k = n ;
     c = k - 273.15;
     f = ((k - 273.15) * 1.8) + 32;
     printf("Kelvin = %lf K", k);
     printf("Farenheit = %lf ºF", f);
     printf("Celsius = %lf ºC", c);
    }
return 0;
}