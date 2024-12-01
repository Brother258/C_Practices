#include<stdio.h>
int sum(int a, int b){
    int add;
    add = a+b;
    return add;
}
int main(){
    int a,b,result;
    scanf(" %d %d",&a,&b);

    result = sum(a,b);

    printf("%d",result);

return 0;
}
