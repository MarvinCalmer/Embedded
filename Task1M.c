//
// Created by marvi on 25.09.2024.
//
#include <stdio.h>

void main() {
    int zahlenReihe[100]={};
    int sum=0;

    for(int i=1;i<101;i++) {
        if(sum+7*i<=1000) {
            zahlenReihe[i]+=i*7;
            sum=sum+zahlenReihe[i];
            printf("Current Value: " "%u" "\t" "Sum: " "%u" "\n", zahlenReihe[i], sum);
        }
        else {
            zahlenReihe[i]=0;
            printf("Current Value: " "%u" "\t" "Sum: " "%u""\n", zahlenReihe[i], sum);
        }
    }
}