//
// Created by Marvin Calmer on 23.09.24.
//
#include <stdio.h>

// Funktion zur Berechnung des größten gemeinsamen Teilers (ggT) mit der Euklidischen Methode
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

    // Einlesen der Werte für Zähler und Nenner
    printf("Zaehler: ");
    scanf("%d", &zaehler);

    printf("Nenner: ");
    scanf("%d", &nenner);

    // Verhindern eines Bruchs mit Nenner 0
    if (nenner == 0) {
        printf("Fehler: Der Nenner darf nicht 0 sein!\n");
        return 1; // Beenden des Programms mit Fehlercode
    }

    // Berechnung des größten gemeinsamen Teilers (ggT)
    ggt = berechneGGT(zaehler, nenner);

    // Kürzen des Bruchs durch Division von Zähler und Nenner durch den ggT
    int gekuerzterZaehler = zaehler / ggt;
    int gekuerzterNenner = nenner / ggt;

    // Ausgabe des gekürzten Bruchs und des verwendeten größten gemeinsamen Teilers
    printf("gekuerzter Bruch=%d/%d, Teiler=%d\n", gekuerzterZaehler, gekuerzterNenner, ggt);

    return 0; // Erfolgreiches Beenden des Programms
}
