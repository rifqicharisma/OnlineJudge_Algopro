#include <stdio.h>
#include <string.h>

typedef struct {
    long long id;
    char name[100];
} Person;

void bubbleSort(Person arr[], int n) {
    int i, j;
    Person temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            // compare ID
            if (arr[j].id > arr[j+1].id) {
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

    Person people[n];

    for (int i = 0; i < n; i++) {
        fscanf(file, "%lld %[^\n]", &people[i].id, people[i].name);
    }

    fclose(file);

    bubbleSort(people, n);

    for (int i = 0; i < n; i++) {
        printf("%lld %s\n", people[i].id, people[i].name);
    }

    return 0;
}
