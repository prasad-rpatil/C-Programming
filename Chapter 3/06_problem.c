#include <stdio.h>

int main(){
    int a=4, b=250, c=6, d=32;
    if(a>b && a>c && a>d){
        printf("The greatest of all is %d\n", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest of all is %d\n", b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest of all is %d\n", c);
    }
    else{
        printf("The greatest of all is %d\n", d);
    }
    return 0;
}