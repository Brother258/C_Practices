#include <stdio.h>
    int main(){
        int count, n, sum;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        sum = 0;
            for(count=1; count<=n; count++){
                sum = sum + count;
            }
            printf("%d",sum);

    return 0;
}
