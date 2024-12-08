#include <stdio.h>
int main(){
    int i,j, max;

    int a[10] = {10,20,30,40,50,60,70,80,90,10};

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[j]>a[i]){
                max = a[j];
            }
        }
    }

    printf("%d", max);

return 0;
}
