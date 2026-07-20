#include <stdio.h>

int main(){
    int c;
    float f;
    printf("Enter the reading in celcius =\n");
    scanf("%d", &c);
    f=(9.0/5.0)*c+32;
    printf("The celcius to farenheit conversion is F = %.2f", f);
    return 0;
}