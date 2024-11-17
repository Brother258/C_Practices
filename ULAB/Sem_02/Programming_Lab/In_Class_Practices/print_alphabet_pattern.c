#include <stdio.h>
int main(){
    int i,j,row;
    char ch;
    printf("Enter row : ");
    scanf(" %d",&row);

    for(i=0;i<row;i++){
        ch = 'a';
        for(j=0;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");

    }
return 0;
}
