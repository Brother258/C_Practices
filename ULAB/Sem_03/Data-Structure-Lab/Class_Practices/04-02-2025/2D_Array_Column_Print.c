#include <stdio.h>
int main(){
    int a[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] : ",i,j);
            scanf(" %d", &a[i][j]);+
        }
    }

    printf("\n");
    printf("The Array is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }


return 0;
}
