//
// Created by Marvin Calmer on 23.09.24.
//
#include <stdio.h>

int berechneGGT(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int zaehler, nenner, ggt;

    printf("Zaehler: ");
    scanf("%d", &zaehler);

    printf("Nenner: ");
    scanf("%d", &nenner);

    if (nenner == 0) {
        printf("Fehler: Der Nenner darf nicht 0 sein!\n");
        return 1;
    }

    ggt = berechneGGT(zaehler, nenner);

    int gekuerzterZaehler = zaehler / ggt;
    int gekuerzterNenner = nenner / ggt;

    printf("gekuerzter Bruch=%d/%d, Teiler=%d\n", gekuerzterZaehler, gekuerzterNenner, ggt);

    return 0;
}
