/*
Convert Celsius temperature to Fahrenheit. Note that, F = 9C/5 + 32

Sample Input: 20
Sample Output: 68
*/

#include <stdio.h>
int main(){
    int F,C;

    printf("Enter the celcius value to conver into farenheit : ");
    scanf("%d", &C);
    F = (9*C)/5 + 32;
    printf("%d\n", F);

return 0;
}
