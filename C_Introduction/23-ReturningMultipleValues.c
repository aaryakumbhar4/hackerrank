#include<stdio.h>
void Circle(float radius,double *area,double *circumference){
    *area = 3.14 * radius * radius;
    *circumference = 2 * 3.14 * radius;
}
int main(){
   
    float radius;
    double area;
    double circumference;

    printf("Enter radius:");
    scanf("%f", &radius);

    Circle(radius,&area,&circumference);

    printf("The radius of circle is %f and area is %lf and circumference is %lf", radius, area, circumference);
    
    return 0;
}