#include <iostream> 
using namespace std; 


// for testing clang and / or gcc on new setups. 

int main() {
    int y = 0;
    int a;
    while (true){
        a = 4 ^ y;
        cout << a;
        cout << "\n";
        y++;
        if(y > 25) break;
    }

}
