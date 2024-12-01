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
