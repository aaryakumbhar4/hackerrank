#include <stdio.h>

struct Circle {
    double radius;
};

double Carea(struct Circle c) {
  return 3.14159 * c.radius * c.radius;
}

double Cperimeter(struct Circle c) {
  return 2 * 3.14159 * c.radius;
}

int main() {
    struct Circle c;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &c.radius);

    double area = Carea(c);
    double perimeter = Cperimeter(c);

    printf("Area of circle: %lf\n", area);
    printf("Perimeter of circle: %lf\n", perimeter);

    return 0;
}