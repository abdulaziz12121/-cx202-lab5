#include <stdio.h>

#define PI 3.14159

int add_int(int a, int b) {
    return a + b;
}

float add_float(float a, float b) {
    return a + b;
}

float area_circle(float radius) {
    return PI * radius * radius;
}

float area_rectangle(float length, float width) {
    return length * width;
}

int factorial(int n) {
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return -1;  
    }
    
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int a = 2, b = 2;
    printf("Addition of %d and %d = %d\n", a, b, add_int(a, b));

    
    float x = 2.2, y = 2.2;
    printf("Addition of %.2f and %.2f = %.2f\n", x, y, add_float(x, y));

    
    float radius = 2.2;
    printf("Area of circle with radius %.2f = %.2f\n", radius, area_circle(radius));

    float length = 2.0, width = 2.0;
    printf("Area of rectangle with length %.2f and width %.2f = %.2f\n", length, width, area_rectangle(length, width));

    
    int num = 3;
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
