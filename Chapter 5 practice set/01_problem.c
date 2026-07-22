#include <stdio.h>

float average(int, int, int);

float average(int x, int y, int z){
    return (x + y + z)/3.0;
}

int main(){
    int a = 3;
    int b = 6;
    int c = 5, d;
    printf("The averafe of %d, %d and %d is %f\n", a, b, c, average(a,b,c));
    return 0;
}