/*
Write down a program that will take three integers as input and will print the second
largest of the three.
*/

#include <stdio.h>
int main(){
    int a,b,c;

    printf("Enter the 3 number to determine the second largest number : ");
    scanf(" %d %d %d", &a, &b, &c);

    if(a>b && a>c){
        if(b>c){
            printf("Second largest number is : %d", b);
        }
        else{
            printf("Second largest number is : %d", c);
        }
    }

    else if(b>a && b>c){
        if(a>c){
            printf("Second largest number is : %d", a);
        }
        else{
            printf("Second largest number is : %d", c);

        }
    }

    else{
        if(a>b){
            printf("Second largest number is : %d", a);
        }
        else{
            printf("Second largest number is : %d", b);

        }
    }

return 0;
}
