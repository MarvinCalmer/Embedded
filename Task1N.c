//
// Created by marvi on 26.09.2024.
//
#include <stdio.h>
#include <math.h>

int numberArr[40] ={};
int n = sizeof(numberArr) / sizeof(numberArr[0]);

int CalculatePower(int *z, int amount);

void main() {
    int sum=CalculatePower(numberArr, n);
    printf("The sum of the first 40 natural numbers:  %u", sum);
}

int CalculatePower(int *z, int amount) {
    int sum=0;
    for (int i = 0; i < n; i++) {
        z[i] = pow(i+1,2);
        sum+=z[i];
    }
    return sum;
}