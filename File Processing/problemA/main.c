#include <stdio.h>
#include <string.h>

typedef struct {
    char friendName[100];
    char treeName[100];
} Record;

int main() {
    FILE *file = fopen("testdata.in", "r");

    int N;
    fscanf(file, "%d", &N);
    Record records[100];

    for (int i = 0; i < N; i++) {
        fscanf(file, "%[^#]#%[^\n]\n", records[i].friendName, records[i].treeName);
    }

    int T;
    fscanf(file, "%d", &T);

    for (int t = 1; t <= T; t++) {
        char query[100];
        fscanf(file, "%s", query);

        int found = 0;
        for (int i = 0; i < N; i++) {
            if (strcmp(records[i].friendName, query) == 0) {
                printf("Case #%d: %s\n", t, records[i].treeName);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Case #%d: N/A\n", t);
        }
    }

    fclose(file);
    return 0;
}
