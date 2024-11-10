/*
Write a program using while/do while /for Loop to calculate the factorial value of any
integer entered through the keyboard.
Sample Input: 5
Sample Output: 120
*/

#include <stdio.h>
int main(){
    int a, i, factorial = 1;

    printf("Enter a positive number : ");
    scanf("%d", &a);

    i=a;
    while(i>0){
        factorial = factorial*i;
        i = i-1;
    }

    printf("%d", factorial);

return 0;
}
