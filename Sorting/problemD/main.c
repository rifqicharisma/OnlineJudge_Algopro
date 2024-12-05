#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    char creator[100];
    int views;
} Video;

void bubbleSort(Video arr[], int n) {
    int i, j;
    Video temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Bandingkan berdasarkan views
            if (arr[j].views < arr[j + 1].views ||
                (arr[j].views == arr[j + 1].views && strcmp(arr[j].title, arr[j + 1].title) > 0)) {
                // Tukar jika views lebih kecil atau jika views sama, urutkan berdasarkan judul
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    Video videos[100];
    int n = 0;

    while (fscanf(file, "%[^#]#%[^#]#%d", videos[n].title, videos[n].creator, &videos[n].views) == 3) {
        n++;
    }

    fclose(file);

    bubbleSort(videos, n);

    for (int i = 0; i < n; i++) {
        printf("%s by %s - %d", videos[i].title, videos[i].creator, videos[i].views);
    }

    printf("\n");
    return 0;
}
