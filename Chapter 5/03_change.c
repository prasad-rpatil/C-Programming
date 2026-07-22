#include <stdio.h>

int change(int a);

int change(int a){
    a += 1;
    return 0;
}

int main(){
    int b = 22;
    change(b);  //The value of b remains same
    printf("%d\n", b);

    return 0;
}