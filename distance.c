#include<stdio.h>
int main(){
    float km,f,cm,in,m;
    printf("Enter distance between 2 cities:");
    scanf("%f",&km);
    m=km*1000;
    cm=km*1000*100;
    f=km*3280.84;
    in=km*39370.08;
    printf("The distance in centimeter=%.2f\n",cm);
    printf("The distance in feet=%2f\n",f);
    printf("The distance in inches=%2f",in);

    return 0;
    

}