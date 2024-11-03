/*
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

*/

#include <stdio.h>
    int main(){
    int mark;
    printf("Enter the mark : ");
    scanf("%d", &mark);

    if(mark>=95 && mark<=100){
        printf("The letter grade for the mark %d is A+ \n", mark);
    }

    else if(mark>=85 && mark<=94){
        printf("The letter grade for the mark %d is A \n", mark);
    }
    else if(mark>=80 && mark<=84){
        printf("The letter grade for the mark %d is A-", mark);
    }
    else if(mark>=75 && mark<=79){
        printf("The letter grade for the mark %d is B+", mark);
    }
    else if(mark>=70 && mark<=74){
        printf("The letter grade for the mark %d is B", mark);
    }
    else if(mark>=65 && mark<=69){
        printf("The letter grade for the mark %d is B-", mark);
    }
    else if(mark>=60 && mark<=64){
        printf("The letter grade for the mark %d is C+", mark);
    }
    else if(mark>=55 && mark<=59){
        printf("The letter grade for the mark %d is C", mark);
    }
    else if(mark>=50 && mark<=54){
        printf("The letter grade for the mark %d is D", mark);
    }
    else if(mark>=0 && mark<=49){
        printf("The letter grade for the mark %d is F", mark);
    }
    else{
        printf("Invalid mark input;");
    }

return 0;
}
