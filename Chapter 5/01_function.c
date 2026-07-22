#include <stdio.h>

// Function prototype
int sum(int, int);

// Function defination
int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}
int main(){

    int a=1, b=2;
    sum(a,b);       //Function Call

    int a1=12, b1=23;
    sum(a1,b1);

    int a2=10, b2=32;
    sum(a2,b2);

    return 0;
}