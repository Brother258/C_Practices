/*
Write a program that prints the number of digits in an integer number.
Sample Input: 2102
Sample Output: 4
*/

#include <stdio.h>
int main(){
    int a, i;
    printf("Enter a number : ");
    scanf("%d", &a);

//for loop

    for(i=0;a!=0; a=a/10){
            i=i+1;
    }
    printf("%d", i);


/*while loop
    i=0;
        while(a!=0){
            a=a/10;
            i=i+1;
        }
    printf("%d", i);
*/

return 0;
}
