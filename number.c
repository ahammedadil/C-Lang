#include<stdio.h>
int main()
{
    int i,num,temp=0;
    //read input from the user
    printf("enter any numb to check for prime:");
    scanf("%d",&num);
    //iterate up to n/2.
    for(i=2;i<=num/2;i++)
    {
        //check if num is divisible by any number
        if(num%i==0)
        {
            temp++;
            break;
        }
    }
    //check for the value of temp and num.
    if(temp==0 && num !=1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    return 0;
}