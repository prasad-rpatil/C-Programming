#include <stdio.h>

int fibonnaci(int);

int fibonnaci(int n){
    if(n <= 2){
        return n-1;
    }
    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main(){
    int n=7;
    printf("The value of fibonnaci series at %d is %d\n", n, fibonnaci(n));
    
    return 0;
}