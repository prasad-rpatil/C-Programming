#include <stdio.h>

int sum(int a, int b){
    printf("The sum is %d\n", a+b);
}

float average(int a, int b){
    printf("The average is %f\n", (a+b)/2.0);
}

int main(){
    int x = 4;
    int y = 6;
    sum(x,y);
    average(x,y);
    return 0;
}