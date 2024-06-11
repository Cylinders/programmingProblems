#include <stdio.h>
#include <string.h>


int main(){

    char line[100];
    scanf("%s", line);
    for(int i = 0; i < strlen(line); i++){
       printf("%c",line[i]);
    }
    return 0;
}
