//
// Created by marvi on 25.09.2024.
//
#include <stdio.h>
void DecToBinary(int decNumber);

void main() {
    int number;
    printf("Enter a number: ");
    scanf_s("%u", &number);
    DecToBinary(number);
}

void DecToBinary(int decNumber) {
    int binary[16]={};
    int rest=decNumber;
    int i=15;
    while (decNumber != 0) {

        rest=decNumber%2;
        decNumber=decNumber/2;
        binary[i]=rest;
        i--;
    }
    for (int j=0;j<16;j++) {
        printf("%d",binary[j]);
    }
}