//
// Created by marvi on 24.09.2024.
//
#include <math.h>
#include <stdio.h>

int main(void) {
    double a,b,c,x1,x2,realPart,imagPart;
    printf("Solution for the quadratic equation; a*x*x + b*x + c = 0" "\n");
    printf("Enter a\n");
    scanf_s("%lf", &a);
    printf("Enter b\n");
    scanf_s("%lf", &b);
    printf("Enter c\n");
    scanf_s("%lf", &c);

    if(b*b-4*a*c > 0) {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("Solution""\n");
        printf("x1=%lf" "\t" "x2=%lf",x1, x2);
    }
    else if (b*b-4*a*c == 0) {
        x1 = -b / (2 * a);
        printf("Solution""\n");
        printf("x1 = x2 = %lf\n", x1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(abs(b*b-4*a*c)) / (2 * a);
        printf("x1 = %lf + j %lf\n", realPart, imagPart);
        printf("x2 = %lf - j %lf\n", realPart, imagPart);
    }
}