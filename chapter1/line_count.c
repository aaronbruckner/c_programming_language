#include <stdio.h>

int main() {
    int c;
    int totalLines = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            totalLines++;
        }
    }
    printf("%d", totalLines);
}
