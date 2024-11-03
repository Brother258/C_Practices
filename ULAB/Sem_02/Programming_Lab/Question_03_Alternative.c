#include <stdio.h>
    int main(){
    int days, days_left, year;
    printf("Enter days : ");
    scanf("%d", &days);
    days_left = days%365;
    year = days/365;

    printf("%d years %d days", year ,days_left);
return 0;
}
