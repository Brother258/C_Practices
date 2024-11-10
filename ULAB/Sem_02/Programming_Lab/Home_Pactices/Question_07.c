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
