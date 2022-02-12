#include <stdio.h>

#define IN_WORD 0
#define OUT_WORD 1

int main() {
    int totalLines = 0;
    int totalWords = 0;
    int totalChars = 0;
    int state = OUT_WORD;
    int c;

    while ((c = getchar()) != EOF) {
        totalChars++;
        if (c == '\n') {
            totalLines++;
        }

        if (c != ' ' && c != '\t' && c != '\n') {
            // Assume we are dealing with a letter then.
            if (state == OUT_WORD) {
                totalWords++;
                state = IN_WORD;
            }
        } else {
            state = OUT_WORD;
        }
    }
    printf("Total Chars: %d\nTotal Words: %d\nTotal Lines: %d", totalChars, totalWords, totalLines);
}
