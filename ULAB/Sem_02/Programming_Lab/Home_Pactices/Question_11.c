/*
Write a program that will give a choice menu. Using switch for coding. Take two inputs
and one operator and do the calculation.
Press ‘+’: Add two number
Press ‘-’: Subtract two number
Press ‘*’: Multiply two number
Press ‘/’: Division two number
Sample Input: 8 / 10
Sample Output: 0.80
*/

#include <stdio.h>
int main(){
    float num1, num2, result;
    char operator;
    printf("Press '+': Add two number\n");
    printf("Press '-': Subtract two number\n");
    printf("Press '*': Multiply two number\n");
    printf("Press '/': Division two number\n");
    printf("Sample Input: 8 / 10\n\n");

    printf("Input first number then operator then second number (Ex : 1 + 2) :  \n");
    scanf(" %f %c %f",&num1, &operator, &num2);

    switch(operator){
        case '+' :
            result = num1 + num2;
            printf("%.2f", result);
            break;

        case '-' :
            result = num1 - num2;
            printf("%.2f", result);
            break;


        case '*' :
            result = num1*num2;
            printf("%.2f", result);
            break;

        case '/' :
            switch((num2==0? 1 : 2)){
                case 1 :
                    printf("Not divisible");
                    break;

                case 2 :
                    result = num1/num2;
                    printf("%.2f", result);
                    break;

            }
            break;

        default :
            printf("Invalid operator!");
            break;


    }




return 0;
}
