#include <stdio.h>
int main(){
    int a[5]={25, 26, 16, 18, 15};
    int size = 5;
    int i,j,temp;

    for(i=1;i<size;i++){
        temp = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }

    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

return 0;
}
