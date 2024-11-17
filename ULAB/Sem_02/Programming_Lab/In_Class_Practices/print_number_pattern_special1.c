#include <stdio.h>
int main(){
    int i,j,row,num;

    printf("Enter the number of rows : ");
    scanf(" %d",&row);

    num = 1;
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");

    }
return 0;
}
