#include<stdio.h>
int main(){
    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number>0){
        if(number%2==0){
            printf("%d is positive and even",number);
        }else{
            printf("%d is positive and odd",number);
        }
    }else{
        printf("The number is not positive");
    }

}