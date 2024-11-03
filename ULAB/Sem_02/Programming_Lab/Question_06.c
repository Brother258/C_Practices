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
