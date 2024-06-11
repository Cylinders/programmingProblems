#include <iostream>
using namespace std;


int main() {

    int num;
    int n;

    cin >> num;

    int maxNum;
    int maxResult;
    int current;
    int a;
    for (int i = 0; i < num; i++){
       cin >> n;
       maxNum = 0;
       maxResult = 1;
       for (int i = 2; i <= n; i ++) {
            a = 0;
            current = 0;
            while (true) {
                a++;
                if (a * i > n) {
                    break;
                }
                current += a * i;
            }

            if (current > maxResult) {
                maxNum = i;
                maxResult = current;
            }
        }
        cout << maxNum;
        cout << "\n";

    }



    return 0;
}
