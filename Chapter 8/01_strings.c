#include <stdio.h>

int main(){
    // char st[] = {'a','b','c', '\0'};
    char st[] = "abc"; //same as above
    for (int i = 0; i < 3; i++)
    {
        printf("First char is %c \n", st[i]);
    }
    
    return 0;
}