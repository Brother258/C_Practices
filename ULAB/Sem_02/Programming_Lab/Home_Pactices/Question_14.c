/*
Write a program to input two integer numbers and display the sum of even numbers
between these two input numbers.
*/

#include <stdio.h>
int main(){
    int a,b,i, sum;
    sum=0;

    printf("Enter two number : ");
    scanf(" %d %d", &a, &b);
    if(a<b){
            if(a%2==0){
                for(i=a+2;i<b;i=i+2){
                sum +=i;
            }
        }
            else{
                for(i=a+1;i<b;i=i+2){
                sum +=i;

            }
        }

    }
    else{
            if(b%2==0){
                for(i=b+2;i<a;i=i+2){
                sum +=i;

            }
        }
            else{
                for(i=b+1;i<a;i=i+2){
                sum +=i;

            }
        }

    }

    printf("%d",sum);


return 0;
}
