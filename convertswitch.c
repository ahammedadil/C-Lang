#include<stdio.h>

int main(){
    int choice;
    double year;

    printf("Enter the number of years:");
    scanf("%1f",&year);

    printf("Choose the conversion option:\n");
    printf("a.Minutes\n");
    printf("b.Hours\n");
    printf("c.Days\n");
    printf("d.Months\n");
    printf("e.Seconds\n");
    printf("Enter your choice(a/b/c/d/e):");
    scanf("%d",&year);
    getchar();
    choice=getchar();

    switch(choice){AQ
        case 'a':
        printf("%21fyears is approximately %21f minutes.\n",year,year*365*24*60);
        break;
        case 'b':
        printf("%21fyears is approximately %21f hours.\n",year,year*365*24);
        break;
        case 'c':
        printf("%21fyears is approximately %21f days.\n",year,year*365);
        break;
        case 'd':
        printf("%21fyears is approximately %21f months.\n",year,year*12);
        break;
        case 'e':
        printf("%21fyears is approximately %21f seconds.\n",year,year*365*24*60*60);
        break;
        default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;

}