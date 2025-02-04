#include <stdio.h>
int main(){
    int a[3][2] = {7,8,9,10,11,12}, tr[2][3];



    printf("\n");
    printf("The Matrix is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            tr[i][j]=a[j][i];
        }

    }


    printf("\n");
    printf("The Transpose Matrix is : \n");
    printf("\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", tr[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    printf("The Second Row of Transpose Matrix is : \n");
    printf("\n");

    for(int i=1;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", tr[i][j]);
        }
        printf("\n");
    }



    printf("\n");
    printf("The First Column of Matrix is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }



return 0;
}
