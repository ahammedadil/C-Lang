#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d\n%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping:a=%d\n",a,b);
     
     return 0;
}