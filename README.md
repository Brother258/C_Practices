# Repository: C_Practices
URL: https://github.com/Brother258/C_Practices
Transcription Date: 2025-06-25 18:14:38 UTC


## /README.md
```markdown


```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_01.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_02.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_03.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_04.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_05.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_06.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_07.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_07_alternative.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_08.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_09.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_10.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_11.c
```c
/*
Write a program that will give a choice menu. Using switch for coding. Take two inputs
and one operator and do the calculation.
Press �+�: Add two number
Press �-�: Subtract two number
Press �*�: Multiply two number
Press �/�: Division two number
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_11_alternative_1.c
```c
/*
Write a program that will give a choice menu. Using switch for coding. Take two inputs
and one operator and do the calculation.
Press �+�: Add two number
Press �-�: Subtract two number
Press �*�: Multiply two number
Press �/�: Division two number
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_12.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_13.c
```c
/*
Write a program to input a letter and display it in opposite case, i.e., if the given letter
is in upper case, display it in lower case and vice-versa.
*/

//It's a repeated question of question 9

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_14.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_15.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_16_for_loop.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_16_while_loop.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_17.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/Question_18.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Home_Pactices/demo.txt
```txt


```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_01/demo.txt
```txt


```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_01/problem1.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_01/problem2.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_01/problem3.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_01.c
```c
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


```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_02.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_03.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Class_Problem_03_Alternative.c
```c
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


```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Practice_01.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/Array_Practice_02.c
```c
#include <stdio.h>
int main(){
    int a[] = {10,20,30,40,50,60,70,80};


        printf("%d ", sizeof(a)/sizeof(a[0]));


    printf("\n \n \n \n");

return 0;
}


```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Dec_08/demo.txt
```txt


```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/Switch_Case.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/While_Loop.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/demo.txt
```txt


```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/for_loop.c
```c
#include <stdio.h>
    int main(){
            int a;
                for(a=1; a<=5; a++){
                printf("Current count is : %d \n", a);
                }

        return 0;
}

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/for_loop_problem.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_alphabet_pattern.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_number_pattern.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_number_pattern_special1.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/print_star_pattern.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/In_Class_Practices/reverse_a_number
```
//code nai... Delete hoye gechilo vule.. Nije practice kor......

```


## /ULAB/Sem_02/Programming_Lab/Practice Problems (Week 2 to 4).pdf
```pdf
%PDF-1.7
%����
1 0 obj
<</Type/Catalog/Pages 2 0 R/Lang(en) /StructTreeRoot 31 0 R/MarkInfo<</Marked true>>/Metadata 157 0 R/ViewerPreferences 158 0 R>>
endobj
2 0 obj
<</Type/Pages/Count 2/Kids[ 3 0 R 28 0 R] >>
endobj
3 0 obj
<</Type/Page/Parent 2 0 R/Resources<</Font<</F1 5 0 R/F2 12 0 R/F3 14 0 R/F4 19 0 R/F5 21 0 R/F6 26 0 R>>/ExtGState<</GS10 10 0 R/GS11 11 0 R>>/ProcSet[/PDF/Text/ImageB/ImageC/ImageI] >>/MediaBox[ 0 0 595.32 842.04] /Contents 4 0 R/Group<</Type/Group/S/Transparency/CS/DeviceRGB>>/Tabs/S/StructParents 0>>
endobj
4 0 obj
<</Filter/FlateDecode/Length 2924>>
stream
x��\K����0�AG�@s�~ ӏ1ć`'�!���=ea'�E���=�E���#Q�b�X��c�����p>�����@?���ϟ��~�|��ǯ�q�ܮ�/�O���c�a�SD��JN�����������.o�O^��qzx���)����O��(E�����}���������O�_�~����3�BP��R�_�?���>K;��oCEh7�sh:�pI��$�_}M�5:�l���o}~�{M����+{Ƒ�	��Su�bR/���ɋ��-q��(;0�t��7�O����0��u���tw�i.#������7:cskaz�zɕ^�kiν�g�X���(�W%���gG}n<I<Lf'�\�'^_P���/�I�7�ф�4�U��$�v�����O��5�~>�_ҽ�23"aڨ���6&J솃�i�ORG-�T�E���B�6)��N�p�|}�旚4]�j�.���̶�dҁ` ?��V���hQ�ؤaj����0��p������>�,��%W ����H��9\�!^}��Tff����X���Lэi�wOղ�\8"�_adgI��I7�Ӿ�B�7�$s�-���1����e���$�}P�,I�ZO�cT0�#��o�J��$���k_e����K߉/�!�6��q���e��r���B[����ݧ���3Dw���ng�N�g�i)(�� �V����,E|��$B�:~�P�j�H�����#L��D��b�X�4h�V�u��K~!�5�/��:�3�~�^;�2�h���{���m���A��(�J�]zeUK�	��4��_�wfq�c�Y��2�d��[~�v��5�gPLX\*i�w�r½��YHn�	o�̷���4�Pm�;�l�bj/���h�iKQ[�B�~0�79��sG��������&�ո�c8���4���䦅�X����NM!$)S6����7���ӐWN$����{C������4�暸���F�i��^рX�ҀUBVs+�O��x'������B]'z>816M�0ybd�+n��͂V��k����˔�'/\���}�||t�z#���&m�[��$�&���\w>��8,�@{�LpVT`f_�w�)T/�������lϕ9Ǔa�lӱ�S�Jf�W�ф�x-hXm2ڷ��Z������,=�+��ݤ�Y1�����`��sş'��Q��ĳ&F\LΩf�mcՓe�$?���_T��ѵY�p!屷Z���B��t)`��N��̒���?X�������X�kX�߉m�(娑L�R�*�On(E/e�X�:�K՗*>��P"C~��æVI���$_`0����o��O����9D�����d�A�D%/��^���@Em�[���BiI�R�LLۃ�LLT���鷀�}j�rP�]�AWjlqw��HI���rPL��rPLTt���q:3X>����QX�R�V*B�Z� �-�c=JMZ��J��r9� ��t�eI�X�t�5�L�]�3����c� �ȉ$�%�8%d�&(/ӂ|�|I|�^@�x!�6d�����啠�ޗe�B��*�DKĿBJ
`�4H��f2F#=Sl�-MYT�%�Yt�6���:�(O91������Zrv��~��'Kec����{�� ���G��b��ݒ.6��%cr����a��OÄ85z����[2۴Lo�'�!J��jS��Q��Zʥ��}1��� 쇉�Kx��}y���k������n�;4#��z��=L���Z ��.��3*�
j��s�[���l�B)1˹e6���k-T�R� T� ����Y�մ"���ڴ�����/+�SYK��igKvM�G��lTeRkA��&�uA-�}k1������O���w/%s�#�nr_�	R�EC��L����
�d�_>�4�j�������-{v�M�x�!��4���I9Pbe9ɰ�~��P03��ڋ�U��1�󦸛�-.��7������+���*�58:��ݴX�؍nb &����?3Ln�|Vnɋ�WgR�9�2*s����hy�p<T��fo��`sS탰sS^(�a�J��8��sn��M�c����a�	�v#"�A��1��A��i�wSVс���0e�b��/���q;���Nƥ��&k[�w|g>���/�*Xʁ�to��&Pa�y�RLĄ������+8S��>�a2j6]��/�i���N��u{U��X�w[*#�<������M���T��}6����L���\��gv@1�\'��@�
�fAP��j(�(e�K&j�=�fs7�����/V�cg_�U���n!������8��DaA�����P��3l�{��\�34"�����T�qZ(l�6Z�,i��\]�A�ޤ5�&�ը�����)~|\�#v��pyS��pyS��WD��(���m��{�-O���-�����U��J����{{����A�FS�N[#�b����m��;o�u�k��� ��&���D�z ��9oW\�o��\Ǽ7Ħ�9�dcX�:E��l��|���,��v��^_q�02���{#csEA.<{��.��f�4:Gn!�pt�I l���#��p�ʚ����R�2�ΰgSm��n��턗�<E�+�
��ᐞ���j`q�5p�)��R83�n�V�uH%д��4k�������.��u��b�ܽ��i��Fw@���sV�q���_53�tu2-� �C�ڽ\����ؽ��ఄ`=�d�\p˾�X�֘��ܺ�e�	'��9���hۊ��2x/6��47E����y�n����Z����%�<,�h77�+�4��!�a���q��d�[�#W�[Jn�CJ���BE0f:��q�r)/L��|v7`ð�bQ��7$��o2�!��J9��3:�Me��;��z� ��p�P����<4
endstream
endobj
5 0 obj
<</Type/Font/Subtype/Type0/BaseFont/TimesNewRomanPS-BoldMT/Encoding/Identity-H/DescendantFonts 6 0 R/ToUnicode 145 0 R>>
endobj
6 0 obj
[ 7 0 R] 
endobj
7 0 obj
<</BaseFont/TimesNewRomanPS-BoldMT/Subtype/CIDFontType2/Type/Font/CIDToGIDMap/Identity/DW 1000/CIDSystemInfo 8 0 R/FontDescriptor 9 0 R/W 147 0 R>>
endobj
8 0 obj
<</Ordering(Identity) /Registry(Adobe) /Supplement 0>>
endobj
9 0 obj
<</Type/FontDescriptor/FontName/TimesNewRomanPS-BoldMT/Flags 32/ItalicAngle 0/Ascent 891/Descent -216/CapHeight 677/AvgWidth 427/MaxWidth 2558/FontWeight 700/XHeight 250/Leading 42/StemV 42/FontBBox[ -558 -216 2000 677] /FontFile2 146 0 R>>
endobj
10 0 obj
<</Type/ExtGState/BM/Normal/ca 1>>
endobj
11 0 obj
<</Type/ExtGState/BM/Normal/CA 1>>
endobj
12 0 obj
<</Type/Font/Subtype/TrueType/Name/F2/BaseFont/TimesNewRomanPS-BoldMT/Encoding/WinAnsiEncoding/FontDescriptor 13 0 R/FirstChar 32/LastChar 32/Widths 148 0 R>>
endobj
13 0 obj
<</Type/FontDescriptor/FontName/TimesNewRomanPS-BoldMT/Flags 32/ItalicAngle 0/Ascent 891/Descent -216/CapHeight 677/AvgWidth 427/MaxWidth 2558/FontWeight 700/XHeight 250/Leading 42/StemV 42/FontBBox[ -558 -216 2000 677] >>
endobj
14 0 obj
<</Type/Font/Subtype/Type0/BaseFont/TimesNewRomanPSMT/Encoding/Identity-H/DescendantFonts 15 0 R/ToUnicode 149 0 R>>
endobj
15 0 obj
[ 16 0 R] 
endobj
16 0 obj
<</BaseFont/TimesNewRomanPSMT/Subtype/CIDFontType2/Type/Font/CIDToGIDMap/Identity/DW 1000/CIDSystemInfo 17 0 R/FontDescriptor 18 0 R/W 151 0 R>>
endobj
17 0 obj
<</Ordering(Identity) /Registry(Adobe) /Supplement 0>>
endobj
18 0 obj
<</Type/FontDescriptor/FontName/TimesNewRomanPSMT/Flags 32/ItalicAngle 0/Ascent 891/Descent -216/CapHeight 693/AvgWidth 401/MaxWidth 2614/FontWeight 400/XHeight 250/Leading 42/StemV 40/FontBBox[ -568 -216 2046 693] /FontFile2 150 0 R>>
endobj
19 0 obj
<</Type/Font/Subtype/TrueType/Name/F4/BaseFont/ArialMT/Encoding/WinAnsiEncoding/FontDescriptor 20 0 R/FirstChar 32/LastChar 32/Widths 153 0 R>>
endobj
20 0 obj
<</Type/FontDescriptor/FontName/ArialMT/Flags 32/ItalicAngle 0/Ascent 905/Descent -210/CapHeight 728/AvgWidth 441/MaxWidth 2665/FontWeight 400/XHeight 250/Leading 33/StemV 44/FontBBox[ -665 -210 2000 728] >>
endobj
21 0 obj
<</Type/Font/Subtype/Type0/BaseFont/BCDEEE+CambriaMath/Encoding/Identity-H/DescendantFonts 22 0 R/ToUnicode 154 0 R>>
endobj
22 0 obj
[ 23 0 R] 
endobj
23 0 obj
<</BaseFont/BCDEEE+CambriaMath/Subtype/CIDFontType2/Type/Font/CIDToGIDMap/Identity/DW 1000/CIDSystemInfo 24 0 R/FontDescriptor 25 0 R/W 156 0 R>>
endobj
24 0 obj
<</Ordering(Identity) /Registry(Adobe) /Supplement 0>>
endobj
25 0 obj
<</Type/FontDescriptor/FontName/BCDEEE+CambriaMath/Flags 32/ItalicAngle 0/Ascent 779/Descent -222/CapHeight 778/AvgWidth 615/MaxWidth 4342/FontWeight 400/XHeight 250/StemV 61/FontBBox[ -1475 -222 2868 778] /FontFile2 155 0 R>>
endobj
26 0 obj
<</Type/Font/Subtype/TrueType/Name/F6/BaseFont/TimesNewRomanPSMT/Encoding/WinAnsiEncoding/FontDescriptor 27 0 R/FirstChar 32/LastChar 32/Widths 152 0 R>>
endobj
27 0 obj
<</Type/FontDescriptor/FontName/TimesNewRomanPSMT/Flags 32/ItalicAngle 0/Ascent 891/Descent -216/CapHeight 693/AvgWidth 401/MaxWidth 2614/FontWeight 400/XHeight 250/Leading 42/StemV 40/FontBBox[ -568 -216 2046 693] >>
endobj
28 0 obj
<</Type/Page/Parent 2 0 R/Resources<</Font<</F3 14 0 R/F4 19 0 R/F6 26 0 R/F1 5 0 R>>/ExtGState<</GS10 10 0 R/GS11 11 0 R>>/ProcSet[/PDF/Text/ImageB/ImageC/ImageI] >>/MediaBox[ 0 0 595.32 842.04] /Contents 29 0 R/Group<</Type/Group/S/Transparency/CS/DeviceRGB>>/Tabs/S/StructParents 1>>
endobj
29 0 obj
<</Filter/FlateDecode/Length 2881>>
stream
x��ˎ���>����v���M
h4Э�1�c7����gOY���@�fI��pgI�{��nI�X�w{z���?}���w߯~�Ȼ�������ϟN{���2ݞ��?�d&��1�Nd���9��`3�~|����O����^�D��៏n(���ط���4�1Ӈ�A߽�d��?;��1\�x���ÏgB�����?�y|x�����0=�N�a�aq���Gأ��f�v�՗R�c�!�,%��"������Om?ͅ�[�_(��B\N\K�Kf�]��ˉ�q~&⇚s�̍��b�0���aB��]N���y�q{ �!!���r�ä
P�pP� �@��+A٢f������G�����u$�(_7�s���b.�SO�~�MeT"/I�L�J&R�)d�̍e(��!~-�?m�r33V��[�g �P��EG��@yͬ� -#�d$"�퉺F ���Zk��(��5�cN����Fڬ6�������%3�{�O��ކ�a���{��ij�iB��`��Wg5%�FZ�g�*�Dom��� U�FY �l��{�����RL�7�'��5*-�޼�M���I�u�K��514�fRd�����.<bK�ժ��:�*�׌nRh�=���lr-�)L�mp�X������dx���)�7��mj�,J��v�Ԕ6]�$M��:r�$�ı�u��V"�����s���D�����
7g{��D�v�P�������w[t���I��X�=5�E��I���^ۨ��
y_v0��p�z5��X�ɏj��]��F�U�琊C�N+�*^t���$�j
y�K自�K�'�~������Z�-��޸k�Cu�?Y�=ƭp>Zݕ�܎�'3%�ᩙ/8���A/�R�/
��X_rgǵ�5F��F8)gQ5p��)o3rz���DzPEp��è���[@웮�
1$.��������M��s ���'������&.,�g��wtͣr�/���ɑ���5+Q�_P�<��N��2LiC��-�{4�X�FnU|7}D�럁j��G�;.f����W�̟&p)��=!A�)E��3��X\.0=�.�ʩH	\!J����%°��� ���gY;k^.����E󚑚�
����m�w�y��Ҽ5�5/'q�H&�>�`0�};f�>pHgeg> ����>�G(p�Gq�D�'[&�=N�M5�G���wN�� *�r�&7?ʚ�G�#��D��닦eI.1��gF\��
��e^��ˈ�u����UfŏN�m�f%lH2��y9	d 4����&��L��s-[xY�Fd�{��8��N��H�Ի�vj�|����,�)�BM���гߝ��E�<�I�L��%N��ºdWH��Е�rd�Mt�Q�C�.�l�[��Y���N���(�I
�������&�8���0p�s�#�j����]�/��(�-Ȫ�XmH�"��3}��?�=����B�*�ӡ)���)��_.3������G��Jf�&�wu����M�@r���F�W�5���i3z�(��,��
�JG�K��x�v,�a1T6��.�z��@��1G���g�!<z��%�hg��v܂���==�B(��rZU�۸��-�o����d�a��hw� ���K�_J��9��:�&��
¸�<�����e#s�ue$Pr����d�*@��&5�?摍ib��Ļ|E�����ux#�����]G��ק։�������*/3շ<�H~`�h��ڰ:v��(	f n��"#��G1=���i����g�;@�F�Fܤ��;�`��DԤ�FfVQ��*2ը�F�V��Rd9�����sc���F͌���茞4���ם��{�I�L�{�HA�5�#���u��KӑR����<��Wr�3ߕ^�*�C�D�]�p��F�����;c�?#�0{�m0۽���
F����sc�&�U�&�Z)*)A��}#���s�Ѓ���QM�A��G+��@$��8��Q&^��Tm������jK}�(6eH�V�s�/Jn��A��w��}@�5�둧Q83E��i��C��$}]�p�����Z���я��6B}�G�Sذ;�h'vb��dL�zM�Knۘ�l��8�S̮�ğ�#��!��t�F����Z������b���{W��z���
�5K���<:V���Qz�Xu}ܓ���a9D���%?���븩����z�����|��^�^5#���9Gؤ�Gdb��U�K��r�)*�:���4J���Ġ��E�rZp����}���o1�~ٸ�4��m�j�|r�2?4JI��`�RZ f�������;�a��v=O�dҀ�g*B/|�|��y�]6)	��0�S����Ho�(6/"
�3s1�"#��.	$��ё�2�����'x�`$9���:�V�$���� ]�����j�gƸU�BM��G!k`��2���@��<���G�L��q�ko����)=
�(�02������EP�5���rgD�F�.u�M\3��J���+��?B�F�W��%Qr����l� ���m\.8C���Vz�T�]qo?��}����\gԱ��ky�ԛzWH�i��n�k��y#t�2��Y$���}q���?����Iu��nzԫ0#J�2�/0������<��B�y��������c]�:�&��QCD��j4Y��i�E{���£����h��5q���z֨���_#k,uG�\9F�\�ٚr|oq��/����d�`���>����HS�v?����K\�y�8Mj���fpkQ<�T��cA�j�t}Un��(7��݌[o���{Q���-#�Y������A�
���Ԁ��'��{�M����}[LB��?�K_���*{�4�fU��w��
endstream
endobj
30 0 obj
<</Author(Maneesha Saha) /Creator(�� M i c r o s o f t �   W o r d   2 0 1 6) /CreationDate(D:20241103022247+06'00') /ModDate(D:20241103022247+06'00') /Producer(�� M i c r o s o f t �   W o r d   2 0 1 6) >>
endobj
38 0 obj
<</Type/ObjStm/N 103/First 845/Filter/FlateDecode/Length 1586>>
stream
x��Y�n;}G���l�-!$����H���9mE���J��g��C�`��yH<���彶/��dY&��{C��m$I)MƐ
��%�'��yOTL ���xr��*r>���^x��@A����E�����(=�3Č&�E�a�(�{8�"��vb�ذ!@���WpX��a�zG.;�{�}o�îG`7��P���/��8�N�Q��hM�>x
��s0b�P�KJ���C	�QUV%:Q�r �TY/}%�@^D}���Ly�E?"�p]TQ!A�Q�{#Oz��X�G�t��2>�k\�+$�1�c��8�h�᫖bt�.�=g�g&�����0̀�x��p���(Y��bt��`�"��(�!RI4�����K��4��%u 7�?%�e�Z�4;Ώ����AXA����a�q����b��p�A���ǅ���K�+i�aG�4�Ԡߌ�Y����Z�u�n��G�����e,J<��0�^"�ٳ�\�=}�.�����Cw�Y?\n^����/�������y����'�÷���A���~�`���dػ4���E��{�����d������!�t�-�G�M�j���0?9
v�U�Q�����B8K��]��#��)�9e�T�HG�jm�����qY�Ә��n�Z��#�JkQ�'iu#�2kC�S5Z];��)*겁)���Z��xDUi-jÅIZ�Ⱥ,n��5�hM��N�*J��)ʲ���
UT�o�oUT�o&pUT����!e�p\���gfp5C���f�T��zh�f��.�cl�<7�BUUy�U���N�;l�4������g�k���v�4P5w�,wCr7Vݕ��1��:���;�a���ǲ���ܘ�CVs9�s�d�m���\�SU�X��[���O�/O�eE7@e9��;TVbT�QT�����=p3�pY�͟�)NyF#�2�F�����k�,���!{=�oT#ߨr����˔r�6�V9娉��)G�W���m�s�Q��#�JG-��֒�d�sNS���^�dֵd�շ��m�l9��bF�Pe��v<dD�"��Rݎ��J��vU�G~������5{9�.=gN���FN�u�fN�u�ƚ���b�9����� {9��9s�.+�OP�Z]>��M;*.��ʗ��HS�I�L>�J��6I5�[��)\�q:u��c�p��@�l�E��ԂO5ӾT>^�E�R͐j�T3��y��].�������L�/��6����>�)���}fC��S�활�?_)s�����0|Z�6ݧ���q����k0/o)��q��������k�~�M*�~[��f���������3�~[��.��M�vX\�t-�������r��Y��������2߯7��-p1���Z��Z}�y��f6������\�v�_�������nu������jة��A�����{s{��FWn7wC�����{i����f��X,3g�?������w��!8[�?���?Ѽ�A��{�Շ��{�z��'���w�5�{'-���W�N���������í���g�~�ָ����u����p-Q���<���s�ߺ|���5t�
endstream
endobj
40 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
48 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
55 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
62 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
69 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
78 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
89 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
113 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
132 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
139 0 obj
<</O/List/ListNumbering/Decimal>>
endobj
145 0 obj
<</Filter/FlateDecode/Length 309>>
stream
x�}RMk�0��W��=,j�mDX\���?@���b<��_�-���73opչR���͌�K;���i��B/�R*$��7M'����P�n$YF�w7��Y��$�H�j�z��,j��Y�o@Y�<�:g����f �l_	7�v�;�/�c�@�ȇᣀI7L�z Y�NN�ҝ��w�ثڎ5ٱc�!�EgD�	+%Gt�4����0f^䝒rc�yt�0> -��7M��ه�Ɣݛ&O��b���>��fW��$�.P����7|d7{����~-��Ƹ��n`Ak5R����Q����
k�
endstream
endobj
146 0 obj
<</Filter/FlateDecode/Length 26544/Length1 70672>>
stream
x��}xTչ������d2;��d&��'�!��I�d�)�CI���G�����R5jMK��VP�Q�)��DS�j=*�U/Dŷn�`�����^���������;�o��Z����׿�{�# �C"@��Y~�ڞe �s�\��}�.��L��V��W}���\`�������� �-�W]�tM��S��:� ��u,�*�y�
��3�d���tf�5�nxg[�ӯ(eK�]��{l�+ [����k:n�v.H���d���Y���m�u �<��[�q͢��ߍ���`���׮\΄}���w�X�M�ڳ.��������w���:��1������?�zh�ww����mM�=��H=���;�5�pN3
��<��!(>"����]�ZƖ��AF�]V��ltR�Qjd��2a�Ãp�X���=;P+>Yo��i E7٣ 	��X�	�T�SHҗ�4nM��S�CXA�O���[��`��i�ݑ�������l����=� 󰬏�ӐOG>�B=-��d��)��vX�R�c4��F�s�ӋyU�Q����ȹ�����(D!
Q�B��������+�����(D!
�H �mD!�oF!
Q�B��(D!
Q�B��(D!
Q�B��(D������Q��?�-�h��(D!
�]����B9�zH�`��R�>����lH9+s�n��`2;�Zw@"ۄ���%���ܞ�ׅc�(D!
Q�B����(�������B��l�t&�(	�0��`,�n���q��zE6�Yo�_$@ۈ�t��@���⯭�}ϳ �}��~�֗O~<��_�?�?�S���O\d�]t�Ai���\�B��^�_W�p	���� ӛf̜�]>��o�����n�'�F������\6[���4qBEy����"����\_���1ެLO�[��]iNG�=%9)1�/Z�,���Ѡ�	�ȭ�4��Ao{P�z&O��iOft\���1��b��ܮ��[*h��W�J�R9gIDy"L�˕�=r��:�"sg4�|w��Ekr@��4ق�ۍ�z{W�$�r}�auWo}{V�o����.��˅�3�f��)��~�RI4���W�S0ZЩ��SWL��q�,��ca�iFs}���n������A���>�j�f��ڠAkF^�{w�����w�D����]�Y�1�9�:Zx�>l�.�����|+��6�v���z���e����Mn��|���iKցeiVC{o6}�q���э-�A���yOx�"�[���9�K���S���]ҎC����5n��Pv���Q/��n���UNOKG]Z"��\3��ȩk�r���H`�㬣B��Ba�9�&i�\j�y.��{䙂"(/�ѓf����Eeл��Z�
.�Y4ն��<����D��{px���8�c4G�%�.�yrn�������99|�jqL��J-]���:D�z�E��0�-~����!�c"�3�9��a�S�����\3xV�t���՜+�������ʓ�F��?V19���"H���E}�,O㌹�r}o�hlg_������F�`Bm3s�Q�:���I9��1O4��,���&����R�!rCPl��-1n��X(>�Ki�|�Q7����.J_�^l/C�/m�=��7�"]�@�������#����EO�.6�����o?;����;����Z�]�g+��~�}F�Bn�5�y��{����UJhm{MK&��wɸ�j����L��y	Nt�5{�.�G�
Z��^"����X��<1ҐWkH�wAH�h����#y=��Qk#jD������� �5jg7_8�E֒ձ0[H�[����$|���r�%�!!v 6�Ϲ���	��lY�V��z)X�V!�!2�P�zC�B�"Eؒ�]�<���BQxP����<{ &��ù������"��$����]<�W��4u���Dr��#�j"ٕ��ERu&�eD�q�	D=z�}�aDAKq���� nC��Zm�"k�SQ#j}1R"�����U��F���b���[B�
K�]X	��<e�|���c��Bu���≼ƀ�DMvjPkjF�Ҳ�0���?R# G�x;!�)5���?�"�	+!<���5vf���W�E�hB�d�0�H�Zv�#R4ߡ����1q~폃�؃�`R��Dn| !�W��j���Q�#h�7U'��џ߲߁$�!�t��"ǉ�^a��E�s��U��`{����l�E�cl-��?�ցS3��i��jv��:�=�n�LV��P�|)�Z�K����G�Հ����J��{���jHD��h�"Y��eP��{0Y�}ձ,��aX$���V�*�w*V�����@2������)v��$�a�hf�x-��#8c8����M�>C؟0��Z�z�[��j/�
)�#�>�?rƎ�t���1�c��1����Q3�6�0t���q+�V�F��҄�l�.�vFB܃�#��n��=�I�%hf7�^������?�W��{؏���؝�����Xݍ����k��e=�f-�_�$�v�V8<�_��?��"�� �qD�fcfC"C���8�ߺ���
OQ㊤�l2v}���jR���%��`U���� y����8A�H3��F�?��4u����P�^^p�@Y��p���b�*y"�jB�&4��ȼ������i�>��e�F�$�HL�K8O+��ioC�q���Ќ�uR��@���_��Z��Ў�1�(���܏c��!-��J���Fd8��p�6��A|qQ���#R�/�ڑ�!R�� �"R��q� �	D�gy�NZ"�A"Ap�rя\�٘g� ����
�֓�t=[/�׭�����\����|N���o7u�zL�Ф��LL4�&
���"d�M_Q�n����fߧ�3��ձ$� Gd����1%*����G*�W���#����������yG���1%����o#ג��"H��T��Dhcײ��&H��U�\����3+4+�&3Ͳ�������A��.����O�uM�v}��Gߧߦ�K�C�A�'�k�{�mH��z��i��i���}Z�i��V�6i�i!�=X׻h׃�����i!O#zpw�#�u#�C���JZFa��I�L9�B&9�Ide�`�`&����4/���4/a�CZۇ�^�=��A�� ������/�i�&)H�4Ƀ��K���o�N�`�mH�"AdP��
�Z-%q� R�n��>ݢzq�D�a�����T���ڊ���G���X�S�A�Y�㶛�IVQt��OQ��f؁Ha:ҭ�T��J�vh6�s� �!M�F��\�6M�v���݂�f��t-��U�����n�7�Bt���&��3j��l �TΪ(��[�1��J�[5�S��ѨU1{,�X~��<��T��K!�Oh�s�.Q�2-�eZ^ɴ<�iy$Ӳ�|�p+������ay.��T�eS�e^�eF�ej�*d�P��J��))���l�@���lyM�<,[ZdK����Ox�Zȃ�O�%�[�b��ز�bl��L{(%W��Ũ9�R��4F�j Y��F�T3�9��
d	j`�Tm�Vҏ�Ƒ~#��j�T�#̨�\�L���K!2��x�}�v��}�v�#;�v#;����ߡ����j�CX=��y��S�ҧ���@Z?i�<�$���{A~���s�I5'�jN&��#�Q5GB��ڙ��!�s����G�mQ����6C�V�����J5�D�r5�k�VȮU%ȮV+�D�X�<ʋ^E�	�n�	9��jg��F;�
ٚz�h5_�xHx%�R?ڑ:R��}���k�(jN!�U�9^d�"���v�����c2^�~#W:��X>>ϓLt�W�Qs�F#I��,]��G��%ѩ��VmP�9��p+Q͑��:�c�K����`��U������2U�&�N���|��@o������)A�Õ(*f�����{���9h�8����K��k�P�i �.��c���ҎN��_y��*=��Ko��*ݟ������?A��xX�Ɯ5����u8V��V渤��+�%ټ�iq�L�;r�Y�y�ԑ�Ij/�<�2�MiV�և�N�GS*5��ΙRz��*�@&���c���=<Fx[�xS�l��Ob҃�B�7�5�3�7�6���3Ɛep��F�Q4�c�1F�Qo�Ԉ�z41R|�3l�^�L/p*h�H9�_l�� 1R|�
&�F�8�&8��2�g�|�Ac�������4@�|9xj�'Db��[��!A[#4ή��q�ގ﮳�C$�Klt��X���܍w;9o�xwK$���W�*��꾇����:�y��|�\�{g5�r��\�Z�c���]t)]R_��^�YK�.�E���������&hfPI�F3p�ftTr3̟w�������ʈ�t�ύp�L׌�F�j/4bw�Zͨ�ݩ=i0����L�r�stK53;7��z��N/7��{Ѡ����3Ϋ�#������C��חx#�f�Wk�K�����E5G!20i��f����S��=x��.{�g�,�/[=����>A����=����<ur����Q7s�$O]?4��n�oVթ��I������iʖ_����*��=�m������-��r����Z��Z�ۚ�L��j�YC����P�R;/��9WK���R�,vWjKg�۾ι[ �$�}-�XOMЂ�Uy�y�\�K����g�Q�}��s7yrT%bv��V���៕�V]��1^�2k{D��W���`J�4@K�9��rG�������Ela����?��/�s�E~�߽}-+���4������.���e߬O.z'�q�d�j���C�-o������+TU������>px�0�;�7��Əz��j!����:���x��h����A�Q��>���b��H�Vԇ����VF��iE"�+��aT��W]���!���c�}>ݏ@�M�0��� ��"~6ri���j��,	���/�k���,�/{����"�¿�ݱ��C3�����C#�0tx�f�ͱ� 	����v�8��4�<��Ãx7��/���c�F.	��d1<���$
���dr�̀��s�����8<����	�V�m�� a����a-M0����y�6�K���X��~x��Qr;t�v(����H�f7���2�!ӳ���@D���֯�Oh>H��H�����>��Vqx����	v�l�q2܁}�Mn$;X\x;�f<,��8�n �ԭ;�;^6�_1z���װ����lv�HUx��F�A=�t+�~��{	����������0��-c�`�O�0��?�l����U�f��̆����*X��K���Kr�}�^O��+�N���-������n���_o��� �W	�?�ul@�����ota/n��`�$:b"�$�Ȥ��Ǟ�H��E=���g;tw�ׄ�7ΕVX�%��-�����!|	�ā%�di"w����t?����{E�WxZxI8��׽4���F��S|Z��b�C���w	#N��5M"�bMm���D���ȣ�q���J���q�j�wџ�=�7t?=�\,�ձ���-�+|g�8�yq�x�����}���QH�_�8����}�~�1ބwp�ў�p��;��ٔ�eCr�wsH3����Md;y�|@���h,��'���K�<z3���f1�ê��>�;���F���iݳ����,��8sxF��;�@���g^��b��9w)��BX��
X�c��b�ę�T���������˟�q$��30B(������^�#S����,±�<7����~| ��1�o�ߑߓ#�#r���h���`�����6��n�w�g�y����G?��2��3��a��*v;�eA��7��������«����ɺ)�6�ݝ��u��^ҽ�;��7�ч��b��&���a��a��}C�8�S ����5��\!�>�!��t�W�S���c��E�Ku���?���}�~Io�4�$��ހ�����$�g�*u�1��:���m'�l��Qxw�5����5�h�%�F\FR�O��p��_׋1m�����|}n�C���|��Ed<z���o��d��N�w�� |C��
���*����W��"3¯ұ�/q�@6�{�[����i� ��p��!�DF'��;_:<���S�5����+�$�b�0W�1/8�ۑ:�*v9E�q8S��{:ߍq��*�����	��h+�Kx�d`���=��%A{���0{M��'0Ħb�?��)�cM��b���dd;ְʠ��'s�5�!=|z�8�EJx^x��E烷�T�/��e�(ޫ3���3�߃��NY�x��I��l֭�����=�{A��~܀����k<5d� c�|�s�WO.��j�b2�aKi���ݸf��]�1��#�k������!o�	"�[�pWN
��ؾ�i��p�W���;�B0g!�C��[G��*l�����>;�>�������%�U�r������Rh�w��r<)���1d��Z�kt;�kǹ.(�}D(��L���l/I��0g�l<�'�����q��t(�k{��&�cx���dH�I��e���x��+��d���d'�n<��p��t�����J��!fT@'�cc�H5�u�({�T�	�r���S�L�&~=1pf"T�,�F2�����BB�8-��ӊ�Y���gG�c��"����� v�A7A:�ɀ�D �RG��s_��t�����M�� %U*���>��Lb��A��X)�ƆH�bzQO���C��>��50�z��V�+������Eu��BU��'U�
IC]Cݔ:����-).-�''%zƹޓ����\Ø��y�Nn���eԶ��ֶ]Iv�x�ݗ/\�6e��wW���V�iڵzo��سX�um��m����t�,q)�@���8"k���D���ڔ�)4�ጹM���8��4�Tk��U^_^N�m���}�|z�y�/N���J�3�a�����[*/itзɆ���9W��]9���4V4_9���O�i��q���Tp�-�X?�Slf+�b�}1�$��Ϲ�5���a�	� d	������zĺ�������$���#�|�� �sz��U�W�s+�Ӫbd��p�.[F�Sv��Yv�gxl����ꔜ�Yi��s�����!�1JLw�`�І�Ƥ�n�tb��ܤ�=覅n����q1���{Һ|�{��o+��U�M��*+�]R�_:��$����xJ�I��ޠO�OLN.���Lț���3'ז���p�jN�-���J�˰w����ǌʧoE9�SC���LWV��f[�9���oL��e��MeO����J+%���i׻~������z����[Wlw�P�lR��(f�Y:�͚`M�kS��Ta��+\ތ�HȤ
WV��@v�dxB�ەZp�� ;͙�����R�<Wz�˕�ԕ�$�KK(��,W�-�0��):��2f�����e<����b�!L�(�����t)� ����.(��ȧ����Bd��c"�}�i_�j!ǝ÷�w�U�~*��;�N�t���o���~ ��ܮ	g���(���h]���r!O�Ç_|b
f������ �4;wbf�՜\W�{fbD>�g��:˜֑¸�i�f�J�!o�u8�n���7�]6��Ox�t��UV���W��W��⫫)����	H'O+E]bW��1mS9�t}j3���j�Mq����$�I�vĤ��b�S8I�  ��r�(7��/DAϭ'��Ƚt�~�����,���c_սjz�u��X�`0�M����Ml�%�e�L�L�Aw}���ծ��;�;]�'��������\b0�̩Ҳfm�j��Tp���
#�Q W�T��$�>o�&��Z�ܩX/2��m���[Fw��Yk�gk�(I����&zMY:o����z�Ŗ�qrf�$#J)z��c㲈%�"%	1�Y���|�!|"�h�a�y�Z;����V���V̶rj���"�P�35�<6�
���,�&L�[���t9��hy+�ǋ���x�E��܊S��������R�$��}��l��k�}�lw����m���y��tm�#�F~72����?�L,$�l��#��<��*�BR?�<�2>?�����	\��w���[.��V��˧{�}�S)���d9�4 ��ː�Ad�>�c����̷A~Z�>�Fz��&����=�[�Yro��x�V"�&��b,m�m���Y���:�ƫ�OqmAj�0�C��Mm+��8,c4�����:Y��It�SRS�ޓ�. �IFRf�S� #�!�ٰZq40��E\v���5W���	�m<Ʋ�����c����L�����k��I�����O��ko���9r�����,O�2�ͥ��|���f'������Ϗ%�!��+���)���9c�w3}1Y>}�ݚ�˳�ı��/3�4��w��;�ޑ���P����r̥.�W�)J̵�J����p?�+�$Y"R�ܠ4����׍_$��Y�^��jM3�Y����c�>f~���U�k5]�8�)I2M'g��XG��W�Ro��J��1A1[�'X���1�i\~jE�������ø�|����j�S�[�k�9�_�~=�J�ᯇ#�&�����RdffV�5��[b^l]k^c��؍��Yi�c~������[�"%�$��#��O��1�$%
xv���O|Q��y��S�v����g/�Ǻ>����$�R�ԱY3G�yCYqy�䨰ee�~����E]��zdαgk*ns:�-��G&>���K�<����uu�𩓎����}�vF���W�<���Q1�Z���ż����l���t����rA���ĺ�;K6(a����h,�YN�������^�;�>�w���<S���pi¥)SJ�{��Fu����4=g$��Ҍ��[�%Yrl���q^�I�'ᑐ %�y5	��RJ�B����C)m)R���C�(]	�����ޜ���iJ��������I����w���Y������ў�����������ho���!|��ULxG�C�/�X6����˼��F|{<O�/�|�貰ށ����>���<T;y�V_�����YS�!�oH����W�U���ʢ����*W��<Wy���ʩ�u��+�ए)���2������YŶ�٭�g؇�����?e�V6����bi�=%������>��4X,R~%��r~ɿֿ����)��~�����?��~����~J2QV�Aj(6�=��\RJR�w2����5���y�!
�̼�2��o)�ҵ��R��uQ]_�G��Jf S;¡<j�[��&�"'��!�Q%�b0�3����e�˷��p8�������w���Ӄ$�������4�~��I^S葼���Ж��;h0�G4}>h�G�\�z��֙a����F,iM���SD��Y�8�n�������."�Lo������"���y �|RǫI��C{�B�Sæ�ȚZ|ٝv2ڬJ5����r7��Lw.N�k�-9v�m{}�`�Ħ�zVY���c�B�lZ|���ZseK6��{�|�<ga�og���������ϟ��~�6wɌ�F9D,!��!�x�¹zY��}��	�7��SBr�V�$��V���VB|�SЕ%���YU��;���,U�*ف�Pv_v�H֔u8�T �t)<.�
?���y#���<opx6��ğ9r �����>�F�gď�"�ϫS��Ԭ>5{���ß$�-O;x�{����I�ݘL�B�0 s*�L�i�DdwH�e&��A�(�+�ϓq������8d��&��_1>�>k`oao3S��Q˨4��c| ���a%v����WM��k�1#�\U��S7ܹ��u[��\xC�޸ɒ��[���ʼ�����ƅ[��?��_v�f�7|y�;����׍���f>q⍁�$Z��9I��&�?(���f��������&~��2YX�@儋��+��7XF��O��ƨ��!�����jRI�ю�8::2�O`ʀ��1��������SVS��`�ؑ'����@M͠Cfg��x�G�J���Ka*�d����P&_7a���m��)�h�K�Q��<��
�����N�����0����n#�VM�:p�.��Ē-UU9��bO^bP3hE����o�ذ��{�>��}�����R��t^˂��?�oڂ�/>�S��j�鿼T=|�����V���[Q2l�A�W�ߴ?�5�\-,y��I3�D_�98M��A�#��Y6���Z�J��%�Lp*�X"u�y?�ϩt �8�S�1���fed8 FFFE ~ǋ�Pq_�*J��b/��:ie㼁4����r���`C���SZb
!���?���iP3�)���svw")')ƕʤ�i�q$��T���%��4Ns����Jr����C���Pn�H�r��n���C�m��}w�?��������;��8)"����u5�.��]ԭ��}%�?�x|c3xzʑ��%7�U�O���~�a����n�=�q��g6���n��f��Uҟ,V�̊~��?�	!5�ݷ�k�-�=���j7^卄s��%H_��o<�rߡi=6�AQܬ�`\�Aa��ѳ޿E0%-_�^�^v���!���M���[F=�/ݞ�rz�9~#=�I��x��[�9Ǟ�b�l�5��4;h�z������P�m2�a���j��wA�^%�z7!bAD�`��OVG�%g3
������qC<�� z�[�:�.mL�����@��y�b���$��|�($E���� �v�$�_ր�S�$5�vI"

^�ΐ�}�t�N��<�0�i֨E<"@��T�4V=8qƼj�%����m�j���w��=9鑫�v���W_8�"�ޛ��������#��I�UY�W���Pe��Ȋ����W����8'r����]|��%$1˸=!9	!�R�[��k�/TgT�b0�@>f\N��0({5\��Y���Kvʞ��8�����f2��Uut��Q)J��>�ۇհ�ۦ�"%���}�~�Pk�n ��'D&��!`��׃� � �H@��R�B��c�1 >H�����T��Պ�jձ��uS�(4�2^��P������e-�D���.��@&A�����6�b]�k�\x�sF� ^2���kBbT���dTygKH<	^�d��i[�f%��j�!ÁB�j�9DFE����V�����n�\�\�]t�Us�vq�p]d~�Z%��Bcթ2(�>�C��5�1��;�e���aj���/%���/D��l���W��v�$�"����H����e���@B�@���x!!e�P�xwB���\Br˲�������|VV�qKBjZ�ɳR�,���16�M���`B�LG{&-�-}
g��21^E}�����3��|A�I�����9��Շ�^�J`7��wb�\c^*�/�/�Z����Uxq-��ܬnr�`$^]�}���׽��H7]�n������.<��Y��'��j�혘;�I���JZ�z��$�M�@~ռ�1B�r(b��R*�*E̘"֠�m�"�$��M���,j(��-ݢ��(k�3J�XEc�	&��A�ĺ�}cKت6��'V�b�b�߼�z���J-f���H�`xD-}�Rވ����ƌ����M]֚m��S�Ӯ��Q����6������H��a=[�Q]�U-6��p������$��}]���D�}L�_^�������.�����G�B.!ɯ(8}��p��	�P&Vl�����3�Ee���K��X��=�������1�߻�'V��-�
������J�#-�[.�1��^M�WVY�z2��]�)�7�;��k����/h(`���$���O�i�l������C��s��K>������X
	��~�8㩄�㖄���pB��Q?S<r:!�e9�r���`������ܛyFY�o�[ h0Ɍ�9�GPb�5t�pTxU�e�ܪ��n���@4π�T�lCP���	�D	:�Y�,�\��
�T�0f�t5�5�3�#�D�<��Ш�p6u�s�<� ���H J�S*��� ���#��Mvh�YU�bYs$QM�5��'��'�R�H�{V�Ts�5�z� �C�Eu�S>
o
U�4���m��v��9�pЅ�GvL�M-�%4B"6�FR������������u��O
<�d��ǻ����������[���_��H����M��)�ﻶ#��n��j:O���s=zhG1�T���iv]�:Rv�L����Z#�a;�T���!(k�Y�jCM�uVɨ$ 9"���y�LH�"?,S�V~Vƭتc'u�S��@&k����q0��:L<�&<e�����/��&��S�;����SII��#�=n�aR�p0ӤJ��UFD�5�D�7EҤJ��"����Q��K#�Ǩx�$���܆��y��q����C��n�n~G��ԋ�e�����6����v�Yȝ�W����������3j	«�� �L����>�~�?:�Ϋ�y>���� ��B*�������������^��������;?�\�c��F<D���|LDqT��)W��dBN��M��qe�[	�(��X	�`^�u����­>��h�I�$+cr�Y�UBAWY�oYύȨ��
��e�TV�塲���a�ݥ�pɦ�lGl�6�-P:�a���x�>V�Г'ujY�Z֧�ϭ@�E�Sj#y^FM5��@2�����6�S"t�`!�3��T&����	�6�*�n�?*��F�	����M�Pz4�p��Gx����P|o�1�k����o'\=�fU�1��d�|�Bc�-��' WV��U$L�)_�w�w*j.W�-��k+V?y���M-�/�!W�R�����G���d�����?'Xr[_�x�?�z���Ń�nm[��Y�~/�X�����b���mV��k&��Iռ��`���ԬnFDm7ǫ���U>��X��Sր�Y�"�Hg�/�Y{�>�C�BUߋRD��rB�m�Ȗ&N;���[j�$Ƞ,#F,� ��k��}�nӸ鄉}<�XQ��I��sr\ӷ��UuE�Q\���8�c��T�g��e�niX����S����o���0��At屎k�g-uw;Y��oAz|Z��$���I/���:�����d�G�YO�l�ֺ�3�ZR%�+�߳vNm�����.����6>��m���p�H���3'��AFM����֒��x{V�#Y#x��/�~ʿ��o���\+?#��z�|�k�/�cփ��h3�٬�6׺��(V�F��$���0&q+VW�a��ō�����Z�c�/���`�8V�rw��U������eL�M.1���v��<U��;s��Y`�B��j��1J�;o�rUm+� �3�K�rU\�.���n��V��2U%'!=�L�o���f3��vg&kU�@��|��!7>	�ٰ��a�FY2������:o6amzd%!��R��<4�K1�9bk�x��p
u���#���OO�+��d��/%����vBǇ�s���{���&)y#Q��8v�Wl�6�2>�Չ��o"#@.�5�0�(�,�09��=IL'��(\Q�8kE��Ak!��$my�d.L}��6�Rz$ B`�G��dpIr���;�������מE�+�0Xqm��ν�d�rf`-2=u����L��@���;wvgg
Q���k��!����x����:;6>T�u���9]^?���w��ؒ�/}vy�����	�zk{��;���.���$���ǥ����c�@����m�m���jC�1|�cڳ��L�J>�I[G��V��%b��C�`@�Q2RƜ���"n��&*�C�Vtq��iw H��V��xZŃ  �y?��j'�SSj�����a4���<u�Au,�N|I{�-.�w��Z��i���o�2L��l��%��e�#�u����W�B�Z;s�P������o�\�c�$�����l�l�6��_�����c�8�/#gDn�Ȼo��&�Y�2h1!�e��-��f�Ŋ�q` ����E� |? �! �!��!О!О!H�!��!��Us�2�2bx�bط$Hސ ���q~B��	ߓ����2�9��|2* GXJ�OP��P�J�{rq4���;t���N��!7����8�wЎ��?U�U�ɻ��#�9=x�	#�T�ME�*�'�\�'�T������Rz�ץ>�Eݤ�e:�;g�~��m�t��Ά�L+���� �o�w�-��k	������;���3C�����C����]'
ˈgέ��1SZH+ŵ�������!�Z׆�/�֝��N�\��p����KA]zz����T��gh��W +�dv`�O?m��G�]H�>�j�ȳi�=�ֹ|y'�W�����9��xE���?�h�58�U���oq�?��'��s�{�	���k�~��?��뿼nl8{F��?�}T?�{���ǰ�χ�s����1S����üv�6�U�Ն~���Ab�FEԂjh.Z�.Bk�h3����+�m�z`�ҋW|��֎��2�.O,쳱=��������D���^��������02r���Y��:���+]��S�̮���kV��U[�\��ʭ���őklL�7��[�ۊ�Ǐ��U�X�Ǐ�ǝm@��	y��:��E����58 �q��ei}t��O'_7}l����_��v�c��|?�u����H��J�RN���?OV��
u�'�d�sj��?��MM�d�}�Z�b���L��P��J�U�R)�� ���m�?�Tl����R�JE�Iu�%���Z�6q���ԟ2:sf�jO1�٢!C�� ��t?��x<�h$Ln%H"%�D*���	N'gwc�F�)�CtP�6�`�9��b�qR4���������t�,�)��<�Վ֛���v��V<:q��RtVv�y}gy&�.g��Nv;��.�ѣ���Gat�WA��'5��HZ���&쑦�
�������X�@/�+�=�:�U1��wnW�=�ef�E���oϯɲ�3�CxS�m�8�������J�m1*��M�T�mQ������mD3M͘�PJ�%��!%Jh��%7QɓWmm�8��Q�Gɓ��*�SN��o�H��<$'tP2,@-K6Rr3���=��W�T��];�^�sO��ϯ�x5Y�q�XK��d���qg:��B���+b�ᙫk˯�R����/���-�J��L�1����JO*��R{��5�U�f��`����U�Y�v�$8�AA	#�`R�\.�>+��nG�g�56]m�J��Ò��xjx6�mʍ�wPDR��	����.�K'Ȱb0�m��/o]tݢ��//X�Z|h��Wv��}����z��P�MS��mZ\�u㣗;!�j�UK��rh��ww_����Q�����Af�AU%�V�qcΎ����29��B�ߒI�$�Y��~KJ��2�~�9�ʆ%)����"@8n�`U�m/������LB,x������*:��ՈU����-뿱s������kk�]�M���u��	}V����̬e7��4ˢ�|(���j&G��/�������e�[CVQ��3y�	��A�9h���TF��ҞR)d�W�T=�)Ց���ڒ+ (�b��Ǐ��
��$��V�����˘�U�O�ٞ�dH���YoJl��|I-�(|ts�]2�b3�zٚUVw�KI|Â�zץ���-���A1��/�|����E�\�M��E��@�������C��<�'grP�ě�&�d�U��B�[jG�wҸ~q�\��w��}�R�Ή�e��.ޜ�:sآ3��9\Y�aV��p�0qc��L��\IՔ���QS������r(HQ"��8v��SY|�o\�w������\[��L�����=._iZx���3-ۥJ����2�Ņ�W��7�o�2n��kD�+3�ؔC��@���Qo�Ky��RC<�zQ'�>E�\q��E-yJ*h.
�p��ѣ��zS	ԣ阮��T`��*>��}92��&��<7�U�O�Q�CjJL�����{�������̲F[�s��oȖ`11����[#��ݏ�;'�]��r�"j[�)��'d����.��&�F����z���P���p����+�^�W��=~����a�;^K�g̒I]��ѣ��	/�6����+�&�U��X�����<t���n�A�=�xG#��3;9�w$�J���̒}ɘ�����=R0�<����}���[=s����`��<���?�����֭$�r��O�/��nr�$P���D���R$��SF��l �K��p�wu�5����8�.��Ģ{~x��W������F��]]�Qz�%m�5�����.�I�w6~�s.��s#��߱�������ɑ�ƍ�ߴ��[.����j��4D�E���_�@d{^b�K��],������K�H�ͦ�������hO�hqj�T4}�5g��԰j�?,7O9a��=֚�x#�,9�Q��{�f�7>|���U���@{����h�k���uOE�6��ܴ�a�������'���6T�*���DG�r|�D1"'�hT�
��X2�`�eH<sv7,ۓ��d������������ ߨ����{�,o�h�D�&�u�6�5��%9���U�M�n�Ia�f�Rd��a͙j�Nl�Jo޷���+������nWE������_�WBJ���ba��꽬s�u���'h?1?ѱ(3�|h���ݫ,������:�:�h��qwǾ��cGꭖ�((Z����@`P�O��a'rǅ=L���ƶT���1k�����ڊ4p0	5;�^#0ACǏ��m�"�.��gABsE�9��$|"���\�Y�5�`�W.]ص����Ӯ��h_�����͛2����t��5��{ʞ��H��ݫGf���<���e�۳�/l�����m4,�����l%��}�Ғ��Q�e��@Â�Rw)�)�^
\��5T��:eF�������0�
�b�=h�
�e�����r��J"�kJI�4x��MƳ_�r��-0����6�xJ>�	�}b���!\]T�k��l�x9�*;���6�i��sK�R�L�́bH�<��v/N��b�t-\P_��񧤴���J�"ђ�%O*S����q����Z����<Q�i.h���R���lXu�����pm�9ν����i�����������;
x�>�'�
�K^~��z�
|��Y�����ܶg7�R�3��!�Q����T�~��}�?��"�U,��� ���4x�A�q��o�ڗP������e;�5�I�I�9�Ҍ��vc^1=�^n��2Co��f]b��#�Q<�Ǯ�]�s����	˦�M�m�M���w�=�O���6���'��t�n�m�M��6ݦ�t�n�m�M���y���?lsN��6��/Z����/����C��}Im���q��|��!!�l����k�c�M��6ݦ�t�n��?WC]H��ȷ���b�i�����-Z��K}W�itu�NP�zD���O�J��@�E�M膩���DWuڌn7����a0�`�s"��~E�1℟�4���N�(����	I������4���:mB�S�a���c�6�ٞKt�n�<�����r�_�ij?��F�I��i�6�\�u�f`?uڀR��J��"=:��$T������:m@��*m�E�tJ�5�k��������5Z��Fk��h����_�5�k��!D>�����:k�ߩ�V��T�?�ij�Vi���N������E�tڀJ��v��y�<�|7�a�5:<l�Wi�\O�}:��p�J{����i�6h|���?�i2�'* �	����J��L+tdZhU��*�����e'��o�i2�R�N���i�iA�[�����N
c*M�q���49�	B����=���9�b�Y�����s��Α�mR._CQԄJ��Z�Z�6��0.B��5�wڂ��=�akh�_�7�3��nt5�(� �]�������l7���PA�pB����I [HD�LB�*�]G��;"�Q����رb�:b{�(޻ּ��ZN&��{��/��NQ��h$�B��d�$�4�00��BR�a!�R W#'p� �S ���"����)�r0��8�9jG>$*ҁ8�-���ȃOJV��$0WS�_���q!;���'a���8��YB�����RII�|d/% �i`�ͤ *B�0�N�'E��E���BH� �i���ih14�3?�փ�v�u�Bv*
\p$A{0R��6�� $5v���0&HhE2�7Ὴ���������bg�[�,�iqu!� ,�Z{}�#�|	��<�H���o����%���3S�ɔ����K�(� ���� ^"�M���A�����"�J���\�wb�J-=�/@�B�i$?�S�bڜ��#	[W��P�/��>�Iد��TC�!��/D�-D�	�\�{*�R$G�l ���\4�o9��[N*�w�#=4�l��z%��f�6P��Ƹ�9��.U#0	�T����P<�!��(kZ�,Mm���e�&˛c/C����T-�8m�;����nhbS��^�<���}Kh��W_������<M]T���@��_����kUD��ԟ�U�1�?ru�ڦj���)a��^�[��L#wM���(+P]�UM�����h:D�!bd���QME���c�:��f�3�Uuh�?����Cɨf	�Wy`"��L����9�Y�tQgoc�Pj�h�������M3���6�ǀ9�O���~)V�����^�D��{�\�6s�:����(�e%�X���NE6+�=��=�2����5qLĕ\}^BH��DO�j#�Gj����ٿ�-B<d;�M���u��w�:G�o0�����q���mߒ`�k�́�]t0�.#nRg���;�P��}ꖫ�Yu�`�|��-��٭ѫ�L�1k;�ƇTT�eHJ�v,ԉX�)��Kh�t�;U�֗��������J�%b���nK?��n�'���4Mc��4��������3A����	e6�2P�uz��;����d����7��<�Q�*N���Ĺ���4���d��֔����V��W��r��}ã
��J��
��i �u;���Fb�U)�bA�d�&����Of��V&8�e�7���u'��Xԇ� ]4�q6��㡨ƅ�04��A�>��{�!Hp� J6�f��7CMw��h0�ǡ�
�"�.�J���\0�i-l�I�hFl�?L�J�����AǑZ=CԚ�F�3�4
G#8�� ɧ#�	m#�!诨B[H(�Mm+A��Q�@A�����*:� iӈ_���C��`��:�F�rz5f��p4j���T��
1���Ŏ�>	]�:ܚb������� ��o��
�Rվd#;�K�E��@Ttd1G!!(z	�5�I�`�hBȃ���E��wr���Y�V{�k\ �t�	ԋ���-�n�1���q��X�L*SeȅX�L!�)x*�L����b�-JLR)1�P)T�
n��i�0^!L�Xr�����2d)*L,K�1�L���{0�����c���$,�'����`v�,I����P7I��ĺ|d
,P/�ybL-�ȀPL)KQ���+A��S��@��T�&��R��/�
1�$^(����B%_!�C��P���n\�D��"��LBY<L��	��"�%|'ͤs�2� s��2��K�P��r}�p�RD�q��\-l���&�&b���=��qT<�X��P� nT,F�W#�y
�P��h~�Zq�2E.���	2��*K�$�,���x�iL%��
!O%�b�R|@�xR&W��*�@�<%&*$"�
���@XkU���� J��o��:r�L��WQ1I`/��I��$?IG�4 T$��S0�4�ˤ��Y�BxV�p���D @4B�Jp�h �ky�E8���P���Y�T,�	���#�̑Q�3E%�,B3!M�P,o�(H.i��:0�$��E@g7SSl	2�X�@5��)��2�6�5NpNR�����B�[�(Y$
D<7�"����(uZ� ���PB� ������;���� �cd�&�0U(���n���&�nj��D� ���D #�b	
�� z�I<E"�b��1Y<�W)��j�&�~�
�O���E<?E<�#J�H�q��X�q�����H E�Z���D�$8�nTu�A�5�b�SB6�� �-���ZH�$2�(~ �`�2	%,`��W	'�Q,t�+��~��j�ZT�Hx �H5�H��$��;6�4HQH�2B�@ E�2F�Wi�1�A�D(������R�:=T?�2H�d��HQ/)�x��xa������╠P�D�E y�D� 0�������E�Y1�`F0�D瀱�er�X�\P���ܡ+�G�1#��cH���`,6ƌ�
g2�32(<:���}�,К� S.�լ�d�`��!=����b!Ln$��ұ(:�������hv�� ���HfdHaD0"�n@*��1`�q����H=h�F�������a\,�� ���=0�A�F�әT,�Ae�],������ņ1��G�q��HhF+��C*����n�erT��fr  !l`�;X�	�� �@��&$p�a4�̠�^�Y���gQp.]��+�֨U��)8�k�2]y�F���Z���կ�?�_>�ޭ�y��?������n=������?����y���]��w�޵o^�޹oz�^��ϻ�?����{���������U.<[��)���k�Vw��s#%�?*T�[���U*���Rv�F�8�F�j_*��n�:
�<��D�l]$[��ҝ@�K	����RP�QQ�Z����{���d:+l��q9��U��I���`�z���W��oZ|�#U�Z����v��y!K�ǝ��q x��+$R*��S�P�0����TR��Ož^�wp	
ğ�d���r�mA���ǳm��	�ykJn�W�m;LM�#�i&���Ao3}=k�34�mH���}�Ȕb>���ج��iC��X�����/<9�/�N�Ţ�(���a��̱����-~e8)�8ۊ�gS�������zz��@�}&n��g���އ�j�% �Ґ���Cs�h��m͍cy�$�4Q%��:�fp��y�P �I�n��16�l|�����f�w����V���!�+Gœȱ� :ޭ�)�����|�}�|���������h�7��&��tV�	�I��I�Dr�|$����H�G���G�w���O��'nOdӢA�)�M��0ـ��MnO��z�d2ic�2c�5Y��-�`��hk�{�5��O�.z�����\���~H��^�ک}����vү7'��W|���ڱ�.����,�*r���"t���,��6��ξ�����Pn�ʽ#�}4pg\��v���I>&Q�K�\��1����f���,g�#�7��X>������5EA���3;k{?/�������S��R˝���t����3�o�bo�cp�ҝ�y��?�,���_8ڿ6y{�Ŵ�=��YD^ۢ�`�e�����o�:Z~�[����9�9z��>H�U�d#��n �5�t�X�(��:E����f9�i1a���(�l�)Vx�L{��+����R?T��Z�]��B���|�,-f��L�b7��On|��]�,������Jw���AP�|�a[��m�dJ8>ӌq��_����Z T|��
7�����T��o�,�a�8T�/mN��u
)Z:4��B�H��Qs>okK�k_���ĵ��i��nV����\ls,�<��u������1�7�6�uJ����0��C�v�xk&���������M<��6�߮��{X��p�g��}2#2/=?&�_����T[��H+(�|sH����3��n��v_��[J�����W�n�d�Iݚ���6��y���u����;}�7-i��3=Ѫ�"��0�g��ɔ�� e\�q����%E�w���,����G9VM=��
�6$�*V�S���5�ˊ�����a]�L@����
gܑH����!�%�������h�����4�^^D1k��E?���7�[�F�3v;T��[��a��q�GE.���U��!�V�������m~��	��g�w�;a�O�x��#��~�ؾ�f�����eb�#NV�����,�����c9��y��_9W���f��<�.��݉�co��:����w�ѶӰ���y�{薊4h��k�_L�<���ѹ�*��%������y[.��>������c��������ۦ�nuv��&,|U�{CM?MXZs؝io.��>g�ݩ]^<�|�SX����0��C+I��s�O���e��J3_�}bn�XS�2"�r��mcoK�f��N�:q1~���~��$~�f��]���8.w��Z�:g�Lq��P"XQl�����=<q��ћ��{�{y�^~�^�^�����}<\�޴����W�I	�
�E�����ǧ�ɺ�)z��][�P2�UA. �A� ��;
~��>��/*�<������hU��
~G�
o7'��P�pR�t���#�;w�{(�ƞ�rp�������p�Ż�1O95�P��O<���8nѨ���淊2r�%l����^���~��tɖ��aϰ9i��t�M0�~M��{B������b���H���;�y9��z��[z��uX�5�����ۼ �/���S�=o�p��aXn9�Ɩ�K����q��{�3J=���2���>�w8:�^[��Gz�����_�:79�Y����G��.'�#�vp�C����:���Խ�)�ޤ��_&Ek�,M)�sI�}�v�K���>F��Y,�X �d}����AV;¦���~wvY�_�X�=��"�!7��������څ�?-��2�sG�h֥������v�|����c����&ϝ"����h͇׭/�}���7aJ��}���?��zܐ�B������0���{�`��ltT�]��X�&3�O����鼫���:!�}�m������'c����Sk*�������ᶘS����f���6/3ǐY;�f)+�����?��f�����R�k=g�y��W�|�}�ۥf���ZBћ�����)���	�M��hƼ�I^���4?��ʩ��Ǽ�^R�_:��h���wi2i�V������X7�2(� tE	">O%��)�$�B�ʀ����pO���'���=q8�ߝB�V�W���o^[�kB��/�+k�Y<�>j�_׭"�?;Sz&|�
�:>ns��Ȓ��k��-��qǿI��W>�k�����y���'<�/{�:ц�q��\�G"W������q���Ȳ�[)+߭��x��Zgk��{�!nN�rX��vw���̛�K���/{?�bA�C��Ig�_��ő��3��#M��䒰���9ì�+�M-�ja��b������"ۨ��H𐧻n؇�=��]Q�-�NK;��f�)����vؚ�|�d����_�T�L4�}#@�o��8�>�ҩ�-�]��m۞B���w04R�K2�!�Y�DmΚ�g�δ0۔=z@�S����{�6�,zwu	5�_���;�,^�9\9�us7!E4&�PqP1=����k�@",��!puB��4�����Dp���a�u�������\�۾9��_�#��n��q�v���?~�n���VΒ����;��G-�>n@m�޲!E6�m�9�����y�I_����s�jf��>�X^gm\p���12�_���}�~��^=���x7}����6��}V���$+�.�[��zd�٣���;���׶��xw�60�֯�¤摼ߗi��7��<�����ș��x�������&���sv���{Ӆ���]�-���mQ�����T��?x7-�������ś�����Q��j\�K��%.^�i����u�t�~nr���TPŽwO&z��{w䑱��SM~e�;,$�b_E�ֈĚ�_23�2�[�	;���Y���tP]ﺽ��NR�_��w��0jأ���7/;�/��rRv|�jW�$��wg��~y%������UB�w�}��!������Y��*��N�$���Z6t���v�vl=�ߞ�58Ow�ڴp������)�WL7O����8nVϪ�����.>��:V��y�-Y(�3�X#��/}TZ����ّ���#��\~ﾼ�[t��c��>��m�����V`6�,��j4����WJ��	��#	�xE@m����#�F4��p�?�b����w��ޡzȹ���+:ظm�,ݐ�!�k�˝C�Vv��\7,j�nC_k
s���vݮ�$�����s�C����] [����f�OZ8�A\����.i�ٛK8ی��eW���2Ψ�R��㣭�Rz�;�?��6�TE������lLzuB��xI��!{n�
6I��k���]����΍6��g�a�<0�_l��a��wz��="�y�8ŭN���#/?}4ʕ����t�P>k��<�T��%�C������sȑ]�=�U��+�V��w��e��7�1���{V�I�9{������������~;��ivլ����S�e��󤓳o�B��}NM(_��ƾt}�^�1����F���q�nP �������ό�s�`G>��������}���G]=`YQ��|��~%������vO`�=X�wK���fU��#��lb�N��$���n�s�I܊��׷&�,�����A�.���kK'&fޟ�>j���K�K�W�9;�x*�v�K�;��u������F�Gί	rW-z+mHǆP�G�^T�������.7�G��ߺ/�X\x����Y����κ�_c�l����=J�n�$�	D�7��_5e�+���m^������������AeG�a�G7}@ނ�ɪ�(�{���@mn�N�c�Qx�N���6��*<kT�d�Y���Z�����)x�8=rg��.�2�X&��|��-I%�h��^�<0[R8z� �Y�B�k���`�T���P��n�mKb�/s���fX����J���$��m��Ł��f��wP8ʍ�P�8#��y�����V��_�Jt�_��{M���yg�DE_n�`�Y�A6�~��>��S���6n.K������۴�~�u�c����ٿ2��v�j���'�Bz��a�����<Mz�䶨�W�^�C���F"�����S^��*����}OWz�K{n�W�����Wfe��
#����l�w�{��U��#��-���3��������v��e�`�_��N֓�_;5ܠ�c��mC󒤲�]���kɽ����G$���xs{�d��DFi������G��s�m�}
rn����e��"���)8�l�~'�����i�g�S�[���v<��GW�����f��nݟ�S2<�2�bIH��Wk��uX���4��H��5�iݼ�8�r��q�z�[�}��P��7���w*�}��n������A_.V�'��/{�q�c��G��e����97o�H����Yɪʌ�Q����n\=ݸ���u'W�8X��$vlLd�@��%�qƙaɟ2V��H�c+�M�E�I˦lų)���d<k���q�|;���Hq�aX|�Al�Ok���h�82��ẫ��}�F
�6�g���+��n�Qi�|���w�Cc\���-���l��w��S2�v�$�(q�t�ffs3��DO���5�͔l2i�|3l�=�U�o�'e���vxŠ�u����~N����=��U*K���=������W�l�è��cG�����w�g��O\�-��6ոv���;������z��>�dU�ʣ��U��eK�N�vtrzM�Y��B=�W��s��C�\�f��T�t ��!mڡ���R��3���{��a�8��|�y��Ln�ٸ��7e1�V/�ﺗ:�5lcj��yU��7�G������tkE��̵36fe�^7�����w�6��}��t¬����+�^��T�/��s�'�>2�e�Y���(4���.�[~Ц�#p+ݐ4i|`Hµ+����1��C������UD�~=yb9y:��fŞ�C�<O����`�t������K6��]L6|"L�g�.8�XO����_��8��{�LN��Ǹu3��=/_7��'��q���?ݺ���<�ٽ����=�D��7�_+���z.��"�d��;o5qK��hx�Z��N�=�v�!0�q=���:U��JO]�|�:۱z����N��Ŋ�f��_���4�T`u*n�]��,ڸ#';��f+�q`����Bj��bwz��V4�lE�W����jXmt�������X�dሴV����N���O�O�4�O�zg��)m�z�� ]G2�
endstream
endobj
147 0 obj
[ 0[ 778]  3[ 250]  29[ 333]  44[ 389]  50[ 778 611]  54[ 556]  68[ 500 556 444]  72[ 444]  76[ 278]  79[ 278 833 556 500 556]  85[ 444 389 333 556] ] 
endobj
148 0 obj
[ 250] 
endobj
149 0 obj
<</Filter/FlateDecode/Length 352>>
stream
x�}R�n�0��>��0�	!�H�Pi?��K�T�eȁ���ͣI�X2���Ίu�bS�f`���D	�%���`{84��L6b8e�m�׊˱�-T�9I��O��fd��������F�iԁ;����Q�_hA�sҔI�m��J�U-0e�B��f�Vse|���'3����J����ĳ'e�Ξ�%��9��������<�([���
Ϛk�i���1j�G�l	�1�>�;����fT޿w�������,�hL��������hK4��h�|�0<��	���fF�K�`F`6��?���%�oƞ~��w�mGc���r��L��(�����������1
endstream
endobj
150 0 obj
<</Filter/FlateDecode/Length 56375/Length1 113576>>
stream
x��}|������g/�l��_6���lB؄�@�l. � Y��M ��E�U�.*h)b��� [�lD�%�Z��[�m+��K[j�W�~�y6 �m���~��~���3{�̜sf�̙�3��]�Q"���j-)��n���� �߹������~��QD"�����K���o[ֳ|������M�[�z��w����'���pEW��W�/���+�H��~��C>oŚ��[:�z
���^�������%7����t|�'���B>��5]�;�]��vH��v��������&S��ݻ>�GK!_/�{���(��^����H�����Y�����?��$����xN��o{����w��6�F6Fӗ j�yh��>Y�����$��%��<���L�$����v"�h�C*D9�N:2꾬�*�*��2��t���N�q���1�A��U����6�e�D��5����쨛X8F��f�SJ�Od9R�_����h�-�[��H^��ڀc�{�[�	��ȷ���'� :�,��
�� ہ��M���U���:e=�ݴP�u/�Y7�r�ӑv(��h���HO�y�7��]�F@����Z��r/�z��)('����2\
��M
�?m����hsғ�&�]��O���d�&	�x���:�'�AK!O�K]�k�H]�Y��l���������-��:pys$��oox���M��ۉB��(D���X2}�6D�S`��G>k�U�Y����(D!
�%0
1��7��(D!
Q�B��(D!
Q�B��(D!
Q�B����YZ�Y��(�O���ڂ(D!
Q���� ޥ:�SZ+��:q��S��x��)�+�o�*��)e"-��R��n��L��*�վ[�|�e߭�V^�B����~�HɥX��+S�Iy���*�����<�
4��T ^�]6�|�R�>j�)V���t~�f���62*	�o�le2�(�Z����.���9�Y��Y�G���d`%08	h:�y�U>�j4ДϺ_Q�B��(D��bs"���ґC���B���!�I��O����h&��\�O>ZI=t��o���-q�Իm1�,[��!7���O�k(�O�h2�R3J�j%;���?�̼T����{�0t"<:�����y��?:��o�����}�O&��߰�A�x�:F���Lף��1�#?>q9@(����7%$���SR��32��-9#F�͞Ky���Q��]ED%�c�CTTN��K߾o�4N��4��L3g�̞�Js��o�-�j���R�1�K�CO��(����U}MFoG�����=���k��t�]���U+W,_ֵd�ܶY3�5S&WO��8���|�����%c��\�G�;��v�u��KvVfFzjJr�91�c4�u����<�F�M���J�cڴb�wt��qï��j�RG��55ە�nh.�MwD�}I��m�T]\d�8l��[�-�ݎ���M=��gh��Zڄ�ݎ6O�����6��x݊��߀���b��]��E��dRj����eLaZ�gx��9M0J�v4x�,G��@NO�R�ev���b����TV��X���NMti*T�5���U�֌m��m���
�i���Ա�ca�*:|��$�mP3n8��i�'׷�q��"�̕6�{f�_.����C*w6��h�.���jC[|��]e[РM�C�)һ.�Gr��lj��α"�ʏ���4g�=���>>E�[���aWk,_GCN*�l�r۲�����"n�OHNě.Ot]�i)M]��s.��I�M����K���uM�@��|�ԥ��jL�?`��,˫:��a��0��3^������?�L�Yri�A~1��\���r��1��q��//.�.�UG���Q|���*���v9�[CnZ���7�=���K��%.���R2xQ�6WJ�.J.�;0��Զ�4՘��hNO���RY�?wE��V�w��v�'������\D>��l8�"8\U��T�So΂v��G�ltxV��a��F5��]X�/���U����R�2�/�R�zm�/�����U�Z$�����b�P��,��O��I�r]��tE�
��+��۶ ��Bֈ�*ht��@G(ܷ�a3;�E�h�x��?>�բ6��C'V���"��K�I8��U���i����>u���P��vG{鯢x{��)Nu�v��~7��uA�a3�Cw��9���:_d��m��5.�\ɔ�̐�a-�Qӷv�iREch��#�g��c���9�P�֐'�ΐ��/j+�#�����am#$f)9B\�Ƥ0�ȴ��c+�U�I�)���#��t'1��j��u���!��?�m9��4gX����w�˥�e��H��~ڃ�����bh�I��%��|%hۋ\�^ډ�2P����j��~>ӥQ���t�g)4$�	Q�춥>�吳C��?Tb�)�}O�<`�t1ǆs��P�_�]q)�(T����|���]]eQW�\�T:Ծ%� &q���UZ���X�Sվ��Ʊ�;`L�־�b��B�\	��|g�)��ZR׺������i���Q�Zl~�͏��f�c��T�m����@Z"�i�^�hEY�@�,�;ֲ�.�\ު؈�#{�t�Z�U����`��ʨ>_��7I�O����%�!��)�+򄄹�wdm����
wj���0��Ȩ3 9��.x")��M`f/¢T�;����mf[�M�rpB���PQD1�)Q^���k\���O9ڧ�Q6j�j�<�墊A� �Υ��	��3�Gvg�<��	�ucVYdi��ۆw�H�&Y�rq�"��і��8���dw�\���)�9WY��b<fjc�M���F�U|$��>`g��֐�p@���Ԧ����n�>�*dǌT��0P�x<e��k�F��
�KA0;��[�]�����t�&y'XW7���I�..;Y+ޡ��xG�ĉ]+50jL��ZL�L��������
��o����>&~�K�EZ�{1hJ*C�/��)�{J�HH*��^q7��A�'���g�
u��h3p� P�D�V`	p���� �܋���K���m@�}�kd,��U��X�]b��n_�裠٠_$�#�K�{8�P)��0���Aw������D^�/���r����i5׎��,
�v ���!/f���U��Z�-]�p�MA�C��2�����7��7�s7�s7�Ѧ�:�":�bt6Agt6�+�����[,b3��{/�.�*�A�	����=2'��a�Ī�(+&�����b\���F�m�4+'"h�0M��]��k &^r��GD(���M�t#�S*�<�x`P����1��ɝ`��7���f�R�����2j1�d�(�j#=e]\�*����"�߮Dl� ��v1�6q5p1��F]-o�	93�ҧ@u�%B/z��&��.!����3,�_�\,#��J	� �p��S���p:r&�Lș�u����f�6`Ph�S@�"��%Y����k����E�[����E��L-d{
��B殮�-s�"JNN޲��`�����������͢2�J�4����P0+��2�v?�#�<	dE\�v~��[	�8��C�o�5��:,��ݚL���_!����q�jg`[���	ȟд#��_E|J���ߣ���/�Z�w,����b`PG��|���e�����A�" ���7��O�"�il���ӱ�''͵f�A5��Z�K����5Z��N�n�x����M�O7 �GQ-;��5=Yk�Uk*�5������i�^���Z<S��ܩv�_��?�M�������M���\����jq���N-�����8��{V�|���j�5��Z�:-���?<�ؐH1G��5�`u�Ot��p��d(X=�B��a��V���+Ӟ��`�ikm;ǚ���0�=k��gA����j�}4X}������R�Q�?B-Z�ݬI�?4\��`����`�F��e*�Z�?Xt�/�� r_�h5ȶ�S�*X=�Z�ĖS�����Ғ�����ՠS#�=�"Y�A6b�A�X�i�3�A-Zs֠C��rhU��C3�BN�&�D�x�j�t܂Z�O:O[�\}Tv����[�{����/XS������]A���s>e�����������+
qv��'����)�����o84�^�����֯8Xp"��R��4�֠�� �M�6W�6:Cbw5s�Z��Z'�=!ĚX�慤)����S��h1�S���ϝ[y����mp���f&��6�C�!՘l4���X�Ѩ7*Fn$cj(|�����R�fI���-m�2��Wz�9V��"���Z��d/y���J�7d�Q'�������~���!��;q7kk���-��01V��n�������1�:�I�%6��V�$�Y��.�ү�ɬI��4����D����)d�.��u�Nok{����G���2-#�U��I��:��i8�{$��f7�u�9��nh�]R�\�5��D�P�T�\6��5kj�������܈�s�I*a=�)-�ԕ�&PW�$P�#)O�+���j���/�,�X�VYb<i��H�~�*EN��_��B��R�T�pF���Sk��|Z;�}�3*���0�Í�q�;����B�t�li�|��wx��~u�u+2�U�ֿ�g�����K:WH����]�RG�������;�����O�����NwWC����qt4��m��^��.�U���T�YVV/����;b���mye[^��>�>�-��:�mi�7R��~a���X,?��u���)��dϼ�rD!<��\>5�Q���RT\[\+EX�R� _��2o�d�a��Ef��u��L�ʆK������2ڰ��x��L������U���j�ڣ��>&�����Ŏ��ţ�U����Q�{�Y�Y�Y�f�Uj5ΚQ5{�G��dT�^���:���{������c�ǫyw���mջ�V�"��c��s�����͹�rw���K�����ջs�+6`&�� O�f�P|dv�ّ^X��������[Li�;�%F�-6�mBXE����b��1*h��n�W���'N��;�S����S��z�M_�w�[�~}��O�]�G�]����q=q}q�g�+�sǵ���F�[/P�h���l�7X�b��7Xc�V�>�k����6�:q>���^L)@p���� �	�=��
݊����$G�bO����K�l���lB�cY��.�P����-�֌��M�Q���/���@�(eZ�"k��K�.�n2�e��Z�\H09w���\$Q.W�'��ؕ��X���%�.(i�^Yl����u����
��nu~x�������k�1�*|J�_g��09i'��<:���s4��>��ZhM��t�h#�����i?�?+g���t� �E�Zz�N����wX2��Pn�� �ҝ��Њ�z�&a�Y+� =��N��~9�&r��,/�OӐ�%%������{�>K�h	=�6�ph��Ve�_C���ƼH͠��7c��s/}�e��������8$t���ӝ�8H�|�������7�fR�7�[,���pA�.� �����O`���h1�M����i�q�X9�n^a�ބm^�@7P,߇�O�a6���8�r����B�����:����ٳb��t�&�N�*���wӳh�+�Z�b�2RY�+�pz����
�x~����Fx���7����k��oġhͦ�M����U��s�]�=���@��������}�m>���Y�nE�[1JA
!��^&1z1��ds�r���d!�{������U�@�L����U�)]��1K��
�����}��~z�^di,��G����|o@�?��[�6�����SC��$ f�T�a=/���ÆB�����`�v��Hf���V�	��S��?R�U(o��t�����C����۴c�vP��J̟e�M����ki�B���>ڃ�|��ы���>�����h}f�v��	�,{����e��sF�
^��y#_η ��'����"Gtb�CxX<%��SGQº2�i�����?0�2L3,1�����/�.�3DC�CW�zv�W�y፰�I�4��+�܋�8f�S�=�!����ƙ3>�90�0j5l*�NMl��0a>[������Y�<�����f_��.�m/�:{
�iv�5v�������cs������ODO��T>��AXλz���:��c|�毋��~�!։�7�s�U�W�+EJ�R��S�+�*ǕW�7�OtV�G�B���9�E?^?W�J�KP�k�y��ЂS�&ë��щ������.�g��T�s�$�E�������cz�&V�{ďu��Yaco��X)�	M4���n6�c�ª���.
��]~��JIcm�6J��=ͻE=�� �O�4�Vݯq����Ml�?/n���EU���I����)�x
�Ī��ߏB?�+�VjW��>�����u�����;�h���0�/���6�Į�2������Dv ;�6�ΰu�þDnv����p��/c�<��r��m�eag��X�IY>Oc-�,�+�џ��ϝ��L�R̝�0Dk�v��i�&?ae�I�c�?7��ܱuo��b�="�h��"����x��n�2:�9x'��]�)�ǖbߟ���.�T���[f���x^��\셋��_����]��>���+k�F)Rr��������a)-B�A�OH���2���Ø�?����y�gS5�[@�(E�چ�yJ<84��������&�<��E���wgxz�Ϩf<_�����c7'|kx+-?^�+xkx?����A��;t>>O�R�c�}�}ϣ���ط���؏�,�~��M�?Ew���;k�w�_�4�#Z���iZC�o�� ����Í�O��4;�X��biEx5v�gh�A����F��b�nU��R�[H��܅����{����oB��(D!
Q��g�8oe�c��'�Ѹ���}	�6�q����m"�/�pΙ�SL�=�8M4��5�!��V",B�g����p�Y�s�J�o����w?y��硛q"��]��8!݁�m���w�dt?�O{pG�NkO��3��E�ӷqzV�7>���8��D?�Y���#�?L?���m�)�f��I��N�|�K�������?0�.�Z��j���(�6�a~,H:%Ŀ���X�Lb�e���A�I�B�aװ�)�e���B�L�����i�yDcK-���o�&f �_�(��U�*��'ٓ��X�B�mb��[G��`>(�����i�=�5��&�:��,�	�c*&�'��v�Q��Ji������]>�1z}
���Mar��!]�6�*fw��X���,��gΝIJ�Xr�j�Ԙ9�����ȸXc��cJa̐c�YS��q��9D~���qe�i�!c�#Wr؊�v}}II��vLm� [.F�g�47{3]�Kk�%��V�jnϠW&̨���ӡ��g�9^ć�p8�k��t<�=��P(�}�$�2eO@��xf�ψ��9[�iN�m�� L��>i2�*	�����I�k��d��$��Œ�þ��L���E>��`��k�p�غE�/�����!Uza\��e���2�/wwW��	c\S&-�L//.�ʮ��1+���j��Ρ��Q7��&�-�g�-9߼�wu��c�r��ץ?���=��f/�'�X�l�	[V�~��nK���q�u7X�J�ʿ�����]��<��=���[_������˺&������->��J�O)�-̉7��z}�5�s���N��#��1ť%6.g���5%�6&f�.��p��ONht�����3O=��n�+g+ O��[���^��,��{:������6�ح��,k>˿�_�ʏN����X�5Ċݖ���Y�Y���e��:�u,�x�ɬ�e�feM��܀�mf��E3Μ[$?ך/��t5�r������J�-����3�4��1��H����]���GC����KZ��-�v�ŝ��OIQ��0�VIw�cBƜ�՜Ɔ�/�&r�Oc�6��8&�g��r�]5�\�!�2W�Iʘ(��=M�����qe�z�
�ë�2qedV���������\}ZjzJ��F�q�t~���w�T�?��|t͜�/��º��}�lI��Kn�~罡�udz���7�諛��}��e�?�1��f�X�4�=X��m��}�o�ڹ�ˊ-�,h�{��=��̏��ɳ��&�\8���Uc7^�zrߍ�}�|�L�mj��7����j�ϱ3��$~{��x쮘$��Rp?��ٟ�ۢg��Զ��f��̅jm40cq�f�,,��1�����y��*���R3Fr��������o|x�={�MC���e�������׎n�ph���<�ei�X5O�j�fU^�2�8M'`N�J!�bbaR�������?��͒FŤ��F���g�'���P^Q��q���������?߸{�=˻I�t�w�}C׿6��[����]��kj`�fӽ�E���9L��twZۖī*'�h|z����4���j��R7)aBbU����ʊ�qs��#̹����Ժ��"K�g�e�g�e�g�e�gcfoNo��iwfޞ����ve���R��i�g���[�����*m���'*e��+�lWAވ�b�5QAE��R�5c6�V���nG��Y�D�L�����V��ⵚ[si����J��V���I��.���]�ܹէ�6��e�ыIm\�Z�qd�.�hԏq��̚��#� ���Po�������>}��ɏ��ִ+*���b�A�ד�>R2s��Yǔ�+��r��u��7޻�[<rdӔ��<-����6&^7��ə��[ZXh�O�T��qDq�H���J��a�-�?��(��_luV�HJ�$���,�4�5��:ר�icJ�WVP:'�<&'�29>ՔeI�N��X�Go&�]���U�w(�Bژg��a3�b���l���n�����2j�l2���#����5"#f?G~�}L�O������ȌG�q!Q������Q/�n��Op��3�0�=��֝[���ETr����"s����[ �����9�����fwgw�5�N6�.�M 1��*���" h.�P��DDP)��"���V뫘^��J?!X�����Zm�_{��qM-Z���Z�������E���d���n6;������ϙ�a���Ѿz
��8R����](�)g��f��.�M��&���ۋOTw��^��RU/�:��~��(����5�:�����3~N	�_
r
Fϫ��X;ߥ�b�a���&�S��D��C
���;�G��QO'���02�8<���)H�B��d�d�TH�B�+I��=S��t�\���hsb{�ש4(]�)��]�b/��|<L.%��K���a8re�&c���CDý���#�%,}���0O����bEaF��ո��l�3����'��G$�M� ��V�´���_#K�s�bu�+VO�R?�<��ˎZ�����G��.�:�L��
�LO���`ѫ�N%�i8t�;
����Ø���p���C\�����\?����9�;��O��+x���觠T
��ӽE`$	"��G�:��8������%|�Å�#`�N�
+��R�7�3�.��,�
�����P��G	���!V�?3���7=�Z
r~�2]@��aw�cc�"�o���u����B�J�)"�a"J��1�'z3jڞу� M޽���r���#��R8�2ͷm00�F�&�55�l���O����H�G�N����e�����@BM���;ܔ�Y\�n_��������˟���g���Xm-�:��i?�Lv��.�������]=p�?|�zl��ˆv��c�][4Ϟ_��z�Hzl��)_�����}\��n�d�:�5Ë?�g@U1�P_�c���G*�<���ߵ\XU�B���¡��}x�����R-w{Qݤ�PGT^�>Z7�{������M��m�c��|����~,H�D���⠆jcܙ.�����l�Nکq�m�����˫���&�C���~��-CӢ$�&�)7��~�)���7��?
W�w���,��΀>��[0��F��F�[:_zX��e����}��ֽ�s��[�{ܻ��]�	�~��xU����p�
�/�"����=R�nl�Kz��@(��N.HQ�t$yy�+-E�=�
V*\�rhBh{SyJ������}�8�|�P����K��������%�Ko=	���s���8��� o�ز���d�N�$/�����c��WO����Z6�ͅ�h�NL�B!2�W��uܮ�'������陊�N��^�c�� <��սE6>�z�sCPgcV��N-%T���h	��� q�r�Vw�Vژ��D���S905��6 m�ѥ��e8��W>�I_�o���|���x���Y!,T?J�����o��u������+�c���4mJ�i�����6��z���ut*�|�vt�PεͲ�I�/*��qZ�U�/�X/�o�P�P6%oh}$u(u����ג���������|���oߗ�i�B��{����<�	��+�����/�#��}��1w�DH!����1��y��o�;*x�on!;ZFZH�[*mT���*���Se)�~��>�%�`�B۱O��|9A����	�C�C=}��dh��Z�fl*/&̤�2�&/
iW&c+�-�qT�#Ӟ]�mJ�X\�c��5������f�b�:��l���Y���ٻ L�HМ��6�����~�`�κ ���r�;I��F���k�-.�yx����U��zE����馫����w]���y7�߷��`��W�[���Sܸ���4�B�h�90oδHnF��o��[��;t�4��!�d
�� �wb���T�Rq��$ �)��y�݉x��N�ڰ���I�e��D��bN�<��G"��,��EEEY��>�Q�WYvEQ9� �G�
~��qK_�R���*Z���3rt������ho��� ڋV��C��N7K�-�y�^���
X:zlp�s�2q�9`�$���ӏU䀹@���W�/�N�P�%�a�Ё]�O�뾰���'�Z�_5�m��v��ɥ4��C6m.D&��l���x�Y�|t��I����#"��vs� ��\^'lo!�B��r�SF��I%1�}����(8jVw�)��͐�$�����q�{PM��������	�0��<{lX�Y��Y��V�?I��~�Ȉ�M�&����h��a|'>ά{��H룖d�s��ڞ�pE�-rk^ �"��z�s���f��l���~� �>s���}��set��&"�-Q���Wdsl��L�^��~ &�S�&:;�$S�Y�"�!G�iA��m���r1V����[>{��V�&C�����y�5�c^���ٝ�VV�N���kfy�����E"*���๽�:��<�]�u�:����ʫ��iQ��F����|��.�E.������dT��w�ӑ@%�>Չ���屇P��D�������&�)X�<���7�-z-���W�O��A��+3[@E`���!�`9m��v�	38`Ys8�x"�h����3�V��V���.8J�2�q�_��)eF�&5�� ��YVu\�^�?�*��?���O{����S�Du���Iu�0m���w�-�}pUjǿ���^�m�_���WM���=�t����n�,V�����?�^1�����|���U/�<g�����,<t���i�]x�(�r̎�k�ş��5�l�4e,pM�Ld9��#Ο���+�2�`;FN����u+đ�#<������X���:�$��{�ر=��c�#���x���Gx����u?���QF5'�V�k�������L=5���Z�����h�!��q�fC<h��@���0��*J �����U�{��z�`��RD�0������~�h�M�� z�(�J�!���~PJ�RSvu��İ}�166��3�J��B�M�s������#���~	ٰ�$!%�wBig�5ߎ�����a�:u�9h>?�_���t5����\�]Y�ߔ]�|Si;�]�����͞���w�w��p����������/U��q���]ǳ��%���B�xZ�p���,�-��Qh�;�32C�Q ��V�c8CC�V;����G���������e+��� ��?�A��/�M=Q�rh�`ZCʴ�ф��˾�)$���"�qsC�r���O�@�QZ���-�Q��RK�z�P��@?C���ey�	���Q��T�ߏxOeN�GsF��S��3[�渚$����}/<�Џ��y����p`�<e���ۧt���㚁͙���[F����Ѕ;W�z�U�۟߰��%{_�8��ׯ�W^Y��q֮����a�y�W�}2�{=�ŵ��tc�U�W�W��J~��Q�A�ޱ޹�{}�6�K^�"oo$g�BV7���E�<����
�ck���R
��i(7P�:�% 6޾?@N�"_��G��=���?(�h57rVc�H�x#߈)v��2����؂�Oi������qSO56}��acgͳMFJv;2Z:�IfbNs9���H��(n�B���!��τB�R�\�^)]���$�a!r��P����Oaa�v/���ij]�@EL�Ys(�ā��?o�֦�/\u��߽�k��췟 %��se񌥭_��u8���~wp����=����7_Mm�h��׏�������͞�G�n�` ]�fǸ �O%�\ѱ#8���$�j�8K)������q����P��n�=Y�Iy�H�:�]�M/�����!1��Jͅ3���Sk��Θ�ά̈́���꣸���ϙD�ư3�C���g�g��4�>Mq���6T���X��� 6��B�C�R͘9lr揍`�6p  h+Kc��I���(�7s9�ө2�#��Ev)��R��u��p��ÅC����luq{��eY~��M/���7����Q	��<"J.{@��/�	�w!���������Y]P�#��z	�#�� �a��El��!��8�������.�km�n�u��1�QO�`�{��������W�w�H��}�u�I��~���=G7�ڋO\\�����@"�2O�tI���H��숗%�[0*����(|0���B��Q ��
����R��H�f�rq��d!��
��*T�c�-�{�j����OT<�x;~ ��1VqN-�g�� ��r��R=v#�G;���oWD�����z�Z}�5�=�1�uw�B��D(89�a�ML���Y����h��{1dy�U⸝���?z�{��e|��Qm]���ﺬ������Y�*�@��E�7��j�*L��˅bOq^qi�&�6e�cW�AC�������`�x���6���4��9��M^���c�YA�
w�e$�F;T�(�,�}-���l�h���l.V�53V���L��'* YN�g޿�6��&kI~2��^7����C��م���0 g(�Fڮ;#H	I��"XÀj8	ٗǃ�e��Q��F{��Tb�>CoY3]��NC|�k�da%AՋҙ��l�4enwj��EWv��M�>���-;o�e�>�Wl}q��7L�t����@85e���g���οw�C[O�(��-�����W�(F.��"`����(�F�d�a��Op�� ll6�u+ �p�S��?�bk 2	ƲJdT����/��P�ւ���۸P��6ny�6�Aː]���lQ%�k�>ի��!��Ѥ7����n_��2��[�~��v:���Ek�������oj޲S�Ûw����������"mAåѫ����:m���ڦnѶx�Fo�ݧާ���/zH=�� t(����Ǒ�D�����ӎE?P��}� ڬ�suFB�h4��l���L$C������ŵh8�pk�5nL�×�B���$�@H4���W�c�C�T���˲"�+�CKQ�w�.�宐��yQ���-W�r���qq���Wmc���!Z��n�;O�	�n:�L��-}.H�-��g�:�&���?�[���tK���
��7��-6F�HDQc���c STN
4p���o��ȔK��6����u�ؤ�Ĥ��l��f��k�XF/v�=<���g-�.X,MǿK�W:��O�lg�o���}y^6V��iU/~�����o���N��f�R�$�����	��7�扢<�F~ư��-�nE�F���	}+�;�;{<����i����ҽm��v�)�z%�J��wU���+:�hD�e�����K��C0Zn��9�H���9魡W�˩_��HK|
��m��PCԟ��|�ֶsS��K�K�w����xI��kM�p�H�*��z`Y(��H�h :�tk��ԫ%)�eu�v]A����~�_�/��]k���M]��!w���+���ᮟ~]x+�a*�XVc�b&���7��0K3j��R\�qZs�kM���c.�����P�Ӕ�jg��t7��gF�>���Ylo5�����-Z��>��<�>����#�q���I��]F<��Jȟ[�f��%��JG��䁪�j�>Twvv=��L���-�����N@�Mg��;Ȧp-���X�׀� ��&Xp�$.l��x��!5� ��Q('szK!#hQ̤@z�29=S�iJ	'��W�SJ\�h,���ZB�H���m\{	�X�;�}���u3q� BC��;t��1������DB��+�{��F���>H��~�4W�����"����M!x��$b�S�~Ĥ�^j����0��v��6U�f�9j�!��-��Fl��7&�KҁHvn�\��w��i����ί}���_ٻvp쉅Oo�~�A�Gg^���Z��Hq_4��z���W}[����s������ƃ��}�^ �r���*�F�^�T�Lg����{��z�=v9
�7r7���������������I�<n1'd͝2Pc���0�ps��raW�kc��kn��v�N��p�Р��̀q���17��{��� ��U=����~~��+�*���y������,?x��ě=o� ����s,\�>CtH�Pƞ��ECiArPh�����O"�V� �񰦅	i��� ��?����ݠԊ��0����&�����S_��'�����(�S�O��M��[~�q��ݷ�dC���;G���v ����ۛ<FC�.���^<�����*�ww~�a�{��y|ɑ��^�L����W?T��0�-���W�;��҄uں�-���{|��E~�ɺ���r�o	�%9Y��LH1�i&f0�s��$���������r���<��r��P�{�ORL���n%q<��$i�K��
�
�� PAd'�=)�L,���b�$��ʿǜy:�;O�z8U}Z�!U�q�C�[�op�)��Fdnߠ��iVd2:��U�?�����IP��'
B���Dg�'8��鄌��&�f�� �!���)�f^ꕳ�����~�i�1�V��;K�MO5��6ś�۪O�����\Ƴp �9ȱ&���������c��_������x�8�./��H��Mʰ8,m��+J*fD�D:f�ͤlQ�ʦ�SY��0��$$&RX3N���Ю|+j���P^sbrW�8Gde�,��{���4i���{�i���Z׺�9k)���v�Aսfp����5�#�\;Ҙ�5�U��ZK�S��)v2�\��Y?������r�.�;:	����fs��۠j`We��	
:Zgio#�oy\��g�!/��ּ(�%
E�X�26�q$��r�|�y�D��H�9;RsvO�Ogm=q�&M͒;�f�L:�\b�SK\�OGMr8»q��lYL�].���/k�io^��8}F�*��@(uI���Y_�-�9�LK�����'s�K��xa����t@���o����_�����65!V��-x=S��BG���+;^��)pw���Ϳ��"�?n���Ȧ�ֈ� z��aq;D�,ٔ&"�Gg,�lH��0"�=�(����h�Ș�|s�&;x(�qhA��i9��1��f3�����nԈQc��j\��7�Ř��I�I�
�Z��ň����ň+�����#����'X��^� �uA\���-
��������=]`I�!��ƌ dd9�� ����dj��I��i�,,rmm�?��	 �$�t7h���;��OE<�|�<g:�������e�����K2�������L�����o�Y]m�wA��p��������@������9�����6.�R\b�g��`6�#��I�����X/����7��w��{����:�;�w��z;�t������W�Oup���e��	��d���>��x��9�g�������k�\���󱨃�1�\�ˢ	��׳�CT�<���s��{x�[����(*�����ݛ�j&�! <߱4�6�>�9���mu�����,��&��v���lP��%MN粍٦,':@����,�in)okA�$Z�uR�b��]-�6'���bF�y�%�J=(��Li&$��� &,e H4��f�b�@3�p1��8��ٌ�����Q���T���>�m��A�1@���ț����d���-�w�ux��3b3.&��E��kǷV�ចW����VO�z��%#���������OݙI�[��13�r�����]���}���/�}�����8>�88ۢ�G����ƨ_���ɏ-=,�|,3G����KO{q�E@��p�r��Œ8�^��и�Q�f�
��"�
l=�u�5�g�T��l���S`���jo��\���O�t���StU�5�f����f��潳w���^8$�v3��a3Q��f�ܘ1�L��a3�ޘa�I��3�3�6�`�d*eL?�l��FZ[Z�aC�x�J��8�(&�$F/%�b�B�VH��?���\|6�}n:��[�/���Y�~���j'��-��(vsE�.��<��%XwC�=��xz7Ձ�Hs�3BsR�,� |:�tb#-�!��b�7��J�4ȰH�P�G2�5.��"� ���"9�q Rs�8�xq~&8��=5e�H��r.� ����-+k�f\�����
�z���ꌗA��"����@o2�Zm2�b��3�\{�\澲C��L�1�c&�1�I%f�ͤ��#�AB�.(�8��W�	e�<,���I�^�_���O�/ɜ�ӗ�,���ɿ刺U+�Ӳ�s�7���k���S�K&�n�|���gp��@�vj~��1���k�I�p̃�k��������E���y�����O�?=�������G���"hH�q�VbYA�'������;p���j�\Wv, �G	X�3������-fhf2�]bq��a�F�I��h7 ��U�������X���Y3�m����4Yא��	�\��h��4�� ��1���2)�.\�N�p<�wJ���&~q���bؗ�;a�]�ڏ�,-L����j`Q\s�}�����_/Uw����r���N�&k�ǻ��|��Q&M $�v,�����c���3�6�M|Q����.,�W���5��7�����_���[�өC�(g���8[��Ŭ�)r�..���Y�+Щ�ۋ=m��V��:}Cpmqڪ�x�f�a���H۞���O��6���R�D�O����m��������
K�����Ձ��g�_�_.���Qt�:A��2�1#�PO6��ސ3�P�u�	=�pP�i_rz��P�ł�<|�@(E�*�9�x�j�К���s�I�b�͝VnÄ��SS㪛vu����S�K�<=�
�B��g�pH���,�aS�@?���m�� ��B��58zpm�:u�ݩk�N$띁�ɗ���bCgm!�cړ�X/pJ�O���x;H�t��f�t3O���C��Fէ��25�g��Ocn��	#�[���P�5������m|A-���_�����Lw��h��4�FI3�4zX�+��v�I�<p�'q�@�wc��(�[�iH�q��@[-���KN�@)nK��d�v{�.%�R��zvS.-8�s��I��*ќ3G3#͜������f�������׿����0��8�sk:�2�{�ƻ��q��;��K������wk����*��!y ��[�G9B���T=7x�!_%�I���$KH�5Ő�k�EĽ�"����~�������7LW�1`�y@�!N�)<�����֥�dJ�4=j��v�La$;�K�g�/B��Q��S2���K�b�b�i�V��AׄL;;����|cAB�!q����YT2;��QM�&���]f���rԉ��K��C�Vy�q�&���;�IpD����Ld�m!Ʋ`�չ#�9��$rx�uh��y������F���h�5��h�����k����`�@/j�2'���#�i�kĂ}���GL�R�	R�S"�am�����N=�-a����X�����41�T�(��x`��Ϩ�^H���:�tD:lk�g)�}����~��s�����Uأ��:�����p��j���+שׅ?���foT�%�H���~)�SR>���TG��ߚ�Xj4?��%@(�	�	�{�e��H<��M���oR/��J0a3IsN$������8^�X���-͑t=��p��5��~ɱ�L��P1d�FC��E����3 O����O��|�j
`���M.'����Z�y.?��pK�z���ip�?'-�s��-����(@�&[z���@X1��L �
a�I�[��B+������M)
3�A7E�"�k�x��Z�2�j�ԎH��##��k�f�>4��br��6����} �b �w2{���6����Y�P8��<�$Ԗ^jK���_N�������%��������>����OhP[V����[s覇O:W��N|e�iΉ��hĠU�^,����-�\(e�E���-�zI��>V�'۪m!J�����PhHel��h�i���s\�����j�������n�n�m���G�GZ%���(;*��H9RAN��Gu-�ɵ.K�:]�E�[R^RY�X��/lrl�6e6e#�H�U��m�J�?�eѥ���/�\ڶu����GP3qAo�����qϞ�=�=�{��f�?h~6;�~��{1WU���8�9 �.��Y���}��١���4R��m��$:���̊�N:�ㆉ�9hk�KT<�|���6�@9�� nJ��n�U7�ݏ�_uS�ir�1��hVB1�� m<��s~���b�w("�狐����J�V�%4�_7;~���ύCJ�B[0%7ֵ�Z�i^��ƽA ����(��tRh�[����n�"ܵ��VB[�)	�˙i6dH�\�iDP��BT� ��\��q�ty��2 �cVP�((�]t�Z���-���TJ�`�$KѨ�T�"|	﷧FJ��ʟ/�����m��/V�Q J6�ʬ�wk�\��M$V����kȃ�]z���K����k�������P0�Fh���-_\ܞ:��]kO��ȍ�@(f��;������/m]s˕�����^�m�h���/߶uѕ-�]���;���
�w�By{ �[żӾl%�F�F�א�D��r�X=�������*K�Hԏ��&h��bqV�)���49czx�%̀�.���#G�d�q<��<�<��|S��e�H�:�DT�E���'�4����) ������~X�b�rҞD�1:?sH��\eTF�u����CsK�B�>z�O~��S+��ãd4*q���##���X�I�4!
;?�:IZ��DƮl�C?�J
������+�� ��o��=lR��=���D����,�;ZtzF.K���l���c��+B���P.�H�n�~��fڙ�̍.ڈ�E�E���o��L��"���	7��K=�z7�t:-̪ij0�Ԍ1�GS�X����F��7C���)��a�lZ�z�dCI<ϙb�3��+r$��gL��a*v�p����@-�����T������tQ����x�u<�z�,�����Z��D�y��3O�p��e6���P�5�Ͳ��!��n8ˠ\��ƃ�9((���ݍ�EH�e���S��;)fr@��$#G�9� ֚*��O�!��U�RX��t:�Fv���8���|�$Tw�Ԙ�J��8�ڗ���}��o�hI�ܟF�����_��`і2�.ml��^{���l�)�r�aT�s{_���ȋ�q#�Yu�5�H15���>��<�f�^D��D$Sd�/�� �G gV�V�Ks'�kPL�g���y�n/25Vv*���*�<�/�hM�aؚo�N_)��[���<�d�\��Ӟt(�6�S�6�*W1��a�������8(��>�\��W��V�i�I�dv�;�77�7�nPo	ߠ__���<wG�s�����d���ܥ��G�R����p���
��Q�~4���a�0w�>�*>W�+�W���_���-^]���Uu$�C���Q����<��_��N�)�[�ͅ�E�����
�v�|��Bs8��ؚ�7�"��Ѯ�0-��'��+ ���d��:Z�1z��kU�>�x���8���'�U=�BFM�"�J*�TS�RU�MϏV�>=���9V�I�G��p8���ʨa8.D8�	��b�İ,�$\,�ݒGN���$H�n�8�︟�V	��!�R��,p�D2W,K���[*�F�Ω��Wz���A=� u"�f
��'�)�������P�O���i�̙ATe��s���^����rA�kt�����#�.ܲ����� ��Q��Sd�BVE�ڛNC�E�7�"u��݂\���cF����7��U`�}x��l ���|M(��Q�o2��G�xR�����A`)�x����<�͞�l���ΞH��DN��� �(�j^K뾐�z2����s�dKğ\b[k$����{������W~*�4����K�߶(�q��2���4��O�H@����;,�є� 2�@P\ܮl����́�7������-ȐD����z��h���ݦ}$#t�`өD���+�Y\حсt_�Z�Z����ͣ�	0���ޖ�h�(�o�&�&�@������*��3���i
��
,AK��F��*a�
Q%�FI%���>K��7��p/�$�4[��l*��4	��E�i�O���J�^ �1]�2h29��f;�-���z
�����)3՗MM�&Slj���pQr%����)睩�~�q3z��-����֠���j�)?��������GȤ� �Q�m����T
҈J�FA0_��V����B�;J�:���|��ưw������Xn�Y�D	��þ����d�R:	~
]qI�����%-s3�f9����o���z� �;#mm�D��>27w��,#�W,����%�������pK"���g�=���"b	����N����uͣOe�'�F�!�"�� ���V?:���'�h�}h�[���5�lCp����[�(�i)�E���Hm��#qz�Wf$��.(xT�G(�e;[h� ��J�xY#�=Q�C����	P�;4�̼��>#��r���!|G+)oh���&���G픜�o!ni�,�W�[a"��]�O�i>�ֶ�Y��hZ�n��D8��Չ����E�E�5���/Z�Y�J����~������'��P��Z�rg>�+?	�H��3G���j"��P{E�R�D�zX�t��i�SA���P�U��
UPv)��)�T莋�f'	o{%��*��MS+M7-�gr 7l�Q,���� ���I�GH}��F�1aL�i�6�	:�x��"X��V�M��̨Z��X�Y��>v��$�fJC�Z��8Ϣ��,4�����5�ʮuT�C��ώ��<w��,N;D� ��l�F��*��ͳ��V%��s$kқH�"�t���	���a�����D�+��R���&�ig:�A��a#67��;�ǐ�!P�(q�P](a2K�Cޞ*�;�yꐄ����b޻��:
6���� |�����N��4j���Ö�-�{���B�U:E��by�}�Ȉ(��M����Ls����@wNs��Zh��s�h�g!Esq[�b+j��.���}8�ŗ��M�F�8ω\�O��%C7G3?���u#I�F����.����K}��W���WZz�7U���	w�3�*u߰)��ʦ�����rn�dF[����Oo�����ꗻ��������!� �ߛ�:n��'�����`Ԇd�����+
v�*"�+HT��P�� I!���xQTM�d��&�������Ş��+Y��9�����,d{��aقPe�<��΍�lI�@q~�F�D��~λShv��Ťa��B�1�z'�w�
�W��$x�9�a��Ѷd�c�MO^O��?K����˱�X��yS�e���[	���	)����f���ö	��6����'%!����1��t�ps�Aɡ;��;�8�`P~��8���i�(�uE	����-�x���z���A�ؤNEu�+a"�b��{�APP�D�Q�F�V�}�Ӑep���-�aAƦ�����*�u�����I���,Oa�hu����VYt�~�?��{����M.]	7;�'���ڶ���J%M�s��_��{���:���!)>:���ߋZ����T/��VB:��:*F6�Z-��@0 �4��p��pl4F���@�2��hv�?��V�DAE�Dv���,&�(�ࠌc�mΕ�8���c��{���L?;��٫l;m�DlJ��~R?E���/��&ecx(>��w*��;�/x&ݓ���!���a���\����?�g�=�fy��W�����n|o��÷�!��/B��M�H"&�t��<��`U�t��2�����<A�j̪\�7)�^�D�+�I� ��ab��$(��G$�赡[Cd_���4M�4Fb�d6����8�E�I��b����_ä���ggǰ�x]n��}C��ȵ��@�= �T�UP���(@��)BR�=}�S�IR $!�;sP�5���lA��\.>�x?.vóTd����@������E٠�B7X2BaI�/���7���/����[�Ǘ^�d��{.�xq\z�G�y�E�ܷ.YH�vjў�|轮��(�{�u�e�F�����dG#d� g�#&MB����:v� �ӱSF�G��wM�㢠3��(�(�M��0�<&�$7z�������V�����h��`RF/���D�g�@Q���h����x�����F"�B/ju���[}���|�o���0�<��'���Da6Y$�^<QG��PdBN:N�g�ZU. �Z�͗���?i���(<^�)�fa�@�/�Ѷ���~�eW�@/,���o��C���;S8�%u��cO@��f^ѩ����+�#�M�~b��({�}�YHr���L�z�}��Y8���i���OMk--%h�ud�Ⱦa���q?��'����L��)�|��VU��|׮��k���8JD/�0o
\	K\B:/xC�,ͥ�$�щ,7i��A��E'Υ|�U�h��(l�x	M��i���[�9�y
�Ŭ�FFZ ���ֲ�xō��Z'�������wtc/����s��_�	gO����+��v��%����`պ�|K��^ypU��)x�{��{�O��wD��b�� �%"������Pӊ(Q�p����+�@!"$AH�O��`	�:����n�
�(�x
��b��c���_�3`��c�k�� `q��ɇ܎����!P81s���PB��Z�R�?��F+�9�H]bu� K�0�
}����7�C4������86����բ�>Q�-dt����9�Z���C��Id?>38Qά���]y��2&����lA=M�p�o�kN���)sR<&�tohΗU&�x���[�m!P<���h�]��!?����n�|���r��+�7���3�Sy��F�������u����u�FR<�'�SO��\��j�d?9N���	��y��>��؟#��<%��{��, ؓ,9�Z��&�C;�2�-��(�}��z��<�����{�G�|꿡���P-�ȼ���Es�\C��R�a_��i�����]�}~����@Y�Y��q�r�ę�� w�c�G�>�؃��j1��e�Q�Sr�N��8�/���tvE�6�/��Ɛ�4����B����IeǡA8a����V���q�?�ZEq�]SHrl6x�~{
X�mB�&����Q��Ci�&@�%�TkO�>k�٭=����=���|R���5��C@�c�,+�}�4��##>��Vq��h\C8� ��	���Jb�����������[o�i�����[o��ٹ�����míd��]w��=���� ��G�U��ȫ�K�M��Yr�R��a}�3�Z�a_�����38��.�9��)#�v�XdX��V��i�F4@��k��d����H3��Ҭ��f xFz�{G�5�q�!��f$�$����Ĺ #�3^4��x�әkYPq����'�D�\�W��wo�ꦺ���۩�E�}4(�v��X�������w����P�P�sΩ(wg����gj�����Q2�N�타�؜����%������ ȟ&�9���@2��]n�N�$�.㶽�j�u�M�pk�ñ�� �r�:g�'��3���Plc��"�u���1�������c/[g��xg}��B#~A6R^��%:L���0XHd��� �$��?��H4��s������#7s.����RA?��c��VTS���56� ������ac醹W2���C���}l����hZ2o��D��{x��%�Hw_Fn]ݹ���w���J�O��_/_U�+��!�� ."�PsV�>������m����;�wn �f&�\�W���{��X|}rt��rk�6e_厥��ط泽w�V�흦�ۦS�O�?]3����S�NoSC��U�x۴m�os=mu��Sm��v�(��!
v��x�<7a �@�4�=����5Y��77�6(c�d ;a%<�t�c����cOǨX���Sb�XS��=�`�	�zZ���y�wp�gvq��F����.�5M�L1�c/A_p"H�"I0�)���#;�׃�--�uߧ�P�F��F����&������"UT�>/�����Z��������a��)ɋ;��~�~+�2`���A�n Tޗ����L�d�N;ё��2���)#A��^�V�fn{ >s�6tjX�ۜ�������%�\�Q�ϡr���/Ӎ׫Ed���o�O�O��{��^*R}�G��P95�(��2n�U)���|G�c���m�������=h��
���Ý����Rv���e���1�u��0+�6���H%�%T��1�K�xx0�JS?��#�^?3��ш��G���'���SoZ��}E��`K�J��r�b�%{�y�9����pG4L���Ӊ堮Kl�0ї[&.����[YS��`��H�
W;����驴�d�����0���>LlȬ׉���U�g!������Tl���@%�V��=/A�H2�˝>(7�9r�i����
	v���s���.�ǘm=-���f_=2�0��ǰ�[\����.�OH:1�}a�*{A)� N�@>&o@H�*���>��CVyg\i�\U\`��p�W���x���f�c�\��>���U-Z���%�;>���~p��]a�����\�]�[{يֳ���W<5����}���3wm��3���!��Y=:qԛ�y�:KS6�1z���wn^Ԧ(�r�r��ŷ��w�t����7�ߺ��O����]��~?��5�C,�F>u���TM$$�ێմ]I�}v(�k�8OAR�o'b%�t����r%�1Zɍ1|�XNA�ȡ�!4
;�``n��a�O���z9 1�2;4d�6�;�)���+�/Xi#R�H����B�8��mcS\z��E�3Yk����\���2b�
��oL��E�%�);6�� �c����⡆/Q�.1<��1<�ws�4���)���}��U7l
lR4�'�)	���6�<hݢP5�+��0D.Õ��NV�ՙ��*�e@_u�:���*�9%uOS.�ݔ�DS=M�LT���2��4�4��J*���t=�Fໄ���-كJ����vಏ���n��H9"��k���pn4GO�&s��@��3��9:7���]VY�����SXf���Z�Q�a:xCa�j2l�˅�2�G��G�v���ӑi���ui�-c���-+ [mV�S#��2pD����1md[6`3X��3�.U=N{�<��g.�SZw���_m���%q���B��ȶ/�]vӊM������f]	'��t1����B��lx{^K$<��&j��^��r�@4�;���q"�S'�90s8b��S�<
�C����©�)BE�=���ʂ���M5���s���M�����]�4h��s�V9�p�0M�Z�����Ġ��`Ûd�����x�=�7sLo�u�֬it�-�:fp�bf����0$�R��cM���;f�����s��DL��܃����	�mp���p��c�l��_9Q?a-65'8� É��d�����MO�%HmH�/ZT�m��jsE���5��P����ɑ�ʐ�R�ez4�-E�$��A4��G�O���!��PW5��^��EGБP�lM��~m��I�)`XU&��ӊM9?�M��=*��8�������|�t��6!cXN��Õ���G�n����aL�C��6v�����U��ԟi��hn���T���lWW^��h(�v������掳�9}S�{�s#���-zЕ�4�&Z�������#�
!��V��ۊ���D��h�ś�fQ��Zj�-��@Ca�̫�UHk��������/h�<�t�<J�©y	�5:i��4�"d*>	�G��@~�۰�h[L$��h�DQ�;ʋ�a���\�8�P+sٙ���KN��,�S*Z���qWM��2#��.�n��0)~�u����}���a������!��6"�p�оJ�oEg5r����Y�Y��?�f������Ե�^��t�ۯwq�Y�=Y�UAUb}�Fp�ԯ�qi3��zC��d�ȽZ�!�C�����_�"���\�b����Wԩ1��ط@�q�i֭�TO�����^��J���R�^m�w�㷻�Nb;�@�N␗!mC�1�aI{!��Kg����ر���Ű=ٰ`�3�,v�	Ip�'Ǔ����[R��9�]u��J�����w��Zj��Z︴I��ib"�L]Kz:S��T�Hg5�3zH ��9�f	�莼�ίtE��k����
;�s�\n-�$鰠C�d2!5�R�͒H9
IZJOje(���d��]V�iU���J�B�!I���H#��>@� ��Tx,R�$I�B�g�U��s>H���r|�0%��pZ��@N
'QDDQ�U���hAaGd+�,���ޱ2�*,���KZ3ྣ�o~��w�FXG�o\%�F땐�hbע��(��2}e��C6��@��W.ܜ�-�3�S��s�4� )�w�B��8��pףHpڄ����C�n	^^DKJN�[<j���6�� ³2^�T쒬���dP|nǺK�8��G)+��W��-,y�.@�d��"4U���֏kݜM��P�:pI#Ƴ����΁Ǯ���o~sSO_V[޾2˷��G��ՙ/=R���}�®�V!� �,/}���ӕ �͂HH��[ۧǗ� ��y%}5�bzML� u��"�Q�ە�
>X���;�(�m �6@@*['N�.�V�����ajh�>�#�ޗ [aP�3"�V%�b�4K�ꂣʕX��W�H�BX��q���	����\��ĠA�"Qp���"Q��eJ��� nt��rR9�P
v����l-���GsL�2�lW&���S�BZ����`'}V�ĆC�}�~�s��XZ?(�1l&���S�9�+�.j�*8����F�a)v,BxiK/�[�� .W]�yP��i��@J��2����qx˒M����va�����y�E�I�6�8�C*2����#}]҇~j���a�������b����U��W�#N]�zx�0�n��0&���0�����F�2k�{�����kG8t��"~{��8��U�� Nj0�0Q]?G7���t�������C����Ž��׉1~߽�Q��Ǚ�?wxt�Av�_�ԋb�Q�R]��cͦ����l�|�潛��[|k�U����J^�QAR�Ч�����+$9�i�3	�o`V*��e�].8n�e����<��7m�B��kd<d)�"6���Xq`�Ư�G��x����:��Utx��Zq�=|v``������܂��ّ����)%/�%8r���@��|jh1zHׇ�6m�.�����*�U��w���tUS����A6�ӧ��� ��#���ǡ�f�Iu��p�g�N�Î�����5�{d;�@��X�h'�f(��̰�\;���fktxSr�J�uZv�!hs͖��c���}/�fu��p㊢Kr6�g�I�0*�8`���%}`r�� 9��EG�Ύ��F�Fɩу�$1*���p�G��۷�ϐ�C9�W�;�+��(���w�m���vx����Q,�xMb�.�Z�=YA���\VH�A@�	��-Ch�⅐o8�zU��E�k���ٯ��L�2h(��{q�Z�V��
cT��]ʟ�;�	{�iZ��{Ӌ�����콭���ȭ�mX�+�s�+��BK�
��Y[w��ddpu���{ӥ��Ƶ�Z���ҡ���mK�"yv��+��v߆�j߳ňBkR�2���d�i�����ĄB�x��I�ڑ뛱l6�t3��˥4V�!�������(�b�����k����FF�f#)�W�D�f0#��<�\��b�OgM��aH���"l]%��	|��E�ƞ��vWU�]ew���a��Cﰉ8���ZH�� �U?J)�R���� �͊�*��\DX���������J�"�#!�#��K���J������ ����YKc��&��Q|(ʠC�h�N$��	| �O&��؉.��BW�v���:���<�p
���F_c���1�8���z���S�����p�t�<� �ၓ*�D���:�l;�]������L�Nf\�P�U�K����j�l&#�N�f��8�|���4�*�a�S(f��B����,MS�A��M�d�x�7ل���:���c(�j��cj�^��ջ��M�8�aٮ_�J���0�SI�G�SY'��,R$�����!�q��K�Fl��/n�iD|���ҐS�<ã�������Sݙ;��[�=Ծ����]B�Fp��]�i'&�	87�� ���V�3�����<��"� {��8TD]�#V(]{TB`kA��نN��B=�2�b2�d�v�k��� �E��u:zsQ��	c�!%�@z����OR\ y���#�!�U��x:z<���l���5ֲ���E_`��o���Smx0�a:^��@'�X�tG��?��v���N���g�g�s�s����E�ևa�g�{�;Fn�����k7���g���gS�u�\��%��&<pK]<�D��[�C�T��a����Nl�K(��/Ugk�D��H3��L_N�� ��,��4����b�Ex� 4/�u���FC��t
����w�w��<�/z�zw����oa��܊�-����@�RB��6�f�������j'�g�Ĥ�"��`'�@�?}�=��}��[����Ɲ+�?s��o_C�ھC^������ӿ�wx�k��������/l'ȋ�o��^��h-��E�h/�x�*W@r~#�H#�a�20��@���ވ9����5�|1�	���D�ՠ�h��h�u�u@��<j�s��_�=)�Yu�2$��D�����V9D���qK��0]�0��T��A�։a�рW�}� Z �G�A�_���`�s��)"��4�QsKZ'}D�/{)�����J)�!�Q�$s�|���7�w�߳���[k���u��T*oCP���	A%��Vz��$V��b����&@#!i4&MT�S�A���Mq�8���A�N-fc�:���?������-�䰃Fy�"@�p��IK+�Ϙ����3t� ?��ئ���񡤥86���Q@��	���������榞���.,�2k��B\�n��U�.r�{]���t�-��56~�����|Uimhڀ�H��j�:���;�_�Qgk_%K�v�~��;?��ܓ{#bo��jI�Q�u�x����ۻ2�[�������*5�F��������QlL���"[X��������TW�Iu5��1KNa�/�U�����@�Ԩ�܏*����h�e��(+O�I�������'���K���2�v9�޻ؽ,���>8RL�2������?��M��Q#ZR����''�bD�Ă�s��ƁX%��C:�g<�S �
 �h[#�d,��%�����!��
�$�E�������ʩ(r6�J`�8h��!A���q����o.�+q-��gv�����=7!wVv�ỡ ��HTհ�W��0Ä��I�]��͝"�.����+1�˼Q#��`m=��.�����+����{4����)��Џ|e�j�
�7�׍XP�g�X;���+��?|��3�O M�{�XDSV�T�Ar�8�p��1��t�J�(l�Ή��V�y��f,1�	��~/��^� (�ڽIps$MC��I�ԃ<14;1�c���@ \DFP#8��)�5��.PP5-Z��M�^��O��т��N��^�k��I�#��$�4�<@#|��E�b��3�[A�XV��ᕳn;�P�h�fg'��Y�ާ���fKZ���*�����=)=��r4�������T�'�f����l���f���O3�g�(��y+�V��*M�>ѻ�t  PST�i*���@ُ��p+��\镞d�8�фf�JO�OpO_�|)���|i}icm[�>���#�oe�ަފ6ӟ$^"� *8�~��Ry��\P��K���ҁ��ɡ��KQt�'�f��G�p�M��A�+�~�@U������VЃ% ���C�*����ZߤxP���t4K��)0�il��")�F��^ QƳ������<�0^L���VjG.�����?H?�(��W8��g�|��绩=����/����U�e��׉�[(-��S�$���Mw���	TЀ���x�ȅ��y�#�����Ǽgb�(��VG���45��0rP?;��˙�^*NE�A���d*�ϗ��>Y�N�#uJ�Z��k-�p-n1N��$�*�C%��-AJ��A��H����uA��P�P��YY$��K�JF���#��2�EI~�9~t�sN�?����*��Ë�.��j����'ɲ�G�����3�[�v�`v���JU�&)Y���,��B���Zw�M�Z���<������[�Զ/����7�LG:��M�����Ͻ�O>���RP��_���{���򚛿���$��5_x��֪����E�|����B.�|������τ��/�1���] B$�!�a�bIBH�b�=A7�ϔ�h؃`��A9�Ten�#�]�u��i�����Ȣ~E QG�v4���I�bDn�ua�?΁?��/V&�؜�b���)���n�+J����=4zb��tJ����p!1Ğ'�p �Bk�F�C�'�'��F�������د���F�6a��_UhGTK��U�)�v��S���uFK��$�	4�諑7#��P�[±<���(�˕���  �x���XL� *�x8t2t:�ː/�=����*9�.���e{Q}bh��Ղ�� չQZ�����C*����xp~[���Q��.�\���#�c���9��l���_��O/���������d�b{������?����tsm���m���ks�@�#�U=O=N���E�������wx#��ywt2#ٱ]�8!l���B=����.a�V��ǀ�`�k�T��՗(xᶟCF��_F*.C�\'�����Y��]G��v��x�WYS�wuo��87��#B���A:V�t[�A���F����Q]��'PSi0h�{��N¾1�;�Hv�+V�N�W+4���N����a�S�R����Zë3��ȦIoL�V���0�dV��`f�*'��	E�>��x>���è�$���P���g�����9w�C�[��%PH�����\WD������]nr���|A[��I��E9.�qB�cR"N`��Љ��#Y�9��NS�q| 1�G�]�)��"R���.�B��n�;D,�(u�����@����<�jtW)>��?��u=���O�����O���xb����Sc���j�4Q�
���e�|wq��Ѓ>\UI��7��?��0w��PJ��%�O�ʱ1�e{��}|;4�!�\��A�G�#�c�c���*^��H+�8%�5\��۪~D�4���у�ፑFX���K�F0����-n0�����u�Jn��J[����'�	�?�_�M�|��������o���{�;���^�_������>���G�w�=�����b��&m�]��m-�m3��e�:���=�����!㯼�z�A����V�e����t�Qn��O��kU2���!"f$� ''�ly�)��f����ra��b��e�ch���a�j
B������ (��q@���4w�{��r{�"v��U�b�g~g�V�[G�����u�-��j5'��������q�L��O^���b��F�Z��E�5�}^}��P��s�ݭ�-$Ȑ����I�����Ϥtq����j&x��>�Q�dro��-�����P[����Kp�`���r��N}:o�a�pSCzs�{Cni�P7�E(�� 8�E'���[28���O^W����p&�~�n?ͧ�*���32}m�_��"o�9���o)o�"����/������"�;�*�N���R�ͩ�'o�|�M���JEi-ο�u@���^��hqlὊ挻Ws������_%�n���y��ݻ�J��t�������Cv�?̅���{6�SfćQ�Ͳi�m�����;�;�����H���{%����e{G3�i�XF*{�\"Wʵr�����էsod�����1k�������(=%M���|4��=U���8��|Qz�|>���+�+�7�7���)���}����}vC�R�R�^CoQ�����G����̣棹����}Dٗ���8�W�W���R�� 珤�I�Ȥ�a�����bJK&Sp�e��{G5�C3,���a��C�0�>�35#-���0Ǚ�l�O�ª�ٹ��*���^g�tK��GS@��+�@��UIJ�� �A@��%p:�/�;�`�71���f�y޸ ��A+��c'�[�Z5qb�1<����W�7!�b�A��!�@�?zg���"����@p�ʶprS�r8{��cU� C`�*�DL�ϡ�P��o�?Ec�ߘ�Pe�6l�>l��O۴��wAc�CQXM��?ʹ]. �� <��ѡ��n�7�E(!������Ϲ�!�
���,1]��,>�g�B9���:`��!cA\%��3#S
-X	!��@���0j�QZ&j"�ճ�ւ���1p�Qy2 '�^��eyJ$|f���,E�v�������r�L��t^��2?��~���]��M����[-���n���U�_���K�A�I�S���o��L�R�L82��c�%I���~�7�������9���5�HK<�"�U�qj=��%��*Ȼ���%�H�&e�1U*�+��;�_�����*������_�_W~n��Ɗ�g�Ya7w7�V����뛞��wH������z��:~��Q^�\��o�;�[�-�����^~��W�ݫ�5=-M�O�/���(��XJI)9U�9[�r��f����`C����	X���=P)��*�!��;$ˉD�\lu`��f�����G���rp.+ѨU�78^jP��i-Wo�k3x Z��܀�qTH��ƒ Y1���͐����r�U�}϶��|�{���ҦF�نn4L!jY}5!\�	��WYA�Y��/��T��t#��j�eWl� ���I��~�$�2���^������d2�	P�}��(���8jh@C�����~���<� ��ڋd��4��H�lA~r���ڋ���1H�M����o;�Ч�]s��%'�]��V�KX��d�Y�Iϊ3�:)݀l���g�3詟��>ؚ�L�#~)=t�hFZX�/ -�3;��Yf���b4�N�!�pVrk��	�� �
쿍�dG�����!��pҬ��j�����R�5QQ<[;/���;.�LCD��ώ�hi�/aSEYz���A���6���Pfm��	����'1K�@���[�$�d���JǍ�J�m��,(���sB�V����}��7��"%�Y�e;2�"�*��'+���\��ӿ{��e'#85W��I	�>h�;�N��8U�`f�� ü��u]@��U�����U�e�5����t��oXۓ��l��=g6�m��z���ȗV�������?��믾����V���n�Y�$ �S{v?ݞ����f�E������Zd6�'��xa� B��WS�!�����9�Eq���l�_�؏˸�ҥ'q�D�*�Vg�FOq�x�����2��I�E"����
�Ny }���^[P�~11�\�iܰ�aiæ�/����s��'u@[ϰh=Z���6���;������dYo���-���f�\q	h�5���۸۵��7�n+����ݯݫ*v_i?�_�
����,�H���ʗ�Q�X*8�-
�!�j��1���}./(�� )�[
:���l5��0��)����h�J��늢kHW�����9V��~�Qܞ!v#����=�P8����Dc� ��J�R*�%�V�6z!�����3��̟�@k��;����3�N��nfhf�ހ���	��-� �BlŝE6�j�b8-��5�Gv&Dב�T��������ߢTY�H n2H<��M�yJ���"(�y��ڟo�z��@_����k���bZ��${+a�jW��|���мPӁ��x�ѕ�B-*.�&���A��
�R|��WW��G�L{��Ӂo{f<���������U�P1��7x�����%��D)�x�^���y�{Io��[)�O�`�x�H�}$G�C��w������N�/IÑ$rf���{�K���(f)O��<OzD ?�Ϙx���O�&����"��r�S�@y~����������eH٨P�P�	H-���+��:�k��T>���3�%ZC�v�1vV�B�tߞY�S���`QC�.B˙����
�w>���A��Q�r�_ǣ-O>��?;ny&��{�x��Q#����슸��x9�F�b'x^�DH������qq.��p~!*� i�u43���4.�G}���3r{����b���"��
��}�"�@k�:K�Lu}ۼ�Z�d�
���-�]N܎�$M@Ӄ� �#y���?NPq8�E)%M�����wP�b����&�\�V�����N��s�<$܌ٱ��0���ϺAQW���Ky��BV𝏙1��`L�/O[+�غ�{gqy�j�H��zk���M��� *��{x�7��'X��Ć��~'�����2����pT�3㞟���H:��5ƣF��C��%x@g�����VS�� �Ѡ�W�9����rE#�H����s���A�����|�{|�x���J�F�G~����Q3�GI�Sߡ,� G��u��y�$����9�$�;@��� 1���3�ǩ�����&������s��1����^�y bGl_����oi���.%*�(��a�#���+z�
9/�����f��]1L(�
c�Pl�]P�C9�7����op��4W_����G�+�%��<Y����+N�s��5�]�v���5_n�ir�l_1������o�q�[F����cK��x�$ke�c��#�l.Q�~��d��:��P+�R����A�ܗG�V;�y;O���r��$f=��C����+^]A�p�l�.��I�_���3�#G����tΣ<LWu�a�1�(�4ss�dσ�*�ẃ�ˆ
��CW��bnY�1���R�I(���^;Q��׻���%�yUV�vy_�g(#�]YFwj#_:iV G@��ʗ���У��g�X(�ᦶ���N�K������a��}�M����B[Ȯ^�쳷��g���M����f�P�%�S������W1y+��DH����NC�����g�MN���5n��3WW"�5���"Q�T:�4G��?!:�Շ]Z}N)�*@�7�����B�0�ΑV�K������N��=�buL��'/�� �"OS,)�g.��;?���R��П���2�E$�:"�:_k�O5�d�0�cI摞��4��X�~$��ɔ�����B���������Z���A�!�W�d	�#Cs�\V��餮�6kd6p�����Q����t芻���[`��+�/P�Z���վj�J�B�r�'����N�ڍp����/s����W��T��t�TR��*ݭ�T��-��Շ�����l���`p���!G$$�䛏!�W8f�1�!̬۹���nBf2I6�����f�%XžWR�m��f$wU�:�z���{�ޫT��f�0�8m|��Cn�0+��H��l&���x�ѓ��
�k�iֹ��~�b'��M�Խ�؄jJ��_x�8wj��]�'ܵQ�6"�ذ�=Z�z%�BLv�;4�&���i���udj�����"pR����!���������m<4����	|�q�K��֖��cԓ$K�I#�폁�W<[9��]9��^68��4��~�H��C}�!h#r}�B�z�9��,fױx.v��:�?*���
f�����$��xi�Ԕ��[�]��c5z0�6F�
Dmp����G=d��G#�pˋ���(ԍu����5��]>��E㣸SP��𨋣yo�_9��x�O����v�]}3c�Z��wך|��#��iR`�|OC��xcbf�jD�P�}�+�����@�����뷻��X8	F�_��$�$����5�@��������?���_q┃rڃO�V����u��`�_$X3�*_�K!I�Z�N�"�0�q����~�O{���������p]��].��E����0i�t�t�����7����;����)b��C���z�h��^K�&0�0� ���e�����r�a�Q��A�����j��ɥ"� ���r����Y�-��nІq��/II��&Y3�J�&XM��6������PX���-�),����_�$X{9tp��~�2gw8��k�>���t7&�����Wgvc\n�y+��g����:�����񟃰�����r&���/�����O�0�� �g���|��W0@�7��~Ad�r��"���ҳX�=��_�����~��k �]��K���g���k���5$��3��k���54���w���6���f0#f��2��1�`-l[�mĶc����M��������ۺ��[���Mdv��'-d���H�����(f�M�b�E�l`f��#Gv����rẃ���Pon����ͼ����7<N��R�T6�����k����Ӳ,�?@�kp�^D�+�����[��z�_q�·p	�RQ)��kg������(_�����syY���_�=��\��{-~�䕼���J~�J��|-�~������gs�BA�b1���[�����G��(\�`I=�(���xnl@��-p^+ȥ�$���\����'�F��kt�/��Y�#ۊO!���$�Ŝ�>��g6��x#6����� �=|�6z�{�����k�,�	n$�	|���	ma�@B��#�<eva��w��b�r~Q�Eji��(��T�``���b�Fm���iӄ�,�}�ohV=u`דG���=�q���dh�����I!����u'_=���?s����:|۷?>zm���wN~棫Fnx|㖇�`����=H��qX�%��e��`U�
�r0��ǝ&�NY���K,����o�N��:4,7�'�E;(}��b��	%�`rx��䦠��� �ʹ�[�56Q�~��
�E�����:oQ^�N�(���a!f2���N��Řc ���F�/��!����!,B��6�X�p]
Ty���b�pv����+ �*�M\�wԖ
�"j,���$�rd���D�I A�(oꕾ��n|�����nJ�R��D����!�7V^������H��3w>X.��ɝ�����vş�i��L��R���=ّc���^���c�0Q��3b������%�ۉ'�
�b�W,&#eԡ^��NY�f@Ay�j�^_�� Xh-��-����v5z� ����H	A��_�R�'��S�x�x���'���K;�~��%V� ��}�G����M���xA 7 ~�0�~�xZ�i&��c�+�\�3 ��f�`�ֽJ ����@���M⋊#(�E�=�� M�w/��k��f||Hq�o$޲���!�נ�DiPGww��͐�0�T�J��xF���`���g?<�M�g����>X6b��w`hO��W�������*�
�{��ǿ��j�w�����i����Qnю��B�[��Oj�9��U��3Z9���3��4��H��{�'�l/��v}w��,�ݺg��>5��|*�go�?��c��T��?��*֋�C�:���[y1RD�5�v���`�׮���V�lAV �p���]XXh-��~�:�]8� ��	��u{(�!��Zb4�	�٭��[�ё�J��6u�����>������U1t��oǭn��pv5�+��_��7;Y�v3C1F�k5��9����n�e��e<鬭ަ���E#b&Pj�L�	��Z�a�I6=$:�n���R439�fU��kD�$�㫇����N%��dI�n��W���3���+a]p(�Wo4�f��ݻ%RL��&�Ӎ�6��P3Ǳ�۝���\�{�x�53�L�C%N<:��X��xD��� '�qy\�p���G��6]�a�x)wu�;jX�f0kiZ�IQ�J۶a7�޷��iiijISSO=���+]g~���Ud���O{��T��BaM_YI�,�&��0�o����5O��đ&���
E����؁qa ����=������Y���	&m�aO�"ֈk��3S�U�T� *!���M�?z��q4c��QO]�[�O�=��㵖O�y䌛wS�X�>���#��zG�I2��C����Ic�k��P�tvv��B�۞?q�3�Lm۴tIٛ��0G@t�t}��K`G��������9_29�lv���8W,����:`�3��st۾=[���=۶�n6f�jC[����t�u٤���l��X�,�gn,��!��r[K�Y�*������^8�,.jj5.�(��^i��1���xIC�Ӛ���Kj������
�o��d����`0�)T8�a��`�� ���j(�3��lX/��������Hb0�TXđ�j)�H��moZ�TM<����
g8sm�mc�@�B^�Iu�X�&w2n��V����*�����0~M���T܌ʖ����\9zh�D��V
�t,���uz�}�����&l�6�:�PI��$XC�Y'q�&�=	N��%!�L��D���(*!I1.LEcш�FNot��F r���@�O���?�q$�P6=��DS��C=Y-,h_D�6�OVX�ʊ|�F�B��	ۂ ��|q���7�p�w�A��9a� �XV_1�G�7� �2�r�L���+Oz��T���m����t��	� ct�M/��U|s������o�Fhg7��8����"���9��b;^�w�Ϻ_%
�E�B[����anxV4@���r��ڵ͑1	�j�)Yxĉ��j��Wv.�ȷ�`l뙻�	�yeT�x]u�zmm#��m� 6�iS�iE|�yj���i���rG#b.tƝt�R�©�U'���׃�x��	p�r)kc�.��D}��gj����E�<����N�%�����1���t����&��D>��;-z�	я�M��r��#�_2�����^]�q��V�����]�6ɠ��p��e�l��P8"�P_��~�>%�^��p���,�[�5P�Cs��W����[
�$/(8F���OP�d���}�Yb9H�xz(
M�k�/�4T�_E!~'힐���W߶� Ԧ֭��o��B�kȀ<:|͞oܿ~���׬�ey��1�]'��:S���K�t��g��~�ޑ�=��㉌�E�������g���g#v�b�u�p y�z�h[A���js'@} �2�e�z�c$'�dKH.!:N=�z*�K�<� S=� 1��*�R��V����Ƨ�/]bOː��JJ4)�zF��G��8��(�|얖�-SYh�uJL���������G��fO$$�8������v؛���ma%���������Z;��t���M@ ZE	��~X�"v�]�I���`�4�(��Ā�D��`y)fv@R˒	>F��r��ڋz��7 w�~ݡ1�E�#�B����<�0��40��	Q�D}ntM��Sou(꒑��+�{ 9[��􋍮)�k�+i���;���8���G�Zң�§9�5�����k~�Ch� k�"�(�� ������¨�N��a�'��d�l��$yi/��4?��f0��=��ԫ��
�]��bA�.�륪VVV�2.!F�:Wj��~!Q��u���b�����PY�T[a��o׉0��p�w��PI�LzP����E�30
�Vb4������^�A5j)0n�� Â�ȵY���fd����c��À�]s���ID�CeK�y�|N#ؚ��Ӏ���}�V�:�4���h#�n |��u~���xtj�������[b���!�z���������WM��w�+N�6��ՀK�WK���s�����]{W��$�nl�ҳD��U>t�Ԯ��yl��m2p��5�XY�e�v��0x<b�䲋X0�*�3%���L��!^����O��V������R�d����,�"z]q�#!���5*\"�ܰ����eX����"J=��]"���e�{�j����?��a�*�a���Ԡ1ܪ��J+d4��*�_�v؄�߉�d���L�+��YK2�h4J �M���X��H��)	�';��5�J.��T8,Ѷpv�h����i\�Nq8�]j[A��'�&�ީV����jФ�j%�z���L��,�S�>���g��k�f���m�q���z' s��	�MFS�ZwUM�j����nF3��Lf���\�����fsr\��H��\U4�Q���;��۔�a�GD����OOEm��
A�ƾsB�!�@�0`1�	� �m�����$��C��c�H�h��?�8��oJ�0�-5��7|�����=�?��-.���>4�T�HL���N7�N���A�������W74���Y7���6�À-���+���G��/�Ȑ��0*,Hv��D}	�C	G�R�q2�_��Q��c蝡K/;̒�wB9-u�jZ�.�EV��r�y���⦡N؀C��#�59-�/��X�������}�q���3�;"/7��hdH活�B���]��������`�s��e��	18��u&ч�l����#�Z����c��qߍ�6��M�q,���tO�v�g��*�Y�O���^��F3���,,�44�-��Y���}Q��g��� �H>g��� ~?h`3���,���PU̗|:��bD}QG��9�D���	�`�8���o
��X�����B@#�UI|��W�@��Ŷ`���p85���o�����>��i����-�I�	`�����! ��A� �#�"9�|v ,����{��}e�M����|�L:@�13i�{sIQ"�֛pAh o�?;�=������N�	��<�=�\���n�F	����V�cn�[1G�K꽵��.�K&�P85�ԋ\d����a��15���|���L{��/t���n˕�D�L�ZTÓa��Mp�&�'��qЁo��C/��k�7	�B��DZkS9?/DQ����`A�nNKz�Vi� -]�����F�~����K�}�`ӭ����uן�{j�ݧ�-�~�Z��#u�YspLb�+��79�s,�3���Y��o^赓����n����koi4�>0���ؿw]!59����$>-A��h�70#��@�a��`�m�Ġ���d�X�n��P��$���݅-ꓢ����)���E�������"���������ж#�֮�I�v�M����:�@�biWz��ME�	q���]���y�Y}OL�Q�`��Oe��NAM�(�i��[�n���7�Ō1��m�}up_��3�i��@("R�<��|| �8 v��0Pr�FE��ҥ��D� X�F$?���@��Z�<f����4,Ϡ 0I6�6�.�7�����#�ژ�0���"/���f-� ��\^��O�?�9��O��jRiE�T�U_��jVJ��L�,� ��ҹ`wđʕ�|:`��ȁ2�@V�]��lڕ����<�q:{�nmdǋ"kө��y�A�ARc���Jŗ����[\��/�7��Lc�
c���hу扰��b���͙��[о��_a�a�ǰ0|;vó�c!D#�'0��b�0D��� .�ޙ � � X�N��DM>Y�5Ш���5�(�NOO�B�zE��X,�!��Ļ�>����|o��4=�E��=LY�z� ![n8FMO<�ܜ��,��y���B�Z���6L��H�R��T�e���5y�XJ��q66\�]c�	��Po(�^+�C��ba�LN��I4s1�˚c���-J:���x�^�p����]���lg�`zt~0b#��F2:ب�����C�������n�z����C��v#�1n>ě�� 
�A<����qp=~���a��0��vR�=6�L��KJ=7�.����vϾ���X���K�천���B<n|�}���������(�	�����TFDK�*�|��hI��t+�x�$�ķ»�a;ۥc�)s ��d�}4����@��/`��pЅp!W 
G�Yǂ*_����z�]p5� �g���"���d���ؕشGIP�c��Zo�od��݉}�Y	b�V����Ɩ���D����	s���8�ˏ&���c��D���W�Wz�ȝ˫�����d�2a�\����rܣeg
�_�a�O��+0p.�^�BB'1���]Iq�H$��CR���S9��b�Zp~s0º�bxg�,�赠<P��?�E��F<m'D���j"�i�2�Ntb}��q�Z~"�����F�H]:����?I��ܒ�� �~W��}g�k����7֗�.b\�r:�?���� ��ľ߾�f+H��N'/Z�d2�\����|�j�(�.�d�C��P�@�\!�O_.����"XU�"�F9�ܧ�!�X2������	��-�j�Lb�٬R��Y�*��C)��4�����3m��&y���Cu�g�f��̞���K�j��[
+=q���]$�e�>�=V��W�J�S����9�&�6��G@��pa(�p���?�����[R��Ƥ�
��x.��~|gW{<����͡h���?�kD�6O�1ႠgRk����݇�Tc4bD��,��X��c�D��,z��m���M�bn2��������ֱYl�(������Eb���po�/�x����<���D>7�3G�T���%�T�Q
��@��R�d�59���;
����5k&';�v�:�vq(�%�D������yy�ƌ� GǕ^Kt��b�4R�	��`z�ά<n�t�n�3�jmښ�E�y+�T�\��쳺~k6�!��+*B���\1ީ�}�F��G�)����­����������<y��:��7���G��O,x�N
:��E2�l���;^���0�� ��McϪoL��L8j	G3Q����%��v�C]M���o��0V�"�������l;�����}T(�!�IS�
Xr� $���/D)�8�(/B�������]Wj���j��>7��!��f�`�o��+9���v�R�)^��Q�������q�!6�ʅ�MR�|S�����
8&�Û�����d*��=�~�W�p�EGjL������H&m.���mlg?a&#Ib~30�� � "evQ�
ˍ�0E�� �'H�Ϣ ���XaU�颂:�H���N���-�����9K,va��ꙙ�
k��{"������C��	,���ڢ��Y?�!��?^Z���&�I!����ĻLF�Ҋ�*k��T�$C�&ʬ�1�I��$oJR��a������YR��r��	u3C���p��	ы��×n�x��1�m�����r�f�2V���;Z�: .���a���w��a��B��q1Cy|:?h��aH�mk=�=���a�o������!���r3��&� n?o�������N�t��ylz1��c����=�գY}~����
�:�����1�٬e��l}��J�^_��tH�F����>�����}��$#5��_���Z����!G{z��H�]U�o�;.�����8�?~��y�E���$��i�:=�Ha$ �=� �-_���z�
uP8K�+ȨE��h��`R��b~��P�5�^��]�G�'�;
陰��ͦ �u�,>=�mi;�z�A��f��L&���AyuN�)z�h��8h5�*��&�} 3#�7^�7��aN+�Ćz�Ț�k�����/�d��g�mq�� M�#*����q�B�+�<��-m��olvݱ���z�G��^�>��
�O�[���D�pT:��!�T������6��!���ȝ�!}��"�V:m����P ���RY����	�@�7��4���s(FY�T@AY�����HϹ�:���/�m�ޥ�k���b��dCnS��JUa����k���G���b3���ˉ�tg}J'��R%Hs6��SU$w�.�̸���<���X���8���G���4�?�ٰ�6m�PТt��f1��H�v�Ɍɠp4�u����j>��C�4`���
�͠�u�r�\F��>|��,�-�S�TMl=uj+����o#4�d�}���}���w�q\�h������,fV$r��$r:fZ��f@�~��E��.��.��e���Go��X�v�5|�İ�X��7�A�'���O��ۺ͜[��^۽*���=��aS������pM]��7�=%,��&�K L�2��� bk�:k�VE�Zk��jݳ�Z��V���A�u��?��$k�������}�������{I�8q�~T
�c�����`�XBo7�ka���f�-n�Qf �cN'@0} ���o�9��u@)�P�����#=�����y�Ae�)K�ݽ�Ѭ�������$Yv�W�X3E�j
���?!�9��f��`�@e��N���[���
��{sj�e�A��w�`��r{�D���AxB�37q@�6 �Sh�?*fgcemmE�o����S��!�h�ClP�&���8jܫ�~���7 �5��l�˞�	4�@��1�2o �`,���t�DDd�8s���23��\��Y
����p��C��1�Dl��t0�$/�hw�e���� ��<�����E��Ha�K��U�� ��G�ӯ�(:�(ş�
�d��D��KrH��7���38�!�O8��x1��A�lKOn��#(21�?5�ۋ���ǲ�m��c�ò��|8i`7Jp�]��=B���	�ix��Gp�g,�+9��7��gjS^ +%���vk1����;`]ޑШ�0̋�E�D���hV�PdtG4
5q�7���E�_���NS����bV��w�P� �bƛu5�Өʳ�`T}�.�49�{���p�Iy�I���׏��ԛ4���R�Y�S0�?s����	X�I4��F-�c��`�9aj4����8 ���Ƃl�c�`]�7b������H�`����ΰ��q��B�J'#�L0�V
+�6&�x��"4f������o@.2B�"!������X.ߪ���<Qjb� bP�(Rf|l��Gf1s��\Jn���L���A�J���P>PR���%�Gٳ!�"Ψ̠fePB3(6�9��ԈA����jq iU�9;�����"/q�&�MY��^�D�D����:(w�'��#��H8��0:&4��(p�	����ظhx���hyt�+�]<�M��� ?�v�3/e��I��Lf�Pw�c%	�"�����^4��xP����M�L�p�ÓK�C�����	�Ax:����^��Dx'>!����X&�'�����dsC�c�TF�O� 6�ك�/b;����El~�_�0+)*Ȟ)��0����������1]z�Ҽ|	��c0'54%ŝ��X��)<��$��4s	J�f���0��f#���w��B�.79��7+�ħ��\�s���������s!��`��cW`������t1g���*�����O����h� �{xy�G��K���H���L���	���l���{��u�P�$RB��X�� �f����nI������/w� �%�b�X9�c��<�Ӣf^a��<��ь���A��kko��W�)�.6�����p��������m��))Q/�MLf��ԕ����l��o������#���`7G�� �����@6!˗�d�PG�r��L����/���	�>0�1o�Xo�٪�:���f��vS��ڗ���C�#ӑ�c#���������{PO��*+=�f{�}�a��	_���o'ss_�C�"	] ��e���n\c����)�Rƥ�O�LWg��l�>�7%gc������7�X6����0�����$w���]��"��?R���R�]��a��-�.ݥ�t���]�Kw�.ݥ�t���WJ�g�忶��.ݥ�t���bE�w�W�^�@q��V��+-�$�!�/^*^%� �&�'�F|�dI露Q��鷿�������xn�+(��]˿�{�	�ŊeR3��+�y{er���,��J��?^j�>�v��Y}V���8XSV���h�5�j��ZԺ��rj�j���~�.ݥ�t���]�����aX"u;���_u聾:���E��h�����uVJ����M��a�ԟ�us̟f�c�5α���[ac�z��v�t����J�c��)���Y}��Y����4��⤯�M��a�.)��9�å��n�%�Xb��������__����, �)t�t��W������ZT7G�;Q��AuKT�խ �>4}��!Y'eH�I�u��R�d��!Y'eH�I�uR�d������[��oi'�ؚ���z�#��/���Q��N�lTw6���x$��&�=�Z�O����m2�פ����z�@�T��uK�-Mpٚ��xY��#�(,Ԋ�jL>s15�/քգ�t�Ҁ:|��~��#<���*�^�iQK>�`�P�.C3�@��
�+�AO>��xxr �& ���\5�����.�z0�1����X4�[q� ��\�� <�����Zՠ�6 �F�����?�����@���^	�DWI8j=�8�� F��_ت��Z�i �dHr8�7�C h��Q�u*$�$�^�f�1%�	%-C︞"�\�kA�_�Q��|�q�BVj��@M����{[�DՠO�֑|I��&d��E-���?��7g&�K:��U��!�8`(�j�tC11����u�-�:	�r&���?{�5zu{������:���,��Uy@=V����^"K`��*Ҫ4H*Ԏ����� �e�^(�(,�����<7 :��$������G�ބ�I��3��0G�q_�,[�(��y�zݳP,P!<��r�T�@���G�S�Y:4WU :�|S/:�
�J4���4��2�;���ҩGmX�����E/ˈ�M�����k�&�F=�
�Ou�s^������P�R�Xej�o�N��������Av�C����m����$�����>C\� �iB�_B����9%mO�ŪH�W��I��:�?��(�j�6�	cݟ�(�Uz�tB7x�B/e��0�)�rf�+C��<�!�:#@W�f!�HP]����G�7=!Eu�g"	�Ec���,9Ҫ�A	U���H=��7"d��{;���(15�N��1�zF��m���G��`5r�/����Ӻ�,����s�\��s�&W
��I+��qU![V���B<k�9��=02H��I=옴�z���A��9Ee�	֙�ߌg�.�� ޡ��X/���@W�}���G�No3!�X��z]�9�v���d(��u�3���O����@����XoD7���\]��o�m���J��k:3�A�,��K��-7��Hi��KR]�h��3U�Q�����a�^�Z�%uF~�Ֆ��TM3<ɥi��jӝ�hDrT��z4dx%��KFnB��C��r�3�&�C�'����2ā!�%v�� Q�"�ۯ��k?C�锏!�u��4�t]�E���U�����\�hTc�^����!��C�qӌ��Z�!�ec|4��e�V	��t�# }8��B0"�Лz���~<i���l0��8����v�q��ڰ�����Z>V�p�4�)D�sAo�����頧�a=EA_XE���HRZ�q#�]� ��rAK�g�Gy � ���C����g�3SO)�B�0�E9�{��g�'B�y�g��<�C&'y�#
 f��Wr��X?u����+�A6��S~��� P�g��"�!���ĩI����6�:�"5����R�2� �\��2�N��IZ�&кʮ�w�"����ӑ��Q��F:j!]�Q�^�B�ǛXK�%��,�Xd��Ld�$��$q��PB⃺5��`����	�0^�������C2�t����2{�!����j9��V�uM�r<]��Wk$:�Z��yuu�PQU���B�V�*��q;�ly�Fވ���UEpM��Iݠ���U
).U�7i��'�� �����j<[���������Z�g7ȴSQ�B�י©Tk�4EE�B*����5@�k��|T�%9ޠ��5��!(�sR�J+Oµr9.WV�e2��#{q�\+�(�!��L��(���"�R��� �Z)QA\\����J��WW�����o�ʫ�$<$W!ը!��b�FQǱ	M���Qn�:k�FҨPU�����v<�$�:y B� Rc�b�TXȑhdr��J��1�چ��:��R�ұ�2u��4�@:(m؍�ԸT#���,\����p�J��k`T
�@�-^/�(: Wф$m�� �h�J��?�>���kԲ���C;kYp��B�7V+��&�5�
���A��@�ZUׄ�(BI��L��Z��45r�N��Љ .7�JBQ ,:�jY� Xe�FU�Z"�*=	)*`~�5@�t���er�&�S-���*Q�Z�&�t� ȧZQ� 4��젩U����� ��f�-�U�2��A	!�:]}bd�\�nT�*��2����TE�V$�Y�w�P�^dZH�v/~�����ȁ3NB1רOP4���:��H�]�������@�h� ���`U�F$#c�����z��M���
h,���[UP(iv�׹�I�Z�T!��!SK�@#2 (��dB �.��"}�9�(��@������j�mbn,��A��u
`�$nKC[�9䐅+�2E%��#��7 ����a����Zة��a$`\+�@���K魤�P�N��4"��Z���4hT�9 S���h��Ku��c`�2r�D��%��r���tDt��NK�i�%��
yϕ�0���� P�@E�yIG�3@�����̢���Dx�0_,��g��<h��AQv~qfyyEex~&��+��
�2X8��@���|!.�-��A� /=�8C�����uy� 1	�'�E�8D�%�� �\�0=4yi�AQ��A�� (/�	���9<!^P,,��� 6O��)X����"6�
�p�4pQ6/'��ꅈ����2� +��������4>�����'Q��sx�\����e�Ѫ| E����+���.����	�� ��yEB�d.�Eƥ%����H�0���+��.�OB��ƻhL��b���>/��Ŧ����G��Op/�B��
��bv#5�}�����tyJN�K[G�F�^_�6�>�>%�>%�7d�}J�����w9�O��7O�I�u��w��w��w���ͻO̻����}j�}j�}j�_vjn����ah_F�My������1�>�(z_z=�'����u:��)k)�h��<0_��[�0�ϋc�k?0���(������NU���j�z
x��4JOo�Ա�,�����Ht*�FR�����f���p�����L���I�zO3�
�=��ł���=
t��R(Q6���Y�=��a�s�ps
��G���DD!�2��Z�����B%Z5"L�)�~&��Α�nyo��ٝ���8�䛁GԞm��ED+}7�J���F�P��h@��/����F��-���Z����I+��3�Ţ(�6,�%m�BU�S��	{�i���eJ�J�Cx�k�K�A�ɝ�(?��������?B��(���t��fK$qQq����~�o�$Z��-���p܆A���G�d�G������">��%��NF:7":��H0I���ʐ�<�'Z)����a�V�����
��������>�5��~~je����^_ݷ��˻�6=jݱ���-]bk#Mt>rm�s���������~oiҪ�g�!�A�c�{�_>jͿ���H��o�:~��˾�K�ϋ�G��q��_��(��_Z�q��	��bڠ�#>��Ҽ�D��Px�`[󒧾u�]�U��Ju��{�GE�L�L���������]�ZZ��j��w�^2}&}����i[�:������Z�R������E#9�gN}^��[紾q�gG争n���y/]Rty�����i�Jn���b$bFx�z��]��S~�T�KJ֮9�l����*��hX_dB�L�;���̌y��0�޺��oCk_����@�	��\�/!h�j��M���j��J���R�2��V{#�wc��F5B-"%�d�)D��%�K�k����mhԱ��߆@���:���Cԃ�Y���4h%��{������/����)e���)��9SNO��.�'�뀯=��ˋm�_U��X��W˾o�}p\�Mu�/�����!�u�ۏ��l�]��U�~_'/�3.u�֑N��'�M����qGD唹gZ~�X�e�k�.O�9Y�����v�νU���,M��R�������[��)������ً;���M��N�k���L���K�Gi�(�es���.e*ǹ����l�7����==wH���>Ϊѥ>���5G�]�z��p�����;�>{���H�$�E<�jNQ��I�{s���-7_�(��Tj6 ����Ċ"�tz_�q�)�н�Xx+9
�8">*�C�C��&��[�ӏ��`�_F�ql
�c1ens�ˋ��/4�X�-�5nf��%���G&F�}>�������{l�ʼ�oΓ����X��W-zP��/��z��c�t�����.;s�����IwV�����S�9���|����x|��-��>�r��������>�}fثI�W���+���v��n��3k�O�����!�~�y}gH�ᑖCu?:f�����Yb��^f��ݏ������g�:�N^vm�ۮ3�zS���^Θ=�/��tw�bl�vѡQ���-w�U���a��6D�f �w�pÍ11�XR��J3	W��T��vp­�U��8�e��=�ل���X�I���#l��B��/F��4c�s�	"�.�'b*�rIDLBELD':>">:�!��FUJ8nL��K�Vɮ��l��-.����C�����Z�� ;V�o9|� �"�x%&!�� +&!��/�������p���N%�7ܙ�J�`殾�Kv`�/.v����o���y����Ct@�evz��;W^��?��G|�N3>�ǹM��V�<��6���1�9��\��>�o����X�86�+�X��u������c&,�R�'�k��!�oε:���[�`J���	����Uz�Oa�.���R�j����=�@<�|����ҍZ۫g�9���/��J��R"hd���q��-]
������P3��O���Q�߻��6�ۑ���EY�g/U�T�4��@��f���6s�_����(��5���=�f�Z�Jv�5�y�αG���ZY���!{̰�Ǟ�����;��7&-�W��bs^�K��ˏ?rɍ� ���W��_�/�+�$����o�m��2��}�g������Ǚ��������Z�j����|;S�����NY'�����7��Id�li�zpA�ƌ��m6��W�����%���{`�au������~]K(��>�9s��m�{_%=^��3_/����-��z��As%�K�m�����������R�W�<���	Ƀ�݉���{뇶C[S��=��N�����귴� 	X�$p�L�����޼�-G���jZ����d���4`�Q=	�.�VFcfN�̀θ)T�A����TH%:9�k�U�5
]�DCDGq��D��(Ԍ&`󟻄�W�}ᢺu��gO{������+W��)d�:z�=/����ˏ���x����f��{�M[={ �=V��;�pxbO�}o��������ʋ�����o��[�hSth�s��V��9�6���ٲ���Ά��)Z;����Lv��c󋅶�h��j�N%T�?,#�?�̬���f������F�R���l�OVe����Og];i��g����{d9[�.�Q<�e�w��̑���x���eoD��5>�xQ�G�]J��"	u��ݺO歧��[���ٞݸ�!��YN8#�A&���W�0|{;�������V���B�=�2���-S��I������-�u=��"첵hFٵOI?������ش�uQ����r���,l9Q@&�P[zol�_�.6k F�QB(2I�D&�a����kb�G:	�/^Y;��`� ZF셛_�j<��0�����_i�Xyt�;S6�O9-����TB=��3
�\��Jɖ5�s�.{S�~�e؃	��$Q~��}��فI�W��\.䯜v�Ƥ��ͻ~���<r���a������ڰ9l�'W귺�͟\k���iQ��U�
�oUHu�=O�b��yv$��Ш�p�́[�ɯ�X3.���L�wv����	#�q�-�q{���wN�4~�����Oq�v�?����ǽ��,m����l��#�����O��<!�ԯM;>s^zw����F����>J��{6�Y[�Mo���ΈW?�T�ݔ�o�)h�M/��!�2ӝ����ͭ:�0�us�_����4�A��K�~sˣ�#�S�8�9Aa���n��.�8g��D���`�y�_����׺+���u5���|�Z�X�㳬{N��p�ֿ�Tx`"�`�����;ɨ�kʦl��w}��C�/�����>��v鰕�m3<���>��?�󩥪����mwG�;s�'���_?>����mFP�Iuk���Q�����p.�sѹ��R�Ů�K^�ÉV�
C*��z����7�-���P�!�!C��Cv��@ڈ��2iĢf���������A���
r�����k�ثΩ>ku̍����R��i�a�7�|��<ރ.�<r��υ�گ���܋�=�|큄�稴����d��7}p@ݚ��oV:qi�h�5kϚ�V��n���̲C�=�nV��#r���Ҳ�������e�VV?<�|�8`�����?��>WɸÖ�I"N����Ջv�4-�ް���h�>=��oW��9���C��蔸Q0�\GG����{g�;c=�KY7q����G{<XYvmjR����}S^qN�Ӓ׭_3-����Y����q�$�d#E�?vXՓ9���ʹ�����;&�1q��[w����C�<8;�O��ﮛ�ڋ�|E��o�����qW����"ܻ�$5�v�������W�:f6�?�.o���Z~~�K�6�S�}o$,r��luߔ�.�ڮ=��?jn\ڑ9g���^%�GM��+ ���|�N��k^\X[ye׬�w:�t��!]�Y�|DU�OT+_9�l��v4����P�	��;.��1��Z��;�4=R7����0���8x�ܔ���߯�vqAޣ�k�f���>���q����ΛoI���������T���5&B7��1^׼���l���D$R����l�w����QǙ�c�~dr�'��m�m}�
��C���k��7%�Dt9���� �4'$
�<�4����ܟ��-!�8�e�2�h��($6�hE��Q)���j�%SK��3�R�i��k��:%���J��ppo,��O��ѽ:��nhi�w���{�l��m��c�����Ƀ}�������������q��v�.y9���t���rԫ��?[Jڑ�b�C�y���Y壧���YP|�vڻ'<�z=��6Axl��ګ)��y?%{.=���qz����Æ32F,��5��� jf���|���v^G��j����԰�R���J��7{��Q�vNy�~�Eұmܻ�����w���~͜�Y�s��mX�?㻇�~�޾���|!H���z�׫V__��y�q���xΐ`���?��J��ח��V��o���mf���Қ�ȭ��ٞ�����^j���C���/�3PX1v��4v��K�?|��u�����,�u엁R�����b�h~�|]���v�dý���o���o��Ey��Y�.0�vfQ液���Z��v���{ݷn��T~����/>��y�ߕ�e1�/x��vc�YWn7��s+nN�{��gڙ�?�y�b�m��[��5/�z��K���������h.�_4��o�]�����>=���]���+"����L;8oh���ڗMwmS*k
����D�����ϩ
�2��N\o?��7�ֲ�[Ѣ��x�'^��@����eE�Y�Eۜ��>��P��tQړ��<�wR�����,�j�v��x�|���"�ʅj*8svHeA~zQbAF�Z������� �+޳�{��i�//��ި����|��3��R���}��Ǫs����k��N'tsxֻ\�nj���)9��n��Y�Dm+ח'����r�)M�[ȁ�V&�v����Tw��{�g'�	Q:|j���O;V̋Q�L��o��ꦫ1縘�C嬲��7����A?�k>��~>y�#����tîf�;�'�xr�������J/wP8yq��j1�㟙�{(]������	/�%�����j�8[�w��5>���)<|��]�v��YǗ�(����ӲKga��y���#6�&&Q�� 8i�XG�DR��5�@N�܈	CF��pVC~����������	����"E��l+�ˑ\����E%}v�VY�.(�h}^��������_�P�ט�D1݈����w^��^���w����Ŝ�g�׋���C���G�'�ٞ��G�ۘ�{��ݜ���?�5��n����`�fw�6�n�cڔ�%�r���=5��ͫgo�<�eH�9Xw�T�"y�eG�z�Y�禞�e}���Ķu����D˱��ܙ�6��i%�[=�i�;��0.6�~H�_�Ϭ]��7����Ɣ��O��s�$CTv>䰻uc��i��.��Jt/�|��»�z̚��/��d.�4s��]�'���x�X�� ��2
endstream
endobj
151 0 obj
[ 0[ 778]  3[ 250]  9[ 778]  11[ 333 333 500 564 250 333 250 278 500 500 500 500 500 500 500 500 500 500 278 278]  32[ 564 564 444]  36[ 722 667 667 722 611 556 722 722 333]  47[ 611 889 722]  51[ 556]  54[ 556 611 722]  58[ 944]  60[ 722]  68[ 444 500 444 500 444 333 500 500 278]  78[ 500 278 778 500 500 500]  85[ 333 389 278 500 500 722 500 500 444]  181[ 333 333]  652[ 505] ] 
endobj
152 0 obj
[ 250] 
endobj
153 0 obj
[ 278] 
endobj
154 0 obj
<</Filter/FlateDecode/Length 356>>
stream
x�}R�n�0��>����!	!$}��@�%E*�2����j���ή�0nQ��wr?�@k�P�q&an������!��iA�M�F8�j��q������)r?Uq���v'6\��q�%��+�}���M�_��O�s�1hՠ�F�5= ״�+���4�UϦ����`ߚ��Q4dïञZJK�28{�/]���4Ҩ�R{^��¯��P�Z��Ȩq��m=zZF�2�$s4&+�z+����D��c5���:�&�G�ꌻ���Ϋ���5�+���jt�(��Xd�CB�e�ܢ� [TX%yv?�'%S[n'%���_����ޤT1�4�Щ�8����]���F��
endstream
endobj
155 0 obj
<</Filter/FlateDecode/Length 31041/Length1 99688>>
stream
x��}	\\���������0���0�c���a�0�kLB��!��$&�%�dq���q���ֶ�<��֢U?�.�jk��I]�4q�k���Bbl�jj��s���s�=��s�=��0 � QA�����g3v^DhPOm�=�nG�� �f ^7��m���[6q ]v�O�Ɯ�  ���`׊�U;,o�<�]�uQ����X�~:���%��]��n{2�]`�}��K�(Om���!@����3����^@�询�ϸ.�r�s{V�^�yC�߰���/����|��M x�3���������/A{Ǌ���⟖-�������\�͓�i@8����U���]�8�j����UKf���B%hl4GW��y�%��(�y�����Q��w?/;03��!,ꁃ`;͔?��������i�0O� y*�d=	�0��(s`�G'��~	��d�A�ޮ�a��"����.�S�y�J�s�}�����X���80��A��c�Jy��^Z�?��Kg
���dC�e���Y��[��?T�`�?ӎ?���������`٩l�?�[=�����~6,�g�q����=����͠wx��8�����������
�Ne�����>��}P��է���F�vJ�Ѕ��Tv�Im����j�?�L�8�!q�C��8�!����9�0&������c?�R���?�⮇ͧ���6~ J����~zG�8D@�$���1�!q�C��8�!q�É�Mޛ�+P���ʻ��[
+Կ�Q9ƿh�����P���i�?�}۾�7��-���Ԟv���7�?���%x��>P��^��\�s|�%��G�p:�ĸ���m�?�ھ����/N���w|[�������{(_�f�kL�M����p˘������O�C�	��_��{��;#�5��a����M��]��[����ᯫ�C��8�!q�C��8�!q�C���|+<���w�#q�C��8�!q�C��8�!q�C��1�y�\D5� �+�� @��b+�'�5�(� 
@L�Y�`��7׎�2�&p@>֗����k���� 9ٔ�ך�F��rF�������!�kGʓ�
6���UXm�S �BN�����r�
��s�P9k�I�*!g������ɐs�0rn�s�0r�� �-�r~'�Pj�p�P�wuPx�P�?���B#��0
�
��H{'������Ǎ��8D��)Gi��$"ω �0f�q���ȥ����.�C�^�S#h:��(�CQ\�xA���wD�g+�N�_�����㰮A��[��^��.�~���G>�!h�"oaZ�YAۀ|bej��!h�����!ț��Ź˫����`���W�X~޲�=�.�u-^t����u��m���|���Yg4͜1}Zc}]m�\]550e��rREy���[�)�X$���]�b�ӑ=!+S�H��Ҭ�)�sR��hH�������b�koX����X/��q��Y��hq�<�V�ZR �IImn���C�H'��Vx��S'6�%8�?��ΐ�����oc��Fɨkw:�s�gV�gf�#���Q�"�
4�S�c%*��ف��]�+vt�l�{ F�N�l6����H���R�Õ�@@ɗp f��7�($�S��(�:�||�پʓĠ!�Ll-ň���bz8Q�#���[|(�A7)Ϸ���ĺ�T S@�5�@�����0�36L��@g��%��6P\�ț�(��7�I9V38:�y|`����"�P4u�62�RE�T`���h(�y����1$�:�+|'��j�iS2����
�B�8�r�3B����c�����tяӇz��t���X�u��}�sHP��7(I1����w>�`_���px�Cف�W��7��n�7tְ��.�gl��n�b�#o�t(}��E�^����w�͊�/N\\l�FC
.�C^�I�ٰ���ͦ��M���aY=E�w?�����zĆc��Q�]'�u:�t�6��;C8�Ȑ������$���S�6Ơ���(w�wDUQ�y��	�wt8#뎦�ֵA],:�ԣ֥�Jf�3X74������^`�W������A�����Ď6a�A!��9bSKd��H�-r����GӨ=�:l�#���F�17���p0�98ڷXt��p��^�t��OP��&Ai�ܡ��=d2[!��A�^ck���2�.U���3�8�Eg�ഌ�4]u�����3@�\�| ǖ��Ip4�T3�BP̕���������b��<+sй@O��jX:',ܙ��Cs`KT�N�Nz�6ʰJ_K{����� �	�1Hk�b5ֹ��/V3�<(��ٛ��b���a����{X�Y�)Cm8ǿU*���ҧԵ��8��R���,��$֐�3f�,:^����ڇ�@��l�TG�f�DOf�W�ͣ�jVH@!iT�WYz�m�X9���`t���V�2��|nhcqzB�ޒ,��e�-��]��\	Έ��%��f%� #8^��݁�On��؊#X�RB�0^=8�/XOS ���-�4����Ģo���p�_���g2z�q�r얝���h�*�艢}͠S9�~,�1\|<xN�$�;n����������Ҹ�X]�XfhkW���Hy�$�/N?�zF��Ǖ�e(�t��p�^'h ��	��MʙR��,�D���M��m�:\OG�����dq��2�!f���8�=Y�dh"Mm�M�ڬ��Ɩ~�l�3�}>':6��p���v��b]�|*����Z��-PO�X�1{a���jUL��]��N���":s�#7�H���AU�F�Y�P����"��Qk֘i�』n�*#�4�r�Z��z�ș8�$U��q���m$&"���V�$}�zY��<�F-�В���t8rj6�����c3�;�}��?�hQK�`{n�v�LH��ۯ��	;�V����ż V�U8b�QI�k�XK��T_�k�^+�b���⠉21y�����	�6����g�-��q-@��I/u80�D�i�����uu�q�C�ӛpFW��s�&3=z�G=�E#kC�Plԅ[�Sd"�1��u(��})u�p���tq��qG|�ݴ#OG8Y,e��ƥ$�6P�Ǳ�k�i,bg� i�8�.�������GY妟!���g"���a���H�1�}1���L6�C�h;:"�g�Q�۬pD�q��6��`�:�l��Rӧ���Ah/�F�<i�Z1�ftb���7�F��5F_:��>��h�t�F�:�68�S��90e��= >���>Q���kGw�������t��x�Lc|~����̾��vz��~��T�{F����2�t�w�8���-1N���[R�۟��t�:��HS=Mj_kD���E�<l�+�h)��a����=c�F���8���r��Ʃ,���Wc&t����,N���d�x� .��A������.G�b���o��0v����2ړ�R:�%���	��(}͎`�#�7i�/�x>�;�t*��I����|��κ3L7=��UP�xO-��ٓ3�I���1��	�pX+�$7�1�w�e�?�$��W���������Ht�7�A���M`��y90.���=�/J	K89���1)/��D��:+�w��l�;����g�R:��]�0r(�hVH���c�9_���W{�m���F������P�J'OZ�#?�\<�����qW�Wf�µ�^$X���[�H3԰[%z��]dc���j����:_��N�=� #��d�c�|�Ą�ń�Ƅ�Ą�1�PL�SL8Ą�c��1὘�nLx'&�1&��	�b�k1�W1�՘�rLx)&Ǆ�1aGL�!&l�	ᘰ1&l�	�c���0/&tĄ����c�1�)&̌	1�$&xb�ĘP�1A��(�>g�SF?a�0��=��F?b�=F�e�F�3�F�b�7����0�{}��}���}�ѧb�����݌�3�������net����h���]��u�^�T����c���^�蕌.f���fF�3Z�h"�I5]��F� V#����|ĵ�7 ދ���/#�`�>����6��
��+��#�Ы��Ы��Ы��Ы��Ы�� �P��eh]��eh]��eh]Z�U��!���4�q��*QՇ�H��CG�����w��QU��C����=<�ZU��rᰇ�������%U��<�$�HR�E�D�N�{�v�NB���nhY�{�$�IR��Ҳ��Z��l��lDb5♈�5�6�C���]���}i������+҄˯H�W(_t1���,?�y+ӄ�V�� ���Tk��ː,Y���'U��Y�:#}M�eu��K�k��Mp"�H�����m��#����݀<�m�6��؄�SBz/�����@��`��Ŷ�!���������
۩P��]�]�K,qWsW��U�e�'qWF�e��L1w.��rg�%�~V�Ϲ��ڭD���������55�jHG|���R,��҇�<ww)FT·�KY����8.��K��X�%��o��Eȩ��(_�K�v�ȁ�#�|���TPӌe�)�r�p�0�-\+7�l�L�Ci�f#�@���܁�E�b�N,?��������<hz�FDO��/� ׅD\�؂8�����q\(	߯"�*,�YO�,��+�	4"}���`������&E��h��Q����k�8O��8�'"�E�R�bC�4����H`C����	1��^j��rf�ur��9�䨾2�+��<�Q^m��򒨾 ��93N!\��2���Jq�6�Υ��8|sD���\[��o���pq�8\.�ǆ���z[�p1��S6����\ą�B�@�!u s�,:32;��"h���(?9տE^��&��D�{d�����ǌBN���1�2>/���Հ����=�_�?Z�EE��	O���@v������&Lcʬ��23sL)1ejFT�3�D%Y��G�n�yJ��P�I ���LȦ*�q@0�<��v�"<�5�/(l����g��B~��4卦78Y1��O�%4�'ݛ���������N�;����7��ݡ���g����n䥍7�~#���w�W��2%���O�v��{�$ș��[�4���[9�~���o���o������<A*H�)VI�p1�����<�"�|��Af2��k��2����J�I'm8�6��z��-��tq������p+rZ�a�:�T]c$;����^V�+�xɫd��v���O�.��a�&�e�-�מ��E^z�y�$?�̡���[m�?��d<-�Y�����7�`�Z0�����}������[[�����Q��^[�����Z?��X�}�r������Y���j�F�:�?�K%��K-����[�i�gN[�y+�.7UT2כ�$6��M�{���%�����0���C���!��I'ޡ�ah��e~� �F��hi���i^`�;p���Av`K���?տއ��z-���Q]�]D��Z�v�+{�:"m@�{��`�݌u��u�q�XG���0�j��Z˭�e�$��Xj�{��+��B���I�#%G8w^b~^R��X$%刉�b҄�DGv��j.05�������>�`�huF^�6�a����U�$�����0SL�z���1�.Ic oH�S��|�E��p����߂q1�\�$�,�]�a��m�dU��s��#��q��#��T���:��wD��0�9�y������G�9P(�܁�@N����5�H
�� � ���k#Jr4��*)��Z�'5��V�TjR�����	�ځZ�ۈ'�MQm���6%�n���A�N��	{p���\��C��j�PӜ���/��C)e��m(C�Rڢb�t2X�{a��鍪�?������S)j�K1-�!bm5����礽����0	z��^���=��$}P��)1�k�o�	GMz�Y����7f�ؕj\��	]���Z���&%�ڤLh�T2��&�y,U4�W�Z��&��s��Q���~�����k�����G���WĿ F<��'ă�?F|�=�w�A�#�~�}��!�
�Uė_BF܋��ĭ�ač��#�G��؁؎؆،xb�L�
�D�D�"D=�Q-/}�4�I�p�P�`�@���{�wC�����z+���k����Ћ�Bχ�=z:4�E���ݡ�Ю���C;B[C[B�C�B����u��B׆�BkCW��-���C�C����Iw�i�������!�\0�o� �l�{*�/�<��5�nJc���c2���&~*���:z�����-�
��X/�(ү7A-\5���?�y���a���%x~�2�	�?����:��\���`t�@چ�y0��9�������h��/�ݐU�pT�"|��/��ί�3�rbOw�L�W7�lo�ý����{�o0����e�v��mC�ô��j�pl��հ{���a��~��O@+ܣyt\/]��ϸɣ��߫�=|K�����A/\�� _�ᆑ����}���,��������|3[�S�c��06���<��ql#.��Jb���	R���Z�c��+������� ��V��\����OlJ�I��e0�$���[����
��%����~.�����]"�A�pl,�
6��� s⻨���`%qb�|6;\��w��x����x����?�}[��|`���璤�9���A��G�|�$���HL�������ÝD <�����L\�x�9������ Z��MBN=l�Iݭ��~u,�۷���Ɠr��+q=�g�)�	E�K;��?�=� ��>��~��o��ύ�5p�A"��w��G_f��Z�l����wx��1W�!�!p�/�Q���P'���Ǫ�������X� ����^���{���Q�C���?��U[Թ#�G����M�-���;����������
�4�a���U1\�;џj��Gբ�_5OU���r&�U�p6�UA�/ϣ�}Uo�zU7��R��O�/Էc�����cn���_U�$���6ȇ"(�2h�]VOY~Ae��eE��bCQ���
�_rJJ��^���z�ԃ��߿1\jI&6��<l���å��?�-!�eUܤ*���-�$rZ����W:���b!��ZmV��X���$MZa��-$�T9Jr�����u�]U�I��"�۪M�F�<��;��$���
���=>��Ԛ�[:��	�Y��w��Ɖ΢��L����yW���KT��'8A 4�k�sTܩ����)e��>yzz��eH��s]�֛\��y�/�	��O��ٓȬ��l��4[9��\�!���>ɳ�V����|��J>T�|�|ve6�%�oG��D��O��vqvle�y|� �K�#cI��٬��*��R�<I��/�%�.��ʝ�85��<�Ao-(Y�/2�5���5#�,j=��\UhJ���I7YD�!��\C�����{��r�F�71���������t򇦎�h��h�9o�L���Z���_��a��U��6��(�ʢXly�lN�Yo��R=v��M���dg����f�fg�t$a]rj/���cLE���Z��Q��j	ÑqP�$�?"��g�Z�{4�6���{n[���n]���/�¶�j����=��b>�|�/,�8)/�s��et���0p�������J�T弊7��|�NѤJƤ��K��>{y�r����ӷ~媢ɕ��DUu���	�����_6�.?�P�p���.�������j��}�\�:<4�|�srI����9x�'b���>�	i�����v�+wg��!WR>t��:.�ש������ds�t��7��z�� �$��08��n�����������÷��yx�9->_�{4z4d4TV��z�s��Qtm��f�a)c�q���<[�+�C�f��[Z�n|t�M���'���a�g��;�6=��Y�vڍ*�w�GS�4�nV���
oasc����78�^�1�Q�H�g{l���E�0��⻐r�Jv�2���l��쬷D^�� v��������Cj�Mp�H�S>�S�D%o�/r�n<,�hq�y����dYY��\XF�w･��u�+ʂ����.y��F��U3��?Ev��.*���s}���7�����g���<ڂc��ٗ��<�n0���:�<Cf�=mg=�(��z/��f���PQ���|b���+�ߗl�[�A�p�	O;��9�	��_Z�	��v�e����F~X&Y̅��d� �\Q�d.*��L2k#O<�Vv{Gd6��t��&��E�}^S��?�@@v�:�<�����h�������=0Vȕv[��[�~&{�`tp��������f�����F�K��,�������������'OW�Δ����X$"!�|���9~����D^k����y�yyŜ(Zi<x��"s��`4�߲{�]�n�I���9YRI�hє3s+��'{k�m\'_�67�4%��/�8-P�gӧ4��y|Y:���6WOJj��g෍�^��y��濅x?'�۞�S�>�V��W?�$��hrX�,��։��d� ������ޗ�	��I�LƝ��#���$�����Ȱ�����4.�ϣɏ���{��	��it�崱�f���r�D��W<���y����:׬����0����D�Yg��>�Q��to��X4ߓ'�=�%|I�u��K��6Ӕ������k/����W������T�]�$��E6��$�IFR�cJ�9>fsv��>$����DwD����j��fy>�W��*��t^l���d+�O'd��G��CSR3M��;��r�MJ4�䎼�J7i2���g���6ݽbN�ϕy��m�L��Ov�o^Ύ��N�f|�Au,#gpZE��<ɟ����]�^�+�D"���Փq�%̬�Fm��3y�O��17�tz_x^=��&��������׍�3܃xWҾ�e�����HG��W��j�:z���B��B�ԡ���K38k��t�m#�k�^*�,U�a��O�fk=Z��k��n�-U�k2%�f������̄��ͻ��k��[,�|�[�ϳm����,����7���v�vK�9�DN%�������j��w��$\�@��>ϥ��9��;�@ʴ���J��S��5�œ;�-�H�x�s�;\�vٌ����$��#.��ڹs�[8k��Ο�K/��rq�ʪ�A��od�W��8�R<a7�bf�;��-N4����l��T����%�l>{�MV�x� 1��b�x��J����RJU&���-����q!eKNNy�VA(/��}<&��=�{4��h����X4�%)cO���:���b^�/--��D�|,F�R�������k��j�eK�-˒eK�"ɖlɻey���ml�`ٖm�E�k� �l�%	��,�֐�IZ������u�I�h�����KMҤM�`��̽�!��K�~}��F�Ν9���9g��^l+�ѕ[��9�������?�1tl�ቇZ�i^�2K��ğs�����=>_��4^=z�Ϭ��@��}��&^������������ 	��1�pp		?�6����K��#t�r�"a�'��H�|�(���p�u!���O��hȂ�����
_�Q�bUd��>O,ŧ=2em�YH˷y4���U�H����������܁���+)�Y�Y��mdo"lo��@�y'��{��"e��˯�|cϘ3˭I��~�hӦ_5=2�Z�z�ɶV{����vp��"�n����b����2�Vt�n|�. S�̇�& Sv��D��I�(�dJ$���(�	�;��tV������Q))+�[��(�dJNf��ݚ����`p��}U+!�9�a��-�p���c�ec?[����%[:�׷f��8�rf�F�h���?xj���VN�_3��rN�]e�V5���1�{��o����qo+�u_KpcO ha��kȲ����*�FE)�ײ0����c<1���X�}���,���|>�3Y�X��'�` ��	��3���NJ� ��� ��'��0�Nj�R��P)q�z� E�eā4�����dC���`���V33X��^�܆s�����G1�gXa&�7J�ϡ{��)?g�u��$^ ,�s3Y��#�0.��{��b�����׉�P��z��6�� �^��bf����[�@;>��A͛�U�e12���cL*���$��bR�zp�o��K���[��Z�ן���
�,^N�v�s�EMe�N��.âC�2�f��E��iN�g��.�R���()���#��{���]@��ܘ��JK%�'�ǖ�/3�V�P�m�+��� ʲjlk��+Q%��Ty{u۪���e^�ބ�xw�9��+��hht��@�bV�B���Űd#�]�^C�I�&F$�7����~/X�HP�]��)�R59�TZ�����
�F#�=k6���b�ZzV��k���/[�ɁF�v脶c�1�w�J������2�!�|(c.(��#�b�'ȳÃ�0N1�������T��"���kc������U�u�m�ykn̮*�oQ	����W]�V ֕y4������5���Ά��2oB5I�@�T��1T����@�������T#���l�����c����Ǣl�I���3����Q�π���4U�:V�RoH�R�G���d��j�}�bj�i��N��i?�P2�ݎ*��N��C�����9e�e��=P�]B�!\Q8���jL��b�C�L֊84?t�%ģ9"mr���1������g�z�>�����Փ1����-ӓDcޏ��ٍJ��*�'�<Ԟ~���;�!���:,�#��"�>�i)с%�S�s��;*nP�N�J���䠽9�" �z"���ʿoj��p�pgZG�g�r�E�����hG��[C
��tϝ���лo��M|;�
Z%èӠ�K��=Qf3'�@\'2!����D<I�9��ޅS?P�S_�4���[%D���0PTH�O#\ތ���K�0��L�*�S*[���S�A��RSC?��Bj�#q��U��~7�)�3ʨ�tNLZiIt礛�����6�d�MaMh�ߩ襁�g1�tM��r0Ni�[��	���*\RS��Ӊ�+�V�L��r�9��f����D�\���j�\���MU�VWR��r[UA�Z��t�Ц�:P�^��x�z]�]�ݶWK��ʦ��ʹ$��fu44���[w>v��x�cCG����������;��}a	軰d� K�h��݃�*��
��0�ݤ�Q?��J���,�݈g�}����)�S@������ue�D��L�������H��zk{n�.���g��g�RD����^�����/w:���z()�S�YV���E ^L^ˊpG�֙�b�T&:L��?�+�R��H�\ �8?w��	�'��&]M"�v�v@�R(�K��,���k��i钗^�^�����L���,[�Uk�j& ��`E}
 %3xd�Zmbԃz�"��ń��8�P��\��\��@�/�QF��&i\�G���+��z9*�:�y]a���$�hm\i^���Յ�J���[��$�7m^�#6�yU�g1���b�����a���K�(���x� �[��dY�A%�:R�d�F���R �l�7�mDxk�K|$\�S�US_X��������L[Fu��וT-[���`��P��x�mu�7��M3���m+������y��(�j�i˩��Q��p�X�t��%{T���Q��E�ȼ;R%��x��"�Ӱ��F!"��l������*W�b�p+���«�WTiD]G�ۻc�b7�ԥ{��R�R�-#�7���;2f���P�o�_[8�s�H�-���ʺ���*��4�x��v�����}�G + ��UJ�"�&�� D $�l ��kt��JF�i�Y���S�B5���E�k���^}ygNa��rU>�{i=�0�!�����eZ�����O�)�ϐ�w�1i��^�榐¹õ����x��y3b���ĀS)ފ����x|�R���;q��,�� zm�Q�֐��x���"� *I]J(���W������cf�R"!ά�R��\�WiUі������dE�-ߘ�ˇ���|�� 
�����F���$�t���I�oG:�
��������:��n�Yt�Is�s���hy;ͧ/�x�{
�L�Dź���o4���ۖ�o�NƤ����u6F?�դ���Y��
������p����;Ne��뇋��E�D}SG_O�p� �<ȱ`Y INI�tZ㙨I��q���`h�Q,xg��o` Q���A¥#�.�E����Q��';�z��xl�#o�&�_l�!KͭM߱��O��8FVm1�����_�[���/҉D��<��tg%��t�[#�ܰ��:}Y_nG����μO�ЅX
��b,:�܂�ԙ �m�Z-�$�� v�F�4	�a.9���,7�})�A>'���u;w��}{�ەih$�5�
	%��3o��>؟��r$�:م��+n>�/�����8NI���6)Tε{�:�
���o7�\�@�:����Qs�4n������_1y�h���t� ��S8�� ~3!dPԀ����I )��B��=����o~��u�j{�������[�-�G�$dL����_l3�����A����rh��|���]|m�Ol4����dc�~nj�h��;�֟���N�ń`c|�L"1��|.��_q���8X����r�ܐi a�I�<��<��OODH����/D=��$2���E��Ca��砍2�8��$�����v�ܡC��C�XO�<	��2,�ˉ�������X��Xo��J/+0�%B�iq����(�hS�L� �9���rxF	�k�\��0u��{��\�P�n�IkF4��a��ehh��P��_����T���(���(�=ԗ���hMF~ך�5}?�÷�J�,�Sx��\�1B��HFO>Zq��!�ǡؿ|�_�TS���ەz0�D�G�4��+�

������%����v4=JKÊ��#r�$�lKϞ���)�(�4�ΤLR���##�N@d<�;���aB���`�)�@Sg�vP8���q��'���0Xo�7KH�<���pb�܈�$[	���8���Wgeywx*�6�����>}�m>g��#����Y�����[��xC^W��K�Ze�Qr��/�ʓ"D�$E&7&���$%�w�dˎ�{Jh�Bz�u�7�W�^;�Zڒ������4�w�Ǆ"���Xb� ��(�
��H�N���ӱzL��Dr���@i�^*��/�)�"���*�� щ?�KkX��.��.��%ic+=)B]Fr(�l��� �9�d�U�Hѧڤq����QX/���|���Vw,���}�g���	� �0�q�y�e�����WkA4c�0��dx��I��/c2�+@G�U�*oZQ�_?��[^����;֤�=4���v�����6��� ���䊪��������謶��{2���|�{��k���b���*���ԭ9�B�>ϗJ�|c�i�$%��O'��O��=��+�j��1�L	��"ķ"�*9\?1�/u���D�%��:m��c�;|�K�/�z�ReK����q��(����@J�C���9Tx(�o�w�|�B=/疝���"?�����o����&�x�v�Ao!�c�c���@�����8���-8I�+L���.�ޑumbT*u8� � ��7��\�5�T&D�ٱ�#c�Τ꾭�V�mr���bƤ�8Y���X[e���8%���ܞ�"�:�$��غ����"���{`�jg��4rz}V��/��r��Yi�lo�&�%���Ҍ�7��4ѥ����ҍ�`��2�c�p�4��3(d�I��JVVd1`�z5��4 wV`Z�b������x�j�9�b��i�������>��䅲ۆ�x[nٕ�r�+$�\�V�U����?��%ζ�������'`����%�[���$cIG�,/�� -?JI@Ǥ�����`��Oɐ���S�z��ܮ�LXg&:���W�Ia\�"!)]W��\S�d�O�Ȣt�j� �E"<>�����~��YQ����mzI��s�ƭ�v��cN @ `�e(@e2f�8�x$�Ju�(��q�@@����������ՎR��&����j���;&&	�7�@"�U&Z�t���5U�������8�9F'��y���Ta��ĭ95ѕR�-��[嫳9{��8�eຬ��~g��L��D>����,����LF:dT��;�F���[��x�Y
����q�zP���
�'�����2�V�T��ivD���ִ�hW�
��{T�T����������{�6�����٥�M�9�F���V�~���moo�5:m�z��[�Tؿ,U��w C��%�d(Ŝ�s��3N>xN��?�������h�!��$�p3�in���Z�}w5J�b��.ܤ����~��<eBR����\S�R�"S�R����Z���{Em�]�h���T4pxٵk8�1�c�/������kH(��_��r˂���uև�ƸMdJk7:���f?a�ْ�p���ˠ�~B�n���� d��ʙ��W��@��0HP���Y=�����Pc4-K/�7VW����j��oQ�����(�7��h.��2�g�7�֒d���ֲh�)�]�,K��:˒,���w���.+�����E�0��58T@���ǘ	�=f��`��"p��𛅡��~����></]���o�R� GY�azJ��pd2�Z�R�%�4�>Mׄ<=�J:��>q;����~�Y�N�^��G^~�����G�ÁU��w��<z�ʄ���:��]A��������Λ6�u�t�9�iu�dWl9p��!�O�L��n�X͏0.��̘��3�cB�y��Tj41�Up}8�a��q��=�>��϶�u^6�j��ߓ?��K=��[;<��w�u��߭�ض��S��<�|����x��k��+�ƚ�$���z��ƨ;��ill��^�z����c-�j���j�&��|.��@{p�����E�H��������EBs��L_<���'q)��܅��K��7I���;+�_�(������z"�8w�p(��a<� 
�����cQ��IJ�D�5i�;�0YO�L	��:éx�J%:%��O������������Wl�/|��*/�q�%vUDZiHVj��󥡂�B>?�V�)�FF�J������C�P�S�{�9ziUl��C��{���Eg�g㡇js�dUU2mnٌڗW��������e�E�&[�H�G1C�$u"�)�4�;I��Zg"A�zT�$�)�:k%`j&�`J�)g�=�D�=5������S#�����Z�mE��z��qp0ۉ�=���U$�V�n���ݩ5M�ډz��F�Es�'UZ+|��+��t��#�nViBW��ڔ�=��W�Y�Y���Y@x��b�X�Ld;����O�tI�)��U��z>_RD�&P�4U��o�ɯx6l+t�����ynW���U�TGg��b��"�)+pu=�N7U�$���Y	M��P_c�V �TP���I�֊ ���\��t�af���/��b�%Z�J�"�E�E,��s���>�3�c�s���*��|�Ƿn߾wҽ�x����g�u������"m�~��{����s˦п��q�������-���� :G��SN������r9���1_`�Ş��*\9�$S&̖l�����]|`�@0�� r�����4֖�s�yG��4�3��&��B�ͪ��� 3���""\�2�9�LZ{�"�S�]V��w�S���x	����8c^�����i�?<QI=��D��*�F�ߓ�����m�Du����R��pup�c�M&~2�e�����Uۓ�V�%z�����onh�TI��F���E��7��y��#O?��9k�����<������@G�
�?V�h(;zk�P ���XX�aԳ���	�'B�(�qy��=�ʑ1]�8ܹ�1�5�)y檀�)�n�^���"�(�Q��r���G��ex|Kh���@q�<�谸���I�Vryz�������7h�/��о�옎�AU�:.��3�9�@_��/2MX���N�T�Mjʭ�7��Պy^)�D}��/~X�e�\��p'ޜ��NБ�b�$q�×E�uM����K�A+�c w�����y�*j���Ğ����E��ǖ�6���t��R�rE��`�|�[Ľ��rOAE����w�tz}����Cb&�{��)���t�@��y�=s"�(2R��R�pa~������yg,�pT9z����q��X{sg��؋/9�����D���a߱���:HN[c�')�c)۾z�]�2�ԺzEUYc�w]�m������ҍeYiʌ.	،;���%`%h���:��+����er���L|�����/Ɔ��)j�m�>��ؕ�~�Gx���z��s��P�V<&�6�{]Gϊ�o<��b}Վj��M����M��0�t(�R�,�8�AO�.Ҕ�h0�QϓÒ��ju����H� ζ��8Ť܋N�\n�h�� Ξ� ߞ]��5%�Ȫ�W��-��)
"C�vL�O�7,�HZ�W]�9�9H>J���`E�6�$�2�r�պ2���s��g��ۊw�6gòuuf �.J��`ڣ���š�7g�#��	�ꎄ�̉��g��~�� ��8��N�8�R���i����T����?��	��~���&<�/�c<��h�c�{d\��`|�
h��	��D�<R,����8n�q7��I/����'�h�_ew����k��PN7������_n1� ��� W�٢�s�N������ӓ�'�x�I�y����O�d�������G���"�z#�8�{wȷ{7��܇��T����ǸBI�� P�2�����eX��C��?��&�v�U<O���?⟇�������:<�πf�j��#d��b��$�n
�I�]
�����'�١WCok���7�?�᡻Cw�H8�+�W	'�M����ˉ��_C)��{�ىR_�6�@�,���қ�oDW�������ĭ྾�xͼ�-&>�W^�L��k��7�]�V���GB�-�-�-�? ���^% :8Ko.&�Q�Ѕ%�~�.�-�-�}m��k�w����f�sY<�����_Er�5�����	$����_BR6��SWP(�����Yt]���?�*�:@�������נ��1I�G4p���(�,���~�莿+��z(���P�,=�DK�DK�DK�DK�D�4���X�%Z�%Z�%Z�%Z�%Z�%Z�%Z�%Z�%Z�%Z�%�g%�_yډ�?��7���l }#ѷn�/l�4��&0	��m���je�Լ>4h�ms0�4��b�Kl��%S��cet�p��l[������0���l;�39�s�v�9l�D�b�M`\q�&1�8�mS��Р�¶9�P�ɶ�X�x�m��H��m�1��	�- w�_g�B,E^϶EX�|��/��`�̥\8�)>�g����i3zfڌ��65��g����i3zfڌ��6�g����i3zfڌ����El3z��X6��Q�����5� ��X7����{6�n�q�9���M�s����1����^��p|?�=~���ݨ� ��@8�0�`��bG���}h�a�}� ��X�:p~�� �>��y>��WzfeH���j�F߻�3]�{*�o��7uv��@�����.���:��J
{wi��\PΫ�>3�Z�?	|���NV/W����V�s�w��z�5h�Q�cI5~� <��|��� ���e�7���C�3�v�+��Ap��$e��[�*?�K���HŴ���a�S��[3<�9 z\��BE��i��a	�Z����v"M3��C:�r0;��l��gCs�>c`��^��a0�&p5,�(hC9z��q�9|҇�n#�$��a���K0^�t�|ئ�|��H����Y0^��s��9h\B|ڇ��!=5��z���-h�QvV=��eZ�t���c2Z�!ˍ |����`���߽��8�5ӛ��0Bh I
僼Y+��*�,��~�s�2�0���݀���Y�{�����H�n4��мX<����c�+ӛ���W��`�Ki����h�<;�K�ѳ�Z �bl����������&#&�G�κ���� ]s��Y��Ћ��М�g��ǐ��;pf��4���:ӛ�b 芹:�,4�|���joB}�?�����<���C<B����z����5�#0����4Fo�>�x�g��Ь��͋&c��!���LA6v1��HJF�M�2lgh�aVN�� �8
�l&� ý��9�	����Fg�42��Y�m@W���~�M}Hg>�Z0�>_��`>���_1F��̋ǝ���'s i��]��k�=5�F�����n�A�oÚZ1�W�,L4���](��_�¾�8�k?y��:R��k1#��+5u�O�"����=��Qd&:3A�#{��|N[LgV�9��E FC�=��b[���3���Řջ\��Iμ�F�z���,W��~��-�yBf�0���z��Q�^5?jt��>Į��@w��A0�B���1���Š7��0>q}�|����� ������sk!û��E+C�Vi&F�!��}�i�����q�ɐ�s*�'fE
 ���}�b�#�yS�_Y$fW� ����r�.���z�\t�Q�=�w���������h�gL_����!��h`@?��Տ�G�#�n�l�}�o�s$�������������(xT��eg����p���ާ�u�}#��`�~��?o�ޑ��0��������PplӰ__9����}C����HP��n����G����;��!}�4�;����G��!�h��<��u�G���~}o0ح�������3�1���H>���W���'�#���	�qt��fx$��z�|��!� ������>_`d 0�E��=��ߴ}xTՙ��3����L��0� B�B�ǐ�DjS;�)��@DC�\jSM�YJ[��oY���H���'e���jPj���U���R�Z֢��Ǉg�����s�di���9�{μ�{����3w�M�`�z��޹=��g�Ʈu�`���=�~㦎�7v� �Ι�4(�\����|2
���0�`.(�}��
~{(��-=T�6�wn�b5��1��k:��&6n�	A�k�[Wө.f��ѱf3U��3��kߴ�us{h���M�kz`t����m[�)�Xt;H����T�@�؄k� ]�w�oh��W�Ұ`��ؖ2u;5��Y�lF\��͔̬C���yC���R�Ș�S��6�߸��������34���m�A�������.t��	ݽos�K�-��A7��6���$�eh�x��k��$��}�@���g=" 0��K{U��V:G]cMG{��o߰zc���fx�=����7ut�i�|�CG�7St#P;X�:�ϴ��B��޺��Ѿp=���m�vlhgEyB ul��R��j��;P�&f�PR��nX��%��l}OOwmy�}��W�A�s¸@�mj�^��|M�Z��f(S�d� ݝL�]=e��m�m�� #�'�4e1���^j����ٺ�T�#�E���b�!7t�и^��;/ܻ�����M�b-]�tdJB��S�a4����������&��â��-�w���]��⎙���T�8(\�[Β��&�Q �1*h�1w`�$dq8�v��}]�[۬�k�ng#K��Hm�TL
����۪Ql	]�85K!�w�� �crf������p�������-I<��)��&N2�R�>�ND��
�|>0ʶ���:�?9V��
o�+| ��׏>3��+��q�GO�ɮ��UBOg���d<�C
����^E��=d�}�� wڿ@��7�{�%��z��`-yT��zO��M �i��z�[z͠��6��6��:�=
z��#`�d���0ћzŠW	zA�Ӡ��:@��� z����� ���3Vz��R���y���>z�@�л��G@���	������&z�A��j@�S�w���M�� ���'@���*�t�OVz�,���WzM�w��������zO����z���5�+H���&.�o{אe���b䷽nq;s\�m���{;*qh�����y������Ez{�vŭ�߿ߥ).gw�+��_��n���[�C�h�yyr:�;����=�:�=LȰWU\Z8e�D�a�J\@�+r���88N�Y1������)�nEq���L�5��Oε1bl;슗���e��M��K��+�.��I ��T�"e�B�T�6��Rx<���������_����f��T<.�����k�V�F�&H��GQ<B!��Q<`l�SU*K�5c�MUվmU�9ZvB����|�%8ϔ8R�Kqy��X��S��Eխ8��^��~U�:@�)`S�ѤP�^�W���Ϸ-�.�ނ�E����N���Tjd�j�rj��i�e�hI�TJv7^T��k��]a���w��νn�Uy��Q�|#%c���H��0}�.�Q����q(CS��CF*dN�F��!���/�9��*^���*�ϩ��rBP\��y�b��rQ}N*������c*l�o�/��R}�D�%�'��n�ۗ^`]
а�I`&q@#>��Ldݯ��������x5�m�{s��9���朏�nE�:��ҿD����:R��v*n�G�Z���nStm�����Tj��g���]��㥇��?A�	�O�f"����v@���%W���-�Kzmx<6����� ��/H�	Ď�>��O\f����Pt��ni쵴�sT6ۋ�� ����r�u����k����̯��ulӆ�RZnw������PSkOW�YF�cs4�E^�x��O(� �)r�~9�=���8�]��Q��8l�?�Ư��*ٶ?��2�/)�֗�g��B��G�����n�¶s����p6�*MNup8�5+*�������W>��6]2:�Sb�kN��?S�ň�l Js<��Uh�fٗ.�Ŕ�DY���2��2!b���*{�B�8�|&q�(ˢF�@]��s���
HDcXN69�f�I�Z�1����
�?r\����?�W��j�@+�@�wn����G[)�E�Zk����z���h�0�FӚND��}��Xe���D�-�
E��>b�.p	�z]"hUjm௓�כ��<��]�|D�������)��H�L�]�Z�W����9m�]ϮX?��z��,hI���z�[��Y*d���
�R��im�+�'�わ��Iܴ~ܤ縩7��R�KG�	�tX/�K�|�ďlr��&�㦹z�<B�b�c��
�X�ʹ��+�������c��v;a��lL��k����[��*Ś�E�s����C�f�Jɗv��֮$�P�V)h�y���e0�P�W/�J�H�.?2�s�j�,~��$�����T?���P���'$��Hzˬ���5�B��l+k��H��H[Dl�%h��,t.G5���*��~�������Y�I�do.9�}�7�<���*�ȯA���#�eB2�G����dϿ�]�����1�g�~�H
�x�}��X�id�q&����gR�Lc?��Ά~�=�6��?o�w�W��~���;|^��k�+��
j�GK�n�^4,a;����,�]h���Sб���lGN�h�|�7�����^4��|�2]�F;�vB��o����=>+��
<���6�����ϋ������+�e����y�`x�Dら6��z.�����9���)?WM�焬���/��/
]\�k&��I��f���qiO6в�-�q�ٶ��)t�V
{ �mMh��F�ꪰ� o�֋=h�|��c�1��x�������
�mЋZ*��<�3'�/�'{�%��y֚���*|�h���l�h���7����.�����1����%�*4��砭�y�N��|�����s���
�>��]�l*�1����b*��]����H�%\�t^9��a�Ѓ}H�a��Y_���EcT�EB�C"��<��wY|\�O����&Y|B�����X˾M��q=1��٣�_rD�^������2����>g�$쿄�Lt��b�s��/|ھ���]��׵��������Y�q��Q�
y�
{S=S;��T���k5*�.
�vĩ������H �WWq=���.��N)�AΛ�$�[�Bkl�BN:4�Y;XKvv��}D�&��5�S�k������ߧ)�wO�v��b��R�o�
�D��څ�2�h_#�~��ԮT�N�wT/��¯��_T��?��T6��=���Os�a�k�ԟ��p?��T&��,�/�\S,�n�Dț�ef����[��m�5+�BN�;v���待:����>�=�!�rڵ)Ǡ�r\9NT��FMyYy�8�ו׉SyCy�������[yGywι�<ⵅls�����yR�~_�@
���I�zE#�C��� [�r��l��js�v�J�O��jpw�C��v+y@�;�v���� �G�8T!?`Uȇ�
Qfx}�R�v����m�b�,����(�z�^�V�+?B=�}��C�;�����Đ�{��6d������)�E��{�~��-���E�Gnѿ�?In��� ������~�q���k�g3ϑ��Ppy"�K~�Q��QX 
��	{�+E��[D�%�>�?"���Z��H�{h���g���kfT���X+ў��S�?�<���{2�D��3�Q4��������h���
 7�+��IҾ�D�
�M���Eoδ��A_�.чLs���zq�,��Ѷ�`��?���|N���h� ��|������u�M��[�b���E�u��� ������W��^Aa�q�^�`�q��qUb{�[�֍�5�}b�I4d�q��.$������>+�0�mI���61�I��E���a�,�(���/�+�/l3>�V��[D�B�kE��6�A4��x�3k�V�!�x�1^����PvY6�f��^��=t�{ee��>G,�������D_$z���(|vB�� �0�m�e���X��4���G����|?��ỉ�܅�3������r�<�3�s&v���蚘7�rb�Dd����D�3�L��&BW��3ᗓ��'A?��� 7	��?�ߚt�����œ�?��៓��ɀ�<��؛�˅����r�k����E�E��ݏ���E<�^�♂m
�k
��[N�N9�����>;Q^0�8��!&��S޶����O���y�+py��T�ME��
�LmD�����7�a���>=�l*d�z|��ghR(��B�_�
A�b!��c��h�!�����������!{>�2�����^�� �)��
�ZАg Sd*�L�ł+��B�Y8�pQ!�
�(�U�x�`�Ӆ�S�
_E����"DVђ����!�.:P��Y���E��i��ih��4�ƴ�vN�;��i���W� �4�v:���%ӣ�!�t�0�NǮ=q3�7�~:l<Á�7�tV��r΀�� �������Y���b�1�R�]�@1d-~�x�y��Tzŗg:fbݙ�o&��	�̄^fBo3aǙ�e�+�Og�n	�.A|�`���@��Z����8%%�K�%�e	�c�$4��,��Ybߘ=��=��Y��,��,�K�h��R�R
�KA�~W
�,=X�t)�Kᛥ�ӳ�O��h��l����l쑳Y^�}n6�ʐ�DL��O�e;�/,{��ʠ�2���/G�/����<�7��]��?R~��n�k���O�j8��0�_�%��~8�?| ��_	�C�ks<s�Os��s���i��b|`䚃�8g��s ?:�����ќk�~E<T@o�Y�芧*�U ���_qe�mn��υ�s+��6�E���v���ܣs�a9���h_I*��ʢʊ�(�U��X�`�n��_�/T��D|U"��!?�̛>��-��!~筝�c�N6�?�)�{b޻���y�T��&����*轪�je�z6�Z�W�p���UG8U��*�S�~Օ������|~����E�]���������h���Cb����~1�ы}�>\�<Z]"�բG.�����;�{���Ո�j��j�t5�V#oW��]Cx��5%5�˚x��d��M5�.��GM_�Κ��x��auQ�ᚣb���jުy��j�p-��6X�Ş[��U����U�k����E��������Q�k?��Z9���
��u�uMu+�����u}uȷu���A�u�֝�C��;W�A�S'j��/2)�8�`�֌4F⑻"���#��oF"Ƚ�99�~#�]�� �,(X^P��ir��� ~��o��f��_�����������v���0��Q�U_P_]__�TO�OI������~g����G�_`����~�7*�������7����0����؀ڪ��������m�� �Ӏ|� �4`�m��ΰ��%Q�-�VGG�M�w˵��w֎��>=}**��(�3zҀ;#z����D1�]/�Ƃ$�+�#z��b��G����c�c�'�:��ýC��G{*v$b�c�T�R{R#�bcv#$idQ�Xݸ8�Rcs���nv�j��=VNoL�yn$���5"�7"4B����](d[}�cad�-Y�pmz���,|���-����;d\��s!���3�,���/"���rŤ�d���<D��I��K*�yx;�;�w���g�=�3�$����x�*��,o�R���.P"�<\Y웅��#��`�A�ط?b�ub�[��T{Y�(v~g��l�1+{�r�FVLh=A�������g��y�g`���<Ӭ�z#�vT�g�p�$�������#�Iq��A[V�1��)=���7���x%1��$�Z��4�I(t!���cC'��%��ĵ4�ߗS~ڭ����44>&��1b�{����A/f�'uR�`�o�/�y�bg
)~���J��YcM۾4�R��
>j�xt��?�9%8��'�F��Q��6�' ��4|����"��F�˜����I���^_�x�L˕�k~��&�陷A-i�Ă�Z������=���x�X������1��"M6K�[�q쑬���Q_̸��*��E�����twk�UUn�6Am	�y��0Q�y<0n�s_I�H�JЪ$����G������Z#��w�.��k��m�GR՞ )� =7r�2>B���惙BG}�<?��DO�CP��u{��/��(;�?�����#w	�~oH������pי4`��R�ڍ�T~�?��d���{�	Ӽ���� }_��D��v)3�w�>�	�������1���;Y����&�t����Ij�9�Ϗ��O�<��Act�����xL���l�tÂԣ�����>��mpmS�����ى$� ��y�%̫����OH��L�_XV� r����>*�X4Fq��M�$"0^����~��8�f��o{��V����;�BBJ�J4���'Na\��v��<�gT�&�A��AE7���`�38ǻ�	����s)����^O���o����'����C����l�F�kfq�)����vQ�@['HN��p-����H5�4�)C�h��t��\���<?��2��"��fX����a�}ky��ҽ�l//q���M�����Ҩ�S�l��<&QD�I�|�)��ߩ4t:#ƺ�����&�2��J��0l>�/pb�T�,zhj�P����#rD<YjE/��Cƥ�F��n��K�y�lCb]�%�����B�\[<�2�gψ��òz[J���:>"��	#����N�8<��=Ng	{*�s��\}�Tm���G�KS�#5ε�hgАKF�����K�5=�a�E'+Y7�U�_2�_M)�1�)Y2*�Y�]�K�k�Sqɬ.O]
-U2�9eY;��p��=GJu}�ȷ��%f�� ��f��!a�@62(��x@P���1��ĈY0��/����~V@�,�T�J�%a"�B�=�;���
ʤO�퐋zm`D^�|��x�k5[l,��g����V��$�%a[��l�2ѣ��&O�����_H6ȼ$[H6����{�2��v����q�9�<�π���aC6�/ͷpvq�����TR&8��u6d�3��Ŏ��:���g���n��YH��b:�-90��f�y��M�.�&�n/���0�"樂�H�����z����8M궍?��u��S��)�XF�t��X%åK>_T1�������0�=kr�}b�'�  �*<����=A����L��s��X��$��9 ��;G��'���B��Y��-iw��ɻ5���L[�v4��n�L�����_�/\��-m�ǿq�;�hu����Y�W��z=;'�j�iM�$��f�Z	f
-߸�c��H��æ��/��8,6�-ݸ��R�����ɍ�ξT�&��cuɓ�|1��W%W�Z0��O�F��	4��D��
���*��B�c����+Y��J��\I�df�����P�5K��is%z9٧�zS����ڌY���<q`�7��ܽ�y��.�����C���$���z��y�FK�ڏ����
�Lr)1Y��c��^���]U���}E%ɗ�'i�E��MT�=�jY�{���e%��l�KL�a;��9(��b���tg���/�Z��Y�'��,a�9�g/^�m�=~�˰�<G<h�����"J��"fڕ�Y��LVԇ�E��<Cf��yj����i\��e���м��Zg:��Y\����F�u�3�d���4w-����y)��S�'m��e��4�M5�h^�%�5�a��I���$��T�,�F���xZ,OW���#(D�{��RD�Ё�툸Z,)1�G�^��`��g�@3��1KL<���Ǳ|U��n�ȧ4*Gj���ٚ�m���~�\�L�o��K�T��/L��ی]�sD�ˈ�0�~��4���S�����j�v��kn�mɂ���{�7�z�8��a�\����L���7%uϳ|*e��N�|�A)��A�����ˣ�d�aG:;^����Y��}��e����ϕ���06hK44˾�Lc�w��1*w�� `]���Y�ϋ\�(���ԑ�ǽexo\�q�_!w����{����1�N}$jX��95F/v*�Sy��3]Ԡ'?�XOd;�"� {�*y�Hw��{��L��,�i���~�a���]���$��OR!}B����?-^���zYǫDԳd3��!��l*��Aօ����R������w0�1ܙ�k�o��Zޓ��@��`"�VR��7U�Ɍr�X�o:	�?%J�FV#�Ob���a>6{&��u�|��N\����ؿ+�iH<jTXɻo�x�Д��/�V����FSo⯉�O��'(���b�9�k��=E���&"/�spYq�
0�rbБ�L!��L���9�̰����o��<f��'��+J�u�����v7Fpݱ_7+�^C�o"�,0G��%?���'d����0>�R���l���Ɠ�g�C�{��\
]�ppc���E�wƎ� kҳ/�-v"�1�g�x��Rϰ���ќ�~���1���a���7��ʠ�Ά�>�Fh���:�z�����iy6c��>�j�R����G������j����ν�e�61���眮�<I�SK���A2�SK�V�3!c}�I��/{��{���S������Ϡ�;�T����^�m�S��D+�����2��'+�/L���S��^_{�&�=�d~���	#Y��S�6b~�g;�	}y�9ϲ��P�' V�7a�&a=�L�1�X_|ǋ�z�=��p�G�>I̟��O&�LR,�0张��զ��RjC���B���겘�?�/:�;
�
2�T8=�>˽�a��i!�S9ih�e�0�F��o'��c�Y!M��'�cV�*�{����`�1)+��F� n��_��i�L3�y�lZ,sg�֠�g��g�_%R��T��(�����&��m�'WH��[#xy�Q�1�Iȱ�g�p�X/y%�髣�4N����4�ih� �90�'%��F;�|�A%��:KZ,fP��j9{��n����v�����(�}S
�j��/92(;ʃ��\�]͟9���nU9g=�5��sFf�'��Ɍ$��<��:�ϼ�|� �ٙq�x�X�H>?Wl���{�0([�K���{I����	����O.��z����w�$FrGc����1JO�o�H�C�2�$�ktS�c�2j���Zx�d'DIM�Xꃣp����s��Ҳ���;d��-}��LF�g��i��Hzz�b]��ҳ�ԃB�$Qi@X|C�1��_vaU���y�x����?�_!`X���gY���IRZ����;�c��s!����WĨ���8����{D�-\��Mz�?`�L�E�QJ��wX�B�g��������7�����{�OĎy�L%E���|Z6���B�D)�u�%�N�������$'�6RM���[mkml���س�U������G�g�W�Ju��J�V�Խ�!uH}K��^�T-K�Mۭ�r�aG�������pq�p�������9�;O8�:/9��|�\W���u̝��q���\O���������9�9��������}����_��V����7}�z��\X?�_�����.��5�9c �X�E�e�l�M��d�v��?Gl��/����M�C��8�;�;�S{T{���ok�&n���/�G��] ^�}�}�c���;��x�d;�w�@&A�I��L_N��o�� %�^}/��/��R��2����UR�?�?E�����I8�{�#s�����6��U��8���r\y�����)�P��~��ԗ�W�[=��ӵ��c�����*m�kwiw��K�"�[�&��f���G�GH��O�G�k�i�����ߐ	�h�D�J�"��������d�~M�F���_!S�x�������sH��f�RH��˦8�g��5�R���f�>ؖ5�?{�]SV�xv���+�+1R�+�������n��"�f�s&�+�w�\��?�<�?ᾬ?������������O0,�㷄�Ox�!D��>������R�8�@�4���o��/����_��kn��:�Oa���_�Rh���R�)�!E;�C����^C�{)�5�p�?Ŗ�u?�s�;l�Bܩ��!�U�~�����Q�A��A�QF�A���Hi`����i�t.���`~����	����b^p�	��9�W|������qE?+ӴK�'�A��3����������Gf����ޭH��Mj���Dq���g^�AT�C����g��G�{sG1��b��{s?��11ws?��s�{^��sC�;����ǘ{s'0�S1�'̽���a����1�
�^esvD�,�ަe��ƽO�x�ё,vO���b�1.�x��������=���z�gU��K���Sn׿\0�k�q�}T;��[��O°������;`��N`���{�����}ڂ}�_v3�w�.`����5���h�8I.6���{�w������� �������I�`o�
`� {5�� ��[���_��0��6���v�l ��Fs���������#c���	�������0����_���l������wW�_����������0�)�/���!���l�+�~�Y�����w�}?����t�e���4�}�3���n��el�O�P���c.��|�`�ӿ����@�����A���M�v7d��О��'_"_��ӿî�=��4sߖs��^��о��V�~���}����:�����A��������O�8��>�8����b���\	���_��^���r=�O!K��w��4�o`�+>����3w�[�Z���=�!���;3~\��N�0��`Ӕ��]?���Ji��𮓆��L)%��1:u��tb��:7�ν����d�y͠��A��tz��;�E�}UƟ��d5�wN8�O����V�S��4��?�3�����q��/hv�p����{о	�[@�Ӡ�
�KA{�A��4�Ϧ��K�z�^��m��%Yz;|��)+����4�]׬1�x�u-�+���t��z���t��gA�n�ΛS�1�@
娭^?g�������ܭ���ǘ?��ߨ����;�߲ߋӔc��[��g �K���Y{�������q۷���/�+�������Ϳ�����o�� �������/a�C�^�#�?��oa��l���1�G���?a>�9��&�(����`��Έ(1B�Rh�\�����x V�\�֝&�4��p��Ѩ �MH�@�sgz:dB��=���s{zn{�Lr-!^8�궻���3�mD�r���X�ji���t�]�CL�.���K��A�0]b���?�.�}�����_z�N?&"r�0�S̆�ĉx �;nH'#w�Y|�������Q�*�2f2[���R�p{69�K�R�o�}$�2X��d�T�>f���NO.�]�O3|[)n_�>a�����M��;���I�f��O���c��%زX��J�>oY��m����WQ�ҫk��[�'�D�����������V1���L_X��ߠm�և�Z��m����k1GUnT�*S��]��Q9_s���95��xL��hFI®�������e?�:���;T��-u��h+c�.�+_��:d�ݣ�H�m���P�����X���;����jh���d<@��8�9s�w�u�{6��κ�N�'ۣ��w~���N�]g��\X��Yt�_3֜T�*�~����^�!�z>���ɕ��Ս������ ���
endstream
endobj
156 0 obj
[ 0[ 658]  3[ 220]  884[ 554 554]  1829[ 597]  1832[ 611]  1853[ 557]  1856[ 580]  1861[ 317]  1870[ 476 462]  1873[ 574]  2024[ 593]  2870[ 579]  2873[ 579]  2877[ 551]  3397[ 747]  3400[ 714]  3404[ 747]  4666[ 415 415] ] 
endobj
157 0 obj
<</Type/Metadata/Subtype/XML/Length 3063>>
stream
<?xpacket begin="﻿" id="W5M0MpCehiHzreSzNTczkc9d"?><x:xmpmeta xmlns:x="adobe:ns:meta/" x:xmptk="3.1-701">
<rdf:RDF xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#">
<rdf:Description rdf:about=""  xmlns:pdf="http://ns.adobe.com/pdf/1.3/">
<pdf:Producer>Microsoft® Word 2016</pdf:Producer></rdf:Description>
<rdf:Description rdf:about=""  xmlns:dc="http://purl.org/dc/elements/1.1/">
<dc:creator><rdf:Seq><rdf:li>Maneesha Saha</rdf:li></rdf:Seq></dc:creator></rdf:Description>
<rdf:Description rdf:about=""  xmlns:xmp="http://ns.adobe.com/xap/1.0/">
<xmp:CreatorTool>Microsoft® Word 2016</xmp:CreatorTool><xmp:CreateDate>2024-11-03T02:22:47+06:00</xmp:CreateDate><xmp:ModifyDate>2024-11-03T02:22:47+06:00</xmp:ModifyDate></rdf:Description>
<rdf:Description rdf:about=""  xmlns:xmpMM="http://ns.adobe.com/xap/1.0/mm/">
<xmpMM:DocumentID>uuid:D829285B-3E8A-47F7-BE8C-569446328E96</xmpMM:DocumentID><xmpMM:InstanceID>uuid:D829285B-3E8A-47F7-BE8C-569446328E96</xmpMM:InstanceID></rdf:Description>
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
</rdf:RDF></x:xmpmeta><?xpacket end="w"?>
endstream
endobj
158 0 obj
<</DisplayDocTitle true>>
endobj
159 0 obj
<</Type/XRef/Size 159/W[ 1 4 2] /Root 1 0 R/Info 30 0 R/ID[<5B2829D88A3EF747BE8C569446328E96><5B2829D88A3EF747BE8C569446328E96>] /Filter/FlateDecode/Length 388>>
stream
x�5�7KA���3��3�y�x��s�9�,(X*�؊�@P�P�S�����6���*V�����00��m1k���kZo�a(��C�y��7!|���<��{p���y,Dڡ ���x!�B̥�]�)�*w>�
qO��GȲ�Yߐi,�
��,���u��nꕯ�*��+0�~���*�C A(��C�:�C8D�"!VW:��(��!A/:��8�@"$A2�@����<R!2!��9����f}X���C1B�A	�B%�C�@TC�C4B4ð�sW��-�
���]���}00#0
�j�=���8L�4̫�]s0�� ���b�ܕ�S��k>�[a��
M0r��C�A�_�������g�Ks
endstream
endobj
xref
0 160
0000000031 65535 f
0000000017 00000 n
0000000165 00000 n
0000000228 00000 n
0000000552 00000 n
0000003551 00000 n
0000003690 00000 n
0000003718 00000 n
0000003884 00000 n
0000003957 00000 n
0000004216 00000 n
0000004270 00000 n
0000004324 00000 n
0000004502 00000 n
0000004744 00000 n
0000004880 00000 n
0000004910 00000 n
0000005074 00000 n
0000005148 00000 n
0000005403 00000 n
0000005566 00000 n
0000005793 00000 n
0000005930 00000 n
0000005960 00000 n
0000006125 00000 n
0000006199 00000 n
0000006445 00000 n
0000006618 00000 n
0000006855 00000 n
0000007161 00000 n
0000010118 00000 n
0000000032 65535 f
0000000033 65535 f
0000000034 65535 f
0000000035 65535 f
0000000036 65535 f
0000000037 65535 f
0000000038 65535 f
0000000039 65535 f
0000000041 65535 f
0000012035 00000 n
0000000042 65535 f
0000000043 65535 f
0000000044 65535 f
0000000045 65535 f
0000000046 65535 f
0000000047 65535 f
0000000049 65535 f
0000012088 00000 n
0000000050 65535 f
0000000051 65535 f
0000000052 65535 f
0000000053 65535 f
0000000054 65535 f
0000000056 65535 f
0000012141 00000 n
0000000057 65535 f
0000000058 65535 f
0000000059 65535 f
0000000060 65535 f
0000000061 65535 f
0000000063 65535 f
0000012194 00000 n
0000000064 65535 f
0000000065 65535 f
0000000066 65535 f
0000000067 65535 f
0000000068 65535 f
0000000070 65535 f
0000012247 00000 n
0000000071 65535 f
0000000072 65535 f
0000000073 65535 f
0000000074 65535 f
0000000075 65535 f
0000000076 65535 f
0000000077 65535 f
0000000079 65535 f
0000012300 00000 n
0000000080 65535 f
0000000081 65535 f
0000000082 65535 f
0000000083 65535 f
0000000084 65535 f
0000000085 65535 f
0000000086 65535 f
0000000087 65535 f
0000000088 65535 f
0000000090 65535 f
0000012353 00000 n
0000000091 65535 f
0000000092 65535 f
0000000093 65535 f
0000000094 65535 f
0000000095 65535 f
0000000096 65535 f
0000000097 65535 f
0000000098 65535 f
0000000099 65535 f
0000000100 65535 f
0000000101 65535 f
0000000102 65535 f
0000000103 65535 f
0000000104 65535 f
0000000105 65535 f
0000000106 65535 f
0000000107 65535 f
0000000108 65535 f
0000000109 65535 f
0000000110 65535 f
0000000111 65535 f
0000000112 65535 f
0000000114 65535 f
0000012406 00000 n
0000000115 65535 f
0000000116 65535 f
0000000117 65535 f
0000000118 65535 f
0000000119 65535 f
0000000120 65535 f
0000000121 65535 f
0000000122 65535 f
0000000123 65535 f
0000000124 65535 f
0000000125 65535 f
0000000126 65535 f
0000000127 65535 f
0000000128 65535 f
0000000129 65535 f
0000000130 65535 f
0000000131 65535 f
0000000133 65535 f
0000012460 00000 n
0000000134 65535 f
0000000135 65535 f
0000000136 65535 f
0000000137 65535 f
0000000138 65535 f
0000000140 65535 f
0000012514 00000 n
0000000141 65535 f
0000000142 65535 f
0000000143 65535 f
0000000144 65535 f
0000000000 65535 f
0000012568 00000 n
0000012953 00000 n
0000039589 00000 n
0000039761 00000 n
0000039789 00000 n
0000040217 00000 n
0000096685 00000 n
0000097088 00000 n
0000097116 00000 n
0000097144 00000 n
0000097576 00000 n
0000128709 00000 n
0000128954 00000 n
0000132101 00000 n
0000132147 00000 n
trailer
<</Size 160/Root 1 0 R/Info 30 0 R/ID[<5B2829D88A3EF747BE8C569446328E96><5B2829D88A3EF747BE8C569446328E96>] >>
startxref
132738
%%EOF
xref
0 0
trailer
<</Size 160/Root 1 0 R/Info 30 0 R/ID[<5B2829D88A3EF747BE8C569446328E96><5B2829D88A3EF747BE8C569446328E96>] /Prev 132738/XRefStm 132147>>
startxref
136098
%%EOF
```


## /ULAB/Sem_02/Programming_Lab/Question_03_Alternative.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Question_06.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Question_07.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/Question_08.c
```c
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

```


## /ULAB/Sem_02/Programming_Lab/demo.txt
```txt


```


## /ULAB/Sem_02/Programming_Lab/project.c
```c
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
```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/ 15-04-2025/tree.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/2D_Array_Column_Print.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/2D_Array_Input_Output.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/2D_Array_Row_Print.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Array_Merge.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Array_Merge_Alternative_01.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Transpose Matrix.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/Transpose_Another.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/04-02-2025/demo.txt
```txt


```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/11-02-2025/Binary Search Repeated Number Count.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/11-02-2025/Binary Search.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/11-02-2025/Sorting.c
```c


```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/11-02-2025/demo.txt
```txt


```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Binary_Search_and_Descending_Sorting.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Bubble_Sort.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Insertion_Sort(Alternative).c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Insertion_Sort.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/Selection_Sort.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-02-25/demo.txt
```txt


```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-03-2025/Stack_Using_Array.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-03-2025/Stack_Using_Linked-List.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/18-03-2025/demo.txt
```txt


```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/25-02-25/Linked_List.c
```c
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

```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/25-02-25/demo.txt
```txt


```


## /ULAB/Sem_03/Data-Structure-Lab/Class_Practices/Demo.txt
```txt


```


## /ULAB/Sem_03/Data-Structure-Lab/Home_Practices/Demo.txt
```txt


```



<!-- Generated with repo.md (https://repo-md.com) -->