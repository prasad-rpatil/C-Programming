#include <stdio.h>

int main(){
    int i =5;
    printf("The value of i is %d\n", i); // 5
    i = i+ 5;
    printf("The value of i is %d\n", i);    // 10

    printf("The value of i is %d\n", i++);  // 10
    printf("The value of i is %d\n", i);    // 11

    i +=2;  // it is same as i = i + 2
    
    printf("The value of i is %d\n", i);    // 13s


    // i++ prints i first and then increments (post increment)
    // ++i increments first and then prints i (pre increment)
    
    return 0;
}