#include<stdio.h>
int main(){
    int number;

    do{
        printf("Enter a positive Number:");
        scanf("%d",&number);
        if(number<=0){
            printf("Invalid Number\n");
        }
    }while (number<=0);

    printf("The number is %d",number);

    return 0;
 
}