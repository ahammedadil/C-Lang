#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,compoundInterest;

    printf("Enter the principal amount:");
    scanf("%f",&principal);

    printf("Enter the annual interest rate (in percentage):");
    scanf("%f",&rate);

    printf("Enter the time period (in years):");
    scanf("%f",&time);

    compoundInterest=principal*pow((1+rate/100),time)-principal;

    printf("Compound Interest= %.2f\n",compoundInterest);

    return 0;

}