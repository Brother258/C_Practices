/*
Write a C program that takes number of days as input, and then converts it into years
and days, and displays the results. Assume that, 1 year = 365 days.
Sample Input: 735
Sample Output: 2 years 5 days
*/

#include <stdio.h>
int main(){

    int days, years, days_left;

    printf("Enter the days : ");
    scanf("%d", &days);
    years = days/365;
    days_left = days%365;
    printf("%d years %d days\n",years,days_left);
    return 0;
}
