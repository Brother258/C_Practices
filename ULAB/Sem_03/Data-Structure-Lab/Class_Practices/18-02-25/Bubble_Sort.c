#include <stdio.h>
int main(){
    int a[5]={25, 26, 16, 18, 15};
    int size = 5;
    int i,j;

    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(a[j]>a[j+1]){
                a[j] = a[j]^a[j+1];
                a[j+1] = a[j]^a[j+1];
                a[j] = a[j]^a[j+1];

                /*
                Alternative swap

                a[j] = a[j]+a[j+1];
                a[j+1] = a[j]-a[j+1];
                a[j] = a[j]-a[j+1];
                */

                /*
                Swap with 3rd variable

                int temp;
                temp = a[j];
                a[j] = a[j=1];
                a[j+1] = temp;
                */
            }
        }
    }

    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

return 0;
}
