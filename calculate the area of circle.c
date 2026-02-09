//calculate the area of the circle
#include<stdio.h>
struct circle{
float radius,Area;
const float PI=3.14;
};

float calculateArea(struct Circle c) {
    return M_PI * c.radius * c.radius;
}
int main() {
    struct Circle c;

    printf("Enter radius of the circle: ");
    scanf("%f", &c.radius);

    float area = calculateArea(c);  // call the function
    printf("Area of circle with radius %.2f = %.2f\n", c.radius, area);

    return 0;
}
