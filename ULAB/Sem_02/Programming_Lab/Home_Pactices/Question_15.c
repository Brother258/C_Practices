/*
Write a program to find GCD (greatest common divisor or HCF) and LCM (least
common multiple) of two numbers.
*/

#include <stdio.h>
int main(){
    int a, b, i, gcd, lcm;

    printf("Enter two numbers : ");
    scanf(" %d %d", &a, &b);

    for(i=1; i<=a && i<=b ; i=i+1){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }

/* while loop
    i=1;
    while(i<=a && i<=b) {
        if(a%i==0 && b%i==0){
            gcd = i;
        }
        i=i+1;
    }
*/

    lcm = (a*b)/gcd;
    printf("GCD = %d and LCM = %d ", gcd, lcm);


return 0;
}
