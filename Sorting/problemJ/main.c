#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float calculateMean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

float calculateMedian(int arr[], int n) {
    if (n % 2 == 1) {
        // Jika jumlah elemen ganjil, median adalah elemen tengah
        return arr[n / 2];
    } else {
        // Jika jumlah elemen genap, median adalah rata-rata dua elemen tengah
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int caseNum = 1; caseNum <= t; caseNum++) {
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        bubbleSort(arr, n);

        float mean = calculateMean(arr, n);
        float median = calculateMedian(arr, n);

        printf("Case #%d:\n", caseNum);
        printf("Mean : %.2f\n", mean);
        printf("Median : %.2f\n", median);
    }

    return 0;
}
