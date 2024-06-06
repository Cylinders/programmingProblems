#include <iostream>
#include <algorithm>

using namespace std;




int main() {

    int numTries;
    cin >> numTries;

    for (int i = 0; i < numTries; i++){
        int x[2];
        cin >> x[0];
        cin >> x[1];
        int y = 1;
        while (true){
            if (x[0] ^ y == x[1]^y){
                break;
            }
            y++;
        }
        int a = 0;
        while (true){
            if(x[0]^y != x[1]^y){
                break;
            }
            a++;
            y++;
        }
        cout << a << "\n";
    }



    return 0;
}
