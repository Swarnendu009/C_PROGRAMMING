#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temp in celcius:");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("temperature in fahrenheit=%f",f);
}