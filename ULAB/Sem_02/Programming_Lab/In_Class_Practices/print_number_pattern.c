#include <stdio.h>
int main(){
    int i,j,row;
    int num;
    printf("Enter row : ");
    scanf(" %d",&row);

    for(i=0;i<row;i++){
        num = 1;
        for(j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");

    }
return 0;
}
