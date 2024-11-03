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
