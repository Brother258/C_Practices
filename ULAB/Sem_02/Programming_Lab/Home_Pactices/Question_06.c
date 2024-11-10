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
