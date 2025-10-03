#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i;
    int max = 0;
    int pengeluaran[1000000];
    int count = 0;
    int total = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &pengeluaran[i]);
        total += pengeluaran[i];
        if (pengeluaran[i] > max) {
            max = pengeluaran[i];
        }
    }

    printf("Max : %d\n", max);
    for (i = 0; i < n; i++) {
        if (pengeluaran[i] == max) {
            count++;
        }
    }
    printf("Count : %d\n", count);

    printf("days :");
    for (i = 0; i < n; i++) {
        if (pengeluaran[i] == max) {
            printf(" %d", i + 1);
        }
    }
    printf("\n");

    double percentage = ((double)(max * count) / total) * 100;
    printf("Percentage : %.3f%%", percentage);

    return 0;
}