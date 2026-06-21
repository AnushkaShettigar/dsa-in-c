//area and perimeter of the circle
#include<stdio.h>
int main(){
    float r, p, a;
    const float pi = 3.14;
    printf("enter the radius of the circle");
    scanf("%f", &r);
    p = 2*pi*r;
    a = pi*r*r;
    printf("the perimeter of the circle is %.2f\n the area of the circle is %.2f", p, a);
    return 0;
}