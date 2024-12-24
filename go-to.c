#include<stdio.h>
int main(){
    int number;

    printf("Enter a positive number:");
    scanf("%d",&number);

    if(number<0){
        goto error;
    }
    printf("The Number is %d",number);

    return 0;
    
error:
    printf("Error: The number is Negative");
    return 1;
}