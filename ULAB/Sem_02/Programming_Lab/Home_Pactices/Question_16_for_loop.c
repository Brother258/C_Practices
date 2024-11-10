/*
Write a program using while/do while /for Loop to calculate the factorial value of any
integer entered through the keyboard.
Sample Input: 5
Sample Output: 120
*/

#include <stdio.h>
int main(){
    int a, i, factorial = 1;

    printf("Enter a number : ");
    scanf("%d",&a);

    if(a<0){
        printf("Factorial of negative number undefined");
    }

    else{
        for(i=a; i>0; i = i-1){
        factorial = factorial*i;
        }
    }

    printf("%d", factorial);

return 0;
}
