---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_01.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_02.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_03.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_04.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_05.c
---

/*
Write a C program to take a letter from the English alphabet as input and display both
the previous and the next letters with ASCII codes. Assume that input will always be
chosen from B to Y or b to y.
Sample Input: d
Sample Output:
Previous letter with ASCII: c 99
Next letter with ASCII: e 101
*/

#include <stdio.h>
int main(){
    char letter, next_letter, previous_letter;

    printf("Enter a letter : ");
    scanf("%c", &letter);

    previous_letter = letter - 1;
    next_letter = letter + 1;

    printf("Previous letter with ASCII: %c %d\n", previous_letter, previous_letter);
    printf("Next letter with ASCII: %c %d\n", next_letter, next_letter);


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_06.c
---

/*
Print the value of y for given x=2 & z=4 and analyze the output.
a. y = x++ + ++x;
b. y= ++x + ++x;
c. y= ++x + ++x + ++x;
d. y = x>z;
e. y= x>z? x:z;
f. y = x&z;
*/

#include <stdio.h>
int main(){
    int x, y, z;
    x = 2;
    z = 4;

    y = x++ + ++x;
    //x=3, (2+1+3)
    printf("%d\n", y);

    x = 2;N
    z = 4;
    //x=4 (3+4) but printing 8 insted of 7, cause the pre-increment and post increment calculation is not gurranted by c standards and it can differ compiler by compiler!
    y = ++x + ++x;
    printf("%d\n", y);

    x = 2;
    z = 4;
    //x=5 (3+4+5) but printing 13 insted of 12, cause the pre-increment and post increment calculation is not gurranted by c standards and it can differ compiler by compiler!
    y = ++x + ++x + ++x;
    printf("%d\n", y);

    x = 2;
    z = 4;
    //2>4 false so will print 0
    y = x>z;
    printf("%d\n", y);

    x = 2;
    z = 4;
    //if x>z then will print x, else z
    y = x>z? x:z;
    printf("%d\n", y);

    x = 2;
    z = 4;
    y = x&z;
    printf("%d\n", y);

    return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_07.c
---

/*
Write a program to find the largest and smallest among three entered numbers and also
display whether the identified largest/smallest number is even or odd.
*/

#include <stdio.h>
int main(){
    int a,b,c, largest_num, smallest_num;
    printf("Enter the three numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        largest_num = a;
    else if(b>=a && b>=c)
        largest_num = b;
    else
        largest_num = c;

    if(a<=b && a<=c)
        smallest_num = a;
    else if(b<=a && b<=c)
        smallest_num = b;
    else
        smallest_num = c;

    if(largest_num%2 == 0)
        printf("The largest number is %d and it is a even number\n", largest_num);
    else
        printf("The largest number is %d and it is a odd number\n", largest_num);

    if(smallest_num%2 == 0)
        printf("The smallest number is %d and it is a even number\n", smallest_num);
    else
        printf("The smallest number is %d and it is a odd number\n", smallest_num);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_07_alternative.c
---

/*
Write a program to find the largest and smallest among three entered numbers and also
display whether the identified largest/smallest number is even or odd.
*/

#include <stdio.h>
int main(){
    int a,b,c, largest_num, smallest_num;
    printf("Enter the three numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    largest_num = (a>=b && a>= c) ? a : (b>=a && b>=c)? b : c;
    smallest_num = (a<=b && a<=c) ? a : (b<=a && b<=c) ? b : c;

    if(largest_num%2 == 0)
        printf("The largest number is %d and it is a even number\n", largest_num);
    else
        printf("The largest number is %d and it is a odd number\n", largest_num);

    if(smallest_num%2 == 0)
        printf("The smallest number is %d and it is a even number\n", smallest_num);
    else
        printf("The smallest number is %d and it is a odd number\n", smallest_num);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_08.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_09.c
---

/*
Write a program to input a letter and display it in opposite case, i.e., if the given letter
is in upper case, display it in lower case and vice-versa.
*/

#include <stdio.h>
int main(){
    char letter, reversed_letter;
    printf("Enter a letter (Capital or Small) : ");
    scanf(" %c",&letter);

    if(letter>= 'A' && letter<='Z'){
        reversed_letter = letter + 32;
        printf("You entered capital letter %c and it's small letter is %c\n",letter, reversed_letter);
    }
    else if(letter>='a' && letter<='z'){
        reversed_letter = letter - 32;
        printf("You entered small letter %c and it's capital letter is %c\n",letter, reversed_letter);
    }
    else{
        printf("Invalid input!");
    }


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_10.c
---

/*
Write a program to check whether the entered year is leap year or not (a year is leap if
it is divisible by 4 and divisible by 100 or 400.)
*/

#include <stdio.h>
int main(){
    int year;
    printf("Enter a year to check whether it is leap year or not : ");
    scanf("%d", &year);

    if(year%4 == 0 && (year%100 != 0 || year%400 == 0))
        printf("The year %d is a leap year!", year);
    else
        printf("The year %d is not a leap year!");

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_11.c
---

/*
Write a program that will give a choice menu. Using switch for coding. Take two inputs
and one operator and do the calculation.
Press +: Add two number
Press -: Subtract two number
Press *: Multiply two number
Press /: Division two number
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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_11_alternative_1.c
---

/*
Write a program that will give a choice menu. Using switch for coding. Take two inputs
and one operator and do the calculation.
Press +: Add two number
Press -: Subtract two number
Press *: Multiply two number
Press /: Division two number
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
            result = num1 * num2;
            printf("%.2f", result);
            break;
        case '/' :
           if(num2!=0){
            result = num1 / num2;
            printf("%.2f", result);
           }
           else{
            printf("Not divisible");
           }
          break;

        default :
            printf("Invalid operator");
            break;


    }

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_12.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_13.c
---

/*
Write a program to input a letter and display it in opposite case, i.e., if the given letter
is in upper case, display it in lower case and vice-versa.
*/

//It's a repeated question of question 9

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_14.c
---

/*
Write a program to input two integer numbers and display the sum of even numbers
between these two input numbers.
*/

#include <stdio.h>
int main(){
    int a,b,i, sum;
    sum=0;

    printf("Enter two number : ");
    scanf(" %d %d", &a, &b);
    if(a<b){
            if(a%2==0){
                for(i=a+2;i<b;i=i+2){
                sum +=i;
            }
        }
            else{
                for(i=a+1;i<b;i=i+2){
                sum +=i;

            }
        }

    }
    else{
            if(b%2==0){
                for(i=b+2;i<a;i=i+2){
                sum +=i;

            }
        }
            else{
                for(i=b+1;i<a;i=i+2){
                sum +=i;

            }
        }

    }

    printf("%d",sum);


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_15.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_16_for_loop.c
---

/*
Write a program using while/do while /for Loop to calculate the factorial value of any
integer entered through the keyboard.
Sample Input: 5
Sample Output: 120
*/

#include <stdio.h>
int main(){
    int a, i, factorial = 1;

    printf("Enter a number : ");
    scanf("%d",&a);

    if(a<0){
        printf("Factorial of negative number undefined");
    }

    else{
        for(i=a; i>0; i = i-1){
        factorial = factorial*i;
        }
    }

    printf("%d", factorial);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_16_while_loop.c
---

/*
Write a program using while/do while /for Loop to calculate the factorial value of any
integer entered through the keyboard.
Sample Input: 5
Sample Output: 120
*/

#include <stdio.h>
int main(){
    int a, i, factorial = 1;

    printf("Enter a positive number : ");
    scanf("%d", &a);

    i=a;
    while(i>0){
        factorial = factorial*i;
        i = i-1;
    }

    printf("%d", factorial);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_17.c
---

/*
Write a program that prints the number of digits in an integer number.
Sample Input: 2102
Sample Output: 4
*/

#include <stdio.h>
int main(){
    int a, i;
    printf("Enter a number : ");
    scanf("%d", &a);

//for loop

    for(i=0;a!=0; a=a/10){
            i=i+1;
    }
    printf("%d", i);


/*while loop
    i=0;
        while(a!=0){
            a=a/10;
            i=i+1;
        }
    printf("%d", i);
*/

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_18.c
---

/*
Write a program that prints all factors of a given number.
Sample Input: 28
Sample Output: 1, 2, 4, 7, 14, 28
*/

#include<stdio.h>

int main(){
    int a,i;

    printf("Enter a number : ");
    scanf("%d", &a);

    for(i=1; i<=a; i=i+1){
        if(a%i==0){
            printf("%d ",i);
        }
    }

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_01/problem1.c
---

#include<stdio.h>
int sum(int a, int b){
    int add;
    add = a+b;
    return add;
}
int main(){
    int a,b,result;
    scanf(" %d %d",&a,&b);

    result = sum(a,b);

    printf("%d",result);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_01/problem2.c
---

#include <stdio.h>
float triangle_area(float b, float h){
    float area = 0.5*b*h;
    return area;
}

float rectangle_area(float a, float c){
    float area = a*c;
    return area;
}

float square_area(float d){
    float area = d*d;
    return area;
}

float circle_area(float r){
    float pi = 3.1416;
    float area = pi*r*r;
    return area;
}



int main(){
    float a,b,c,d,h,r,area;

//Calculate the area of the circle
    printf("Enter the base and height of the triangle : ");
    scanf(" %f %f",&b,&h);
    area = triangle_area(b,h);
    printf("Triangle's area is : %f \n\n",area);


//Calculate the area of the circle
    printf("Enter the height and width of the rectangle : ");
    scanf(" %f %f",&a,&c);
    area = rectangle_area(a,c);
    printf("Rectangle's area is : %f \n\n",area);


//Calculate the area of the circle
    printf("Enter the length of the square : ");
    scanf(" %f",&d);
    area = square_area(d);
    printf("Square's area is : %f \n\n",area);

//Calculate the area of the circle
    printf("Enter the radius of the circle : ");
    scanf(" %f",&r);
    area = circle_area(r);
    printf("Circle's area is : %f \n\n",area);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_01/problem3.c
---

#include <stdio.h>
void prime(int start,int end){
    int i,is_prime;
    while (start < end) {
      is_prime = 0;

      if (start <= 1) {
         ++start;
      }

      for (i = 2; i <= start / 2; ++i) {

         if (start % i == 0) {
            is_prime = 1;
            break;
         }
      }

      if (is_prime == 0)
         printf("%d ", start);

      ++start;
   }
}
int main() {
    int start, end;
    printf("Enter the range : ");
    scanf("%d %d", &start, &end);

    prime(start,end);


   return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_01.c
---

#include <stdio.h>
int main(){
    int i, a[5] = {60,70,80,88,90};
    float sum =0, avg;

    for(i=0; i<5; i++){
        sum = sum + a[i];
    }

    avg = sum/5;

    printf("Average is : %.2f ",avg);


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_02.c
---

#include <stdio.h>
int main(){
    int n, i;

    printf("Enter the array size : ");
    scanf(" %d",&n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Enter the array element value : ");
        scanf(" %d", &a[i]);
    }

    printf("\n \nThe odd elements in the array are : ");


    for(i=0; i<n; i++){
        if(a[i]%2!=0){
            printf("%d ", a[i]);
        }
    }

    printf("\n \n \n \n");

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_03.c
---

#include <stdio.h>
int main(){
    int i,j, max;

    int a[10] = {10,20,30,40,50,60,70,80,90,10};

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[j]>a[i]){
                max = a[j];
            }
        }
    }

    printf("%d", max);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_03_Alternative.c
---

#include <stdio.h>
int main(){
    int i, max;

    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    max = a[0];

    for(i=0;i<10;i++){
        if(max<a[i]){
            max = a[i];
        }
    }

    printf("%d", max);

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Practice_01.c
---

#include <stdio.h>
int main(){
    int n, i;

    printf("Enter the array size : ");
    scanf(" %d",&n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Enter the array element value : ");
        scanf(" %d", &a[i]);
    }

    printf("\n \nThe array is : ");


    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    printf("\n \n \n \n");

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Practice_02.c
---

#include <stdio.h>
int main(){
    int a[] = {10,20,30,40,50,60,70,80};


        printf("%d ", sizeof(a)/sizeof(a[0]));


    printf("\n \n \n \n");

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/Switch_Case.c
---

#include <stdio.h>
    int main(){
        char ch;
        printf("Enter a character : ");
        scanf("%c", &ch);

            switch(ch){
            case 'a':
                printf("It is a vowel \n");
                break;
            case 'e':
                printf("It is a vowel \n");
                break;
            case 'i':
                printf("It is a vowel \n");
                break;
            case 'o':
                printf("It is a vowel \n");
                break;
            case 'u':
                printf("It is a vowel \n");
                break;
            case 'A':
                printf("It is a vowel \n");
                break;
            case 'E':
                printf("It is a vowel \n");
                break;
            case 'I':
                printf("It is a vowel \n");
                break;
            case 'O':
                printf("It is a vowel \n");
                break;
            case 'U':
                printf("It is a vowel \n");
                break;
            default :
                printf("You entered a constant  \n");
            }

    return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/While_Loop.c
---

#include <stdio.h>
    int main(){
        int count, n, sum;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        sum = 0;
            count=1;
            while(count<=n){
                sum = sum + (count*count);
                count = count++;
            }
            printf("%d",sum);

    return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/for_loop.c
---

#include <stdio.h>
    int main(){
            int a;
                for(a=1; a<=5; a++){
                printf("Current count is : %d \n", a);
                }

        return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/for_loop_problem.c
---

#include <stdio.h>
    int main(){
        int count, n, sum;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        sum = 0;
            for(count=1; count<=n; count++){
                sum = sum + count;
            }
            printf("%d",sum);

    return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_alphabet_pattern.c
---

#include <stdio.h>
int main(){
    int i,j,row;
    char ch;
    printf("Enter row : ");
    scanf(" %d",&row);

    for(i=0;i<row;i++){
        ch = 'a';
        for(j=0;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");

    }
return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_number_pattern.c
---

#include <stdio.h>
int main(){
    int i,j,row;
    int num;
    printf("Enter row : ");
    scanf(" %d",&row);

    for(i=0;i<row;i++){
        num = 1;
        for(j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");

    }
return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_number_pattern_special1.c
---

#include <stdio.h>
int main(){
    int i,j,row,num;

    printf("Enter the number of rows : ");
    scanf(" %d",&row);

    num = 1;
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");

    }
return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_star_pattern.c
---

#include <stdio.h>
int main(){
    int i,j,row;
    printf("Enter row : ");
    scanf(" %d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/In_Class_Practices/reverse_a_number
---

//code nai... Delete hoye gechilo vule.. Nije practice kor......

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Question_03_Alternative.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Question_06.c
---

/*Print the value of y for given x=2 & z=4 and analyze the output.
a. y = x++ + ++x;
b. y= ++x + ++x;
c. y= ++x + ++x + ++x;
d. y = x>z;
e. y= x>z? x:z;
f. y = x&z;
*/

#include <stdio.h>
    int main(){
        int x,y,z;
            x=2;
            z=4;
        y = x++ + ++x;
            printf("%d \n",y);
        x=2;
        z=4;
        y = ++x + ++x;
            printf("%d \n",y);
        x=2;
        z=4;
        y = ++x + ++x + ++x;
            printf("%d \n",y);
        x=2;
        z=4;
        y = x>z;
            printf("%d \n",y);
        x=2;
        z=4;
        y = x>z? x:z;
            printf("%d \n",y);
        x=2;
        z=4;
        y = x&z;
            printf("%d \n",y);


    return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Question_07.c
---

#include <stdio.h>
    int main(){
    int a,b,c,largest_num,smallest_num;

    printf("Enter the value of a, b, c : ");
    scanf("%d%d%d", &a, &b, &c);

//Checking the largest number

    if(a>b && a>c){
        largest_num = a;
        printf("The largest number is : %d \n",a);
    }
    else if(b>a && b>c){
        largest_num = b;
        printf("The largest number is : %d \n",b);
    }
    else{
        largest_num = c;
        printf("The largest number is : %d \n",c);
    }

//Checking the smallest number

    if(a<b && a<c){
        smallest_num = a;
        printf("The smallest number is : %d \n",a);
    }
    else if(b<a && b<c){
        smallest_num = b;
        printf("The smallest number is : %d \n",b);
    }
    else{
        smallest_num = c;
        printf("The smallest number is : %d \n",c);
    }


//Checking the largest number is even or not

    if(largest_num%2 == 0){
        printf("Largest number %d is a even number \n", largest_num);
    }
    else{
        printf("Largest number %d is a odd number \n", largest_num);
    }


//Checking the smallest number is even or not

    if(smallest_num%2 == 0){
        printf("Smallest number %d is a even number \n", smallest_num);
    }
    else{
        printf("Smallest number %d is a odd number \n", smallest_num);
    }

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/Question_08.c
---

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

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_02/Programming_Lab/project.c
---

#include <stdio.h>

// Define structure for shopping items
struct Item {
    int tea;
    int coffee;
    int water;
    int juice;
} cart = {0,0,0,0};


int priceList[] = {10, 20, 15, 30};

// Function prototypes
void addItem(){
    int choice;

    printf("Item Options:\n");
    printf("1: Tea - [10 BDT]\n");
    printf("2: Coffee - [20 BDT]\n");
    printf("3: Water - [15 BDT]\n");
    printf("4: Juice - [30 BDT]\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
        case 1:
            cart.tea = cart.tea + 1;
            printf("Item successfully added!\n");
            break;
        case 2:
            cart.coffee = cart.coffee + 1;
            printf("Item successfully added!\n");
            break;
        case 3:
            cart.water = cart.water + 1;
            printf("Item successfully added!\n");
            break;
        case 4:
            cart.juice = cart.juice + 1;
            printf("Item successfully added!\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }

}
void removeItem(){
    int choice;

    printf("Item Options:\n");
    printf("1: Tea - [10 BDT]\n");
    printf("2: Coffee - [20 BDT]\n");
    printf("3: Water - [15 BDT]\n");
    printf("4: Juice - [30 BDT]\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
        case 1:
            if(cart.tea>0){
                cart.tea = cart.tea - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        case 2:
            if(cart.coffee>0){
                cart.coffee = cart.coffee - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        case 3:
            if(cart.water>0){
                cart.water = cart.water - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        case 4:
            if(cart.juice>0){
                cart.juice = cart.juice - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        default:
            printf("Invalid Choice!\n");
        }

}
void viewCart(){
    if(cart.tea==0 && cart.coffee==0 && cart.water==0 && cart.juice==0){
        printf("Your cart is empty!\n");
    }
    else{
        printf("Cart Details:\n");
        printf("-------------------------------------------------------------\n");
        printf("Item Type    |    Price    |    Quantity    |    Total Price    \n");
        printf("-------------------------------------------------------------\n");
        printf("Tea          |    %d       |    %d          |    %d\n", priceList[0],cart.tea, priceList[0]*cart.tea);
        printf("Coffee       |    %d       |    %d          |    %d\n", priceList[1],cart.coffee, priceList[1]*cart.coffee);
        printf("Water        |    %d       |    %d          |    %d\n", priceList[2],cart.water, priceList[2]*cart.water);
        printf("Juice        |    %d       |    %d          |    %d\n", priceList[3],cart.juice, priceList[3]*cart.juice);
        printf("-------------------------------------------------------------\n");
        printf("Total Bill : %d\n",priceList[0]*cart.tea+priceList[1]*cart.coffee+priceList[2]*cart.water+priceList[3]*cart.juice);
    }
}

void clearCart(){
    cart.tea = 0;
    cart.coffee = 0;
    cart.water = 0;
    cart.juice = 0;
    printf("Cart has been cleared!\n");
}

void displayMenu(){
    printf("Shopping Cart Management System\n");
    printf("1. Add Item to Cart\n");
    printf("2. Remove Item from Cart\n");
    printf("3. View Cart\n");
    printf("4. Clear Cart\n");
    printf("5. Exit\n");
}

int main() {
    int choice;

    while (1) {

        displayMenu();
        // Perform operations based on user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        // Perform operations based on user choice
        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                removeItem();
                break;
            case 3:
                viewCart();
                break;
            case 4:
                clearCart();
                break;
            case 5:
                printf("Exiting program. Thank you for shopping!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/ 15-04-2025/tree.c
---

#include <stdio.h> 
#include <stdlib.h> 
#include<stdbool.h> 

struct node{ 

 int data; 

 struct node *left; 

 struct node *right; 

}; 

struct node *createNode(int n){ 

 struct node *newNode = malloc(sizeof(struct node)); 

 newNode->data=n; 

 newNode->left = NULL; 

 newNode->right = NULL; 

 return newNode; 

} 

struct node *insert(struct node *root, int value){ 

 if(root == NULL){ 

 return createNode(value); 

 } 

 else if(root->data<value){ 

 root->right=insert(root->right, value); 

 } 

 else{ 

 root->left = insert(root->left, value); 

 } 

 return root; 

} 

void inOrder(struct node *root){ 

 if(root==NULL){ 

 return; 

 } 

 inOrder(root->left); 

 printf("%d ", root->data); 


 inOrder(root->right); 

} 

bool search(struct node *root, int searchingValue){

 bool found = false; 

 if(root==NULL){ 

 return false; 

 } 

 else if(root->data==searchingValue){ 
return true; 

 } 

 else if(root->data<searchingValue){ 

 found = search(root->right, searchingValue); 

 } 

 else{ 

 found = search(root->left, searchingValue);

 } 

 return found; 

} 

struct node *minValueNode(struct node *root) { 

 struct node *tmp = root; 

 while (tmp->left != NULL) 

 tmp = tmp->left; 

 return tmp; 

} 

struct node *deleteNode(struct node *root, int key) { 

 if (root == NULL) 

 return root; 

 if (key < root->data) 

 root->left = deleteNode(root->left, key); 

 else if (key > root->data) 

 root->right = deleteNode(root->right, key); 

 else { 

 if (root->left == NULL) { 

 struct node *temp = root->right; 

 free(root); 

 return temp; 

 } else if (root->right == NULL) { 

 struct node *temp = root->left; 

 free(root); 

 return temp; 

 } 

 struct node *temp = minValueNode(root->right); 

 root->data = temp->data; 

 root->right = deleteNode(root->right, temp->data); 

 } 

 return root; 

} 

int main() 

{ 

 struct node *root = NULL; 

 root = insert(root, 50); 

 root = insert(root, 30); 

 root = insert(root, 20); 

 root = insert(root, 60); 

 root = insert(root, 55); 

 root = insert(root, 65); 

 printf("Inorder traversal: "); 

 inOrder(root); 

 printf("\nAfter deleting:60 \n"); 

 root = deleteNode(root, 60); 

 printf("Inorder traversal: "); 

 inOrder(root); 

 int node = search(root, 30); 

 if(node == 0){ 

 printf("\nValue is not found in BST\n"); 

 } else{ 

 printf("\nValue is found in BST\n"); 

 } 

 return 0; 

}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/2D_Array_Column_Print.c
---

#include <stdio.h>
int main(){
    int a[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] : ",i,j);
            scanf(" %d", &a[i][j]);+
        }
    }

    printf("\n");
    printf("The Array is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/2D_Array_Input_Output.c
---

#include <stdio.h>
int main(){
    int a[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] : ",i,j);
            scanf(" %d", &a[i][j]);
        }
    }

    printf("\n");
    printf("The Array is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/2D_Array_Row_Print.c
---

#include <stdio.h>
int main(){
    int a[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] : ",i,j);
            scanf(" %d", &a[i][j]);
        }
    }

    printf("\n");
    printf("The Array is : \n");
    printf("\n");

    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Array_Merge.c
---

#include <stdio.h>
int main(){
    int a[5]={2,3,4,5,6};
    int b[5] = {7,8,9,10,11};
    int c[10];

    for(int i=0;i<5;i++){
        c[i]=a[i];
    }

    for(int i=5;i<10;i++){
        c[i]=b[i-5];
    }

    printf("Elements of Array a : \n");
    for(int i=0;i<5;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }


    printf("\n");


    printf("Elements of Array b : \n");
    for(int i=0;i<5;i++){
        printf("b[%d] = %d\n",i,b[i]);
    }

    printf("\n");

    printf("Elements of Array c : \n");
    for(int i=0;i<10;i++){
        printf("c[%d] = %d\n",i,c[i]);
    }


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Array_Merge_Alternative_01.c
---

#include <stdio.h>
int main(){
    int a[5]={2,3,4,5,6};
    int b[5] = {7,8,9,10,11};
    int i,n;
    int c[n];

    for(i=0;i<5;i++){
        c[n]=a[i];
        n++;
    }

    for(i=0;i<5;i++){
        c[n]=b[i];
        n++;
    }

    for(i=0;i<10;i++){
        printf("c[%d] = %d\n",i,c[i]);
    }


return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Transpose Matrix.c
---

#include <stdio.h>
int main(){
    int a[2][3], tr[3][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] : ",i,j);
            scanf(" %d", &a[i][j]);
        }
    }

    printf("\n");
    printf("The Matrix is : \n");
    printf("\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tr[i][j]=a[j][i];
        }

    }


    printf("\n");
    printf("The Transpose Matrix is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf(" %d ", tr[i][j]);
        }
        printf("\n");
    }

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Transpose_Another.c
---

#include <stdio.h>
int main(){
    int a[3][2] = {7,8,9,10,11,12}, tr[2][3];



    printf("\n");
    printf("The Matrix is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            tr[i][j]=a[j][i];
        }

    }


    printf("\n");
    printf("The Transpose Matrix is : \n");
    printf("\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", tr[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    printf("The Second Row of Transpose Matrix is : \n");
    printf("\n");

    for(int i=1;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ", tr[i][j]);
        }
        printf("\n");
    }



    printf("\n");
    printf("The First Column of Matrix is : \n");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }



return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/11-02-2025/Binary Search Repeated Number Count.c
---

#include <stdio.h>

int main(){
   int i, n, search, first, last, mid, count=0;
   printf("Enter the array element number: ");
   scanf("%d", &n);

   int arr[n];

   printf("Enter the elements of the array: ");
   for(i=0; i<n; i++){
      scanf("%d", &arr[i]);
   }

   printf("Enter the number to search: ");
   scanf("%d", &search);



   first = 0;
   last = n-1;
   count = 0;
   while(first <= last){
      mid = (first + last) / 2;

      if(search > arr[mid]){
         first = mid + 1;
      }
      else if(search == arr[mid]){
         count++;

         int left = mid - 1;
         while(left >= first && arr[left] == search) {
            count++;
            left--;
         }


         int right = mid + 1;
         while(right <= last && arr[right] == search) {
            count++;
            right++;
         }

         break;
      }
      else{
         last = mid - 1;
      }
   }

   if(count == 0){
      printf("Not found\n");
   }
   else{
      printf("%d times\n", count);
   }

   return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/11-02-2025/Binary Search.c
---

#include <stdio.h>
int main(){
   int i, n,search,first,last,mid;
   printf("Enter the array element number : ");
   scanf(" %d",&n);

   int arr[n];

   for(i=0; i<n;i++){
      scanf(" %d",&arr[i]);
   }

   printf("Enter the number to search : ");
   scanf(" %d",&search);

   first=0;
   last=n-1;
   mid = (first+last)/2;

   while(first<=last){
      if(search>arr[mid]){
         first=mid+1;
      }

      else if(search<arr[mid]){
         last=mid-1;
      }
      else{
         printf("%d found at %d",search,mid+1);
         break;
      }

      mid=(first+last)/2;
   }

   if(first>last){
      printf("Not found");
   }

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Binary_Search_and_Descending_Sorting.c
---

#include<stdio.h>
int main(){
    int a[7]={50,25,65,75,5,95,105};
    int n=7;
    int i,j;




    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                a[j] = a[j]^a[j+1];
                a[j+1] = a[j]^a[j+1];
                a[j] = a[j]^a[j+1];

            }
        }
    }

    printf("Descending sorted array : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    int first, last, mid,search;
    first = 0;
    last = n-1;
    mid = (first+last)/2;

    printf("\n");
    printf("Enter the number to search : ");
    scanf(" %d",&search);




    while(first<=last){

            if(a[mid]==search){
                printf("Found at %d",mid+1);
                break;
            }
            else if(a[mid]<search){
                last = mid-1;
            }

            else{
                first = mid+1;
            }

            mid = (first+last)/2;


    }

    if(first>last){
        printf("Not found");
    }



}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Bubble_Sort.c
---

#include <stdio.h>
int main(){
    int a[5]={25, 26, 16, 18, 15};
    int size = 5;
    int i,j;

    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(a[j]>a[j+1]){
                a[j] = a[j]^a[j+1];
                a[j+1] = a[j]^a[j+1];
                a[j] = a[j]^a[j+1];

                /*
                Alternative swap

                a[j] = a[j]+a[j+1];
                a[j+1] = a[j]-a[j+1];
                a[j] = a[j]-a[j+1];
                */

                /*
                Swap with 3rd variable

                int temp;
                temp = a[j];
                a[j] = a[j=1];
                a[j+1] = temp;
                */
            }
        }
    }

    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Insertion_Sort(Alternative).c
---

#include <stdio.h>
int main(){
   int arr[5] = {10,56,34,98,96};
   int i,j,min,n=5,key,flag;

   printf("Unsorted array is : ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   printf("\n");

   for(i=1;i<=n-1;i++){
      key = arr[i];

      for(j=i-1;j>=0;j--){
         if(arr[j]>key){
            arr[j+1]= arr[j];
            flag = 1;
         }
         else{
            break;
         }
      }

      if(flag){
         arr[j+1]=key;
      }

   }

   printf("Sorted array is : ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }



return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Insertion_Sort.c
---

#include <stdio.h>
int main(){
    int a[5]={25, 26, 16, 18, 15};
    int size = 5;
    int i,j,temp;

    for(i=1;i<size;i++){
        temp = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }

    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Selection_Sort.c
---

#include <stdio.h>
int main(){
   int arr[4] = {5,4,10,1};
   int i,j,min,n=4,temp;

   for(i=0;i<n-1;i++){
      min = i;

      for(j=i+1;j<n;j++){
         if(arr[min]>arr[j]){
            min = j;
         }
      }

      if(min!=i){
         temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
      }

   }

   printf("Sorted array is : ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }



return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-03-2025/Stack_Using_Array.c
---

#include <stdio.h>
    int top=-1,size=5;
    int arr[5];

void push(int element){
    if(top==size-1){
        printf("Stack overflow\n");
    }

    else{
        top=top+1;
        arr[top]=element;
        printf("Pushed %d\n",arr[top]);
    }

}

void pop(){
    if(top==-1){
        printf("Underflow\n");
    }

    else{
        printf("Popped %d\n",arr[top]);
        top=top-1;

    }

}

void display(){

    if(top!=-1){
        for(int i=0;i<=top;i++){
            printf("%d ",arr[i]);
        }
    }

    else{
        printf("\nStack is empty");
    }
}

int main(){

    push(5);
    push(10);
    push(15);

//    push(20);
//    push(25);
//    push(30);
//    pop();

    pop();
    pop();
    pop();

    display();

return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-03-2025/Stack_Using_Linked-List.c
---

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;


void traverseLinkedList() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void push(int num) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = head;
    head = newnode;
}


void pop() {
    if (head == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}

int main() {
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    traverseLinkedList();

    pop();
    traverseLinkedList();

    return 0;
}

---
File: Brother258-C_Practices-64f55ba/ULAB/Sem_03/Data-Structure-Lab/Class_Practices/25-02-25/Linked_List.c
---

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;

};

struct node *head = NULL;


//Inert at the Begining in the LinkedList
void insertAtBegining(int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;

}


//Traversed LinkedList

void traverseLinkedList(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}



//Insert at the end of the LinkedList

void insertAtEnd(int num){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = NULL;

    if(head==NULL){
        head = newnode;
    }
    else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}



//Search in the LinkedList

int search(int n){
    int flag =0;
    struct node *temp = head;
    while(temp != NULL){
        if(n==temp->data){
            flag=1;
            break;
        }
        temp = temp->next;
    }

    return flag;
}

int main(){
    insertAtBegining(5);
    insertAtBegining(6);
    insertAtBegining(7);
    insertAtBegining(8);
    insertAtEnd(4);
    traverseLinkedList();

    int n,flag;
    printf("Enter a number to search : ");
    scanf("%d",&n);

    flag = search(n);

    if(flag==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }


return 0;
}

