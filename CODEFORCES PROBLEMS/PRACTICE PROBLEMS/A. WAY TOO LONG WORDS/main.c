#include <stdio.h>
#include <string.h>

// C is the perfect language until you have to deal with a few strings...

int main() {
    int num;
    char inputLine[100];
    char character;
    int currentLength;
    scanf("%d", num);

    for (int i = 0; i < num; i++){
        scanf("%s", inputLine);
        for (int j = 0; j < strlen(inputLine); j++) {

        }
        currentLength = strlen(inputLine);
        if (currentLength > 10) {
            printf(inputLine[0]);
            printf("%d", currentLength - 2);
            printf(inputLine[currentLength - 1]);
            printf("\n");
        }
        else {
            printf(inputLine);
        }

    }


}
