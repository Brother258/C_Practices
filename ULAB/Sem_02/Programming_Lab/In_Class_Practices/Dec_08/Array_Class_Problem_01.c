#include <stdio.h>
int main(){
    int i, a[5] = {60,70,80,88,90};
    float sum =0, avg;

    for(i=0; i<5; i++){
        sum = sum + a[i];
    }

    avg = sum/5;

    printf("Average is : %.2f ",avg);


return 0;
}

