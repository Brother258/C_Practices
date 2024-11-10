/*
Write a program that prints all factors of a given number.
Sample Input: 28
Sample Output: 1, 2, 4, 7, 14, 28
*/

#include<stdio.h>

int main(){
    int a,i;

    printf("Enter a number : ");
    scanf("%d", &a);

    for(i=1; i<=a; i=i+1){
        if(a%i==0){
            printf("%d ",i);
        }
    }

return 0;
}
