//
// Created by marvi on 24.09.2024.
//
#include <stdio.h>
#include <stdlib.h>

float y[200];
float x[200];
int n = sizeof(x) / sizeof(x[0]);

void CreatePolynom(void);

void main(void) {

    CreatePolynom();


}

void CreatePolynom() {
    for (int i = -10; i < 10.1; i+=0.1) {
        x[i] = i;
        printf("%lf" "\n", x[i]);
    }
}
