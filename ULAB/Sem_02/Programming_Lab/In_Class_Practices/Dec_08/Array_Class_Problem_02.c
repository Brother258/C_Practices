#include <stdio.h>
int main(){
    int n, i;

    printf("Enter the array size : ");
    scanf(" %d",&n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Enter the array element value : ");
        scanf(" %d", &a[i]);
    }

    printf("\n \nThe odd elements in the array are : ");


    for(i=0; i<n; i++){
        if(a[i]%2!=0){
            printf("%d ", a[i]);
        }
    }

    printf("\n \n \n \n");

return 0;
}
