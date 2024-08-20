#include <cstdlib>
#include <iostream>
using namespace std;




int main() {

    int num;
    cin >> num;
    int inp1;
    int inp2;
    int inp3;
    int avg;
    int tot;
    for (int i = 0; i < num; i ++) {
        avg = 0;
        tot = 0;
        cin >> inp1;
        cin >> inp2;
        cin >> inp3;
        tot = abs(inp1 - 1) + abs(inp2 - 1) + abs(inp3 - 1);
        for (int a = 2; a <= 10; a++) {
            avg = abs(inp1 - a) + abs(inp2 - a) + abs(inp3 - a);
            if (avg < tot){
               tot = avg;
            }
        }
        cout << tot;
        cout << "\n";

    }




}
