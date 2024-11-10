/*
Find the letter grade of a given mark. Follow the grading system of ULAB.




Policy Letter Grade Grade Point Assessments
95% and above A+ 4.00 Outstanding
85% to 94% A 4.00 Superlative
80% to 84% A- 3.80 Excellent
75% to 79% B+ 3.30 Very Good
70% to 74% B 3.00 Good
65% to 69% B- 2.80 Average
60% to 64% C+ 2.50 Below Average
55% to 59% C 2.20 Passing
50% to 54% D 1.50 Probationary
below 50% F 0.00 Fail
-- I 0.00 Incomplete
-- W 0.00 Withdrawn
-- AW 0.00 Administrative Withdrawal
*/

#include <stdio.h>
int main(){
    int mark;

    printf("Enter the mark : ");
    scanf("%d", &mark);

    printf("Your mark is %d and grade is ", mark);

        (mark >= 95 && mark<=100) ? printf("A+") :
        (mark >= 85 && mark<=94) ? printf("A"):
        (mark >= 80 && mark<=84) ? printf("A-") :
        (mark >= 75 && mark<=79) ? printf("B+") :
        (mark >= 70 && mark<=74) ? printf("B") :
        (mark >= 65 && mark<=69) ? printf("B-") :
        (mark >= 60 && mark<=64) ? printf("C+") :
        (mark >= 55 && mark<=59) ? printf("C") :
        (mark >= 50 && mark<=54) ? printf("D") :
        (mark <= 49 && mark>=0) ? printf("F") :
         printf("Invalid mark");


return 0;
}
