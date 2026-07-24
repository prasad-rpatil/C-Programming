#include <stdio.h>

int main(){
    int arr[5];
    int flag = 1;
    printf("Enter 5 digits: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int  i = 0; i < 5/2; i++)
    {
        if(arr[i] != arr[4 - i]){
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("Pallindrome\n");
    else
        printf("Not a pallindrome\n");
    return 0;
}