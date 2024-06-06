#include <stdio.h>
// ACCEPTED 6 - 2 - 24
int main() {
    int input;
    scanf("%d", &input);

    if (input % 4 % 2 == 0 && input >= 4) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
