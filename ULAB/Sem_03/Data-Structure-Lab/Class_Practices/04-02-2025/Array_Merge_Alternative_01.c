#include <stdio.h>
int main(){
    int a[5]={2,3,4,5,6};
    int b[5] = {7,8,9,10,11};
    int i,n;
    int c[n];

    for(i=0;i<5;i++){
        c[n]=a[i];
        n++;
    }

    for(i=0;i<5;i++){
        c[n]=b[i];
        n++;
    }

    for(i=0;i<10;i++){
        printf("c[%d] = %d\n",i,c[i]);
    }


return 0;
}
