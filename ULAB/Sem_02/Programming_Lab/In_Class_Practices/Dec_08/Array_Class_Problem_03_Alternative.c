#include <stdio.h>
int main(){
    int i, max;

    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    max = a[0];

    for(i=0;i<10;i++){
        if(max<a[i]){
            max = a[i];
        }
    }

    printf("%d", max);

return 0;
}

