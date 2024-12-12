#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nama[100];
    int nilai;
}Mahasiswa;

void bubbleSort(Mahasiswa arr[], int n){
    Mahasiswa temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j].nilai > arr[j+1].nilai ||
               (arr[j].nilai == arr[j+1].nilai &&
               strcmp(arr[j].nama, arr[j+1].nama)>0)){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for(int i = 1; i <= testCase; i++){
        int jmlMhs;
        scanf("%d", &jmlMhs);

        Mahasiswa mhs[jmlMhs];

        for(int j = 0; j < jmlMhs; j++){
            scanf("%[^#]#%d", &mhs[j].nama, &mhs[j].nilai);
        }

        bubbleSort(mhs, jmlMhs);

        printf("Case #%d:\n", i);
        for (int j = 0; j < jmlMhs; j++) {
            printf("%s - %d\n", mhs[j].nama, mhs[j].nilai);
        }

    }
    return 0;
}
