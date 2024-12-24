// #include<stdio.h>
// int main(){

//     int matrix[2][3]= { {1,3} , {3,6,8}};

//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("MATRIX[%d][%d] = %d\n",i,j,matrix[i][j]);

//         }
//     }

//     return 0;

// }

#include<stdio.h>
int main(){

    int matrix[3][4]={ {1,5,6,8} ,{3,56,7,8}, {4,5,78,5} };

    printf("The elements of 2d Array are:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Matrix[%d][%d]=[%d]\n",i,j,matrix[i][j]);

        }
    }
    return 0;


 }