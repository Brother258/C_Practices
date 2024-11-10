/*
Write a C program to enter the radius of a circle and find its circumference and area.
Note that Circumference = 2 × π × (radius), Area = π × (radius)
2
,

and assume π = 3.1416
Sample Input: 2
Sample Output: Circumference = 12.56 and Area = 12.56
*/
#include <stdio.h>
int main(){
    float radius, circumference, area, pi;
    pi = 3.1416;

    printf("Enter the value of radius : ");
    scanf("%f", &radius);
    circumference = 2*pi*radius;
    area = pi*radius*radius;
    printf("Circumference = %.2f and Area = %.2f", circumference, area);

    return 0;
}
