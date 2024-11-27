#include <stdio.h>

union Sensor {
    float temperature;  // Menyimpan data suhu
    int pressure;       // Menyimpan data tekanan
};

int main() {
    union Sensor sensor1;

    // Menyimpan data suhu
    sensor1.temperature = 25.5;
    printf("Suhu: %.2f\n", sensor1.temperature);

    // Menyimpan data tekanan (akan menimpa nilai suhu)
    sensor1.pressure = 1013;
    printf("Tekanan: %d\n", sensor1.pressure);

    // Setelah mengubah tekanan, nilai suhu menjadi tidak dapat diandalkan
    printf("Suhu setelah menimpa dengan tekanan: %.2f\n", sensor1.temperature);

    return 0;
}
