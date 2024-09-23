#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    float xDelta= 0.001;
    float xMin=6;
    float xMax=7;

    for(float i=xMin;i<xMax;i=i+xDelta){
        double a= exp(i);
        a=1/a;
        printf("X-Wert: %f    ,Y-Wert: %f",i, a);
        printf("\n");
    }
    return 0;
}
