#include<stdio.h>
int main(){
    int num;

    printf("Enter a number (1-3):");
    scanf("%d",&num);

    switch(num){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        default:
        printf("Invalid number");
    }
}