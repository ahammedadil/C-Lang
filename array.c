#include<stdio.h>
int main(){
    int arr[10];
    int i;
    printf("Enter the numbers");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
        printf("Display the numbers : \n");
        for(i=0;i<5;i++)
        printf("arr[%d]=%d\n",i,arr[i]);

        return 0;

    
}