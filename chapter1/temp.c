#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

/*
 * Prints a table of temps.
 */
int main() {
    for (float fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        float celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}
