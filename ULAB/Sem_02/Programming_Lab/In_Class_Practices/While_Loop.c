#include <stdio.h>
    int main(){
        int count, n, sum;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        sum = 0;
            count=1;
            while(count<=n){
                sum = sum + (count*count);
                count = count++;
            }
            printf("%d",sum);

    return 0;
}
