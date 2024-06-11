#include <stdio.h>
#include <string.h>

// PASSED WITH 46MS 100KB
int main() {
    int num;
    char inputLine[100];
    char character;
    int currentLength;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        scanf("%s", inputLine);
        currentLength = strlen(inputLine);
        if (currentLength > 10) {
            printf("%c", inputLine[0]);
            printf("%d", currentLength - 2);
            printf("%c", inputLine[currentLength - 1]);
            printf("\n");
        }
        else {
            printf(inputLine);
            printf("\n");
        }

    }

    return 0;


}
