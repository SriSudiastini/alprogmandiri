#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char kalimat[200];
    char kata[50][50];   
    int jumlahKata = 0;

    fgets(kalimat, sizeof(kalimat), stdin);

    int i = 0, j = 0, k = 0;
    while (kalimat[i] != '\0') {
        if (kalimat[i] != ' ' && kalimat[i] != '\n') {
            kata[j][k] = kalimat[i];
            k++;
        } else {
            if (k > 0) {
                kata[j][k] = '\0'; // akhiri kata
                j++;
                k = 0;
            }
        }
        i++;
    }
    if (k > 0) { 
        kata[j][k] = '\0';
        j++;
    }
    jumlahKata = j;

    for (int a = 0; a < jumlahKata; a++) {
        int sudahAda = 0;
        for (int b = 0; b < a; b++) {
            if (strcmp(kata[a], kata[b]) == 0) {
                sudahAda = 1;
                break;
            }
        }
        if (!sudahAda) {
            printf("%s", kata[a]);
            if (a < jumlahKata - 1) {
                printf(" ");
            }
        }
    }

    return 0;
}