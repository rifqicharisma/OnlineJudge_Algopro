#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
} Plant;

void bubbleSort(Plant arr[], int n) {
    int i, j;
    Plant temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j].name, arr[j+1].name) > 0) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    int n;
    fscanf(file, "%d", &n);

    Plant plants[n];

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d#%[^\n]", &plants[i].id, plants[i].name);
    }

    fclose(file);

    bubbleSort(plants, n);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", plants[i].id, plants[i].name);
    }

    return 0;
}
