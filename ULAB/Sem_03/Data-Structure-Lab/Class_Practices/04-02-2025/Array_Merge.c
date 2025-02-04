#include <stdio.h>
int main(){
    int a[5]={2,3,4,5,6};
    int b[5] = {7,8,9,10,11};
    int c[10];

    for(int i=0;i<5;i++){
        c[i]=a[i];
    }

    for(int i=5;i<10;i++){
        c[i]=b[i-5];
    }

    printf("Elements of Array a : \n");
    for(int i=0;i<5;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }


    printf("\n");


    printf("Elements of Array b : \n");
    for(int i=0;i<5;i++){
        printf("b[%d] = %d\n",i,b[i]);
    }

    printf("\n");

    printf("Elements of Array c : \n");
    for(int i=0;i<10;i++){
        printf("c[%d] = %d\n",i,c[i]);
    }


return 0;
}
