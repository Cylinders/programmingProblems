#include <stdio.h>

//https://codeforces.com/problemset/problem/1141/A
//6-8-24

int main() {
    int input;
    int target;
    int current;
    int numMoves;
    scanf("%d %d", &input, &target);
    if (input == target) {
        printf("0\n");
    }
    else if (target % 2 != 0 && target % 3 != 0) {
        printf("-1\n");
    }
    else {
        current = input;
        numMoves = 0;
        while (current!=target){
            if (current % 2 == 0){
                current *= 2;
            }
            else if (current % 3 == 0) {
                current*=3;
            }
            if (current == target) {
                break;
            }
            numMoves++;
        }
        printf("%d \n", numMoves);
    }
    return 0;
}
