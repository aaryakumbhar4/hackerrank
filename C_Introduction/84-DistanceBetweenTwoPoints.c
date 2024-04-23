#include <stdio.h>
#include <math.h>

struct Point {
  int x;
  int y;
};

double calDistance(struct Point p1, struct Point p2) {
  int xDiff = p2.x - p1.x;
  int yDiff = p2.y - p1.y;
  double squared_distance = pow(xDiff, 2) + pow(yDiff, 2);
  return sqrt(squared_distance);
}

int main() {
  struct Point point1, point2;

  printf("Enter coordinates for point 1: ");
  scanf("%d %d", &point1.x, &point1.y);

  printf("Enter coordinates for point 2: ");
  scanf("%d %d", &point2.x, &point2.y);

  double distance = calDistance(point1, point2);
  printf("The distance between the points is: %lf\n", distance);

  return 0;
}