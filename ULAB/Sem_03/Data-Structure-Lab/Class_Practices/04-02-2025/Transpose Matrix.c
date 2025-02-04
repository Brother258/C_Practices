#include <stdio.h>
int main(){
    int a[2][3], tr[3][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] : ",i,j);
            scanf(" %d", &a[i][j]);
        }
    }

    printf("\n");
    printf("The Matrix is : \n");
    printf("\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tr[i][j]=a[j][i];
        }

    }


    printf("\n");
    printf("The Transpose Matrix is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf(" %d ", tr[i][j]);
        }
        printf("\n");
    }

return 0;
}
