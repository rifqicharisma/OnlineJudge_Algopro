#include <stdio.h>
#include <string.h>

typedef struct {
    char city[100];
    float temperature;
    char unit;
    float tempInCelsius;
} City;

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void bubbleSort(City arr[], int n) {
    int i, j;
    City temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Bandingkan berdasarkan suhu dalam Celsius terlebih dahulu (sorting menaik)
            // Jika suhu sama, bandingkan berdasarkan nama kota secara menaik
            if (arr[j].tempInCelsius > arr[j + 1].tempInCelsius ||
                (arr[j].tempInCelsius == arr[j + 1].tempInCelsius && strcmp(arr[j].city, arr[j + 1].city) > 0)) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    City cities[100];
    int n = 0;


    while (fscanf(file, "%[^#]#%f#%c", cities[n].city, &cities[n].temperature, &cities[n].unit) == 3) {
        // Mengonversi suhu ke dalam Celsius jika suhu dalam Fahrenheit
        if (cities[n].unit == 'F') {
            cities[n].tempInCelsius = fahrenheitToCelsius(cities[n].temperature);
        } else {
            cities[n].tempInCelsius = cities[n].temperature;
        }
        n++;
    }

    fclose(file);

    bubbleSort(cities, n);

    for (int i = 0; i < n; i++) {
        if (cities[i].unit == 'C') {
            printf("%s is %.2fC\n", cities[i].city, cities[i].temperature);
        } else {
            printf("%s is %.2fF\n", cities[i].city, cities[i].temperature);
        }
    }

    return 0;
}
