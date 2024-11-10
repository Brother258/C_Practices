/*
Write a C program to calculate and display the total salary of an employee considering
that total salary is the sum of basic salary and house rent. The program must ask the
user for the basic salary and percentage of basic salary which determines the house rent.
Sample Input: 25000 10
Sample Output: 27500
*/

#include <stdio.h>
int main(){
    float total_salary, basic_salary, house_rent, rent_percentage;

    printf("Enter the Basic salary and percentage of basic salary to determine house rent : ");
    scanf("%f%f",&basic_salary, &rent_percentage);

    house_rent = (rent_percentage/100)*basic_salary;
    total_salary = basic_salary + house_rent;
    printf("Total salary is : %.0f", total_salary);

return 0;
}
