//
// Created by marvi on 24.09.2024.
//
#include <math.h>
#include <stdio.h>

int main(void) {
    double x, x_min, x_max;
    const double delta_x = 0.01;
    x_min=-10;
    x_max=5;
    double prev=0;

    for(double i = x_min; i <= x_max; i += delta_x) {
        double y = pow(i, 3) - 10 * (pow(i, 2)) + i + 3;

        if(y*prev<0) {
            printf("X-Wert: %f    ,Y-Wert: %f",i-delta_x, prev);
            printf("\n");
        }
        prev=y;
    }
}
