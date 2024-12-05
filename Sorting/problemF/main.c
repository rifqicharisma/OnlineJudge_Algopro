#include <stdio.h>
#include <string.h>

typedef struct {
    char subject[100];
    int time;
} Course;

void bubbleSort(Course arr[], int n) {
    int i, j;
    Course temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].time > arr[j + 1].time) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Course courses[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", courses[i].subject, &courses[i].time);
    }

    bubbleSort(courses, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", courses[i].subject);
    }

    return 0;
}
