//
// Created by marvi on 24.09.2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

float y[200];
float x[200];
int n = sizeof(x) / sizeof(x[0]);
float start_value=-10;
float increment_value=0.1;

void CreatePolynom(void);
float YMaxValue(void);

void main(void) {
    CreatePolynom();
    float max=YMaxValue();
    printf("Max Value: ""%lf", max);
}

float YMaxValue(void) {
    float highest = 0;
    for (int i = 0; i <= n; i++) {
       if(y[i] > highest) {
           highest = y[i];
       }
    }
    return highest;
}

void CreatePolynom() {
    for (int i = 0; i < n; i++) {
        x[i] = start_value + i * increment_value;
        y[i] = 0.4 * pow(x[i], 3) - 4.4 * (pow(x[i], 2)) - 2.2 * x[i] + 1.1;
        printf("X-Value: ""%lf" "\t" "Y-Value: " "%lf" "\n", x[i], y[i]);
    }
}
