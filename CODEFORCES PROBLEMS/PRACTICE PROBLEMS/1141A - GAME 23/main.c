#include <stdio.h> 
#include <string.h> 
// https://codeforces.com/problemset/problem/1141/A
//6-8-24
int main(){
    int num;
    int input;
    int target;
    int current;
    int numMoves;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        scanf("%d %d", %input, %output);
        if (input == output){
           printf("0");
        }
        else if (output % 2 != 0 && output % 3 != 0) {
           printf("-1");
        }
        else {
            current = input;
            numMoves = 0;
            while (current!=output){
                if (current % 2 == 0){
                    current*=2;
                }
                else if (current % 3 == 0){
                    current*=3;
                }
                numMoves++;
            }
            printf("%d \n", numMoves);
        }
    }
    return 0; 
}
