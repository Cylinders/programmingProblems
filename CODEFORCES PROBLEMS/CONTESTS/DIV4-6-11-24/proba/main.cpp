#include <iostream>
using namespace std;

int main() {
    int num;
    string x;
    string y;
    cin >> num;
    for (int i =0; i < num; i ++){
        cin >> x;
        cin >> y;
        cout << y[0] << x[1] << x[2] << " " << x[0] << y[1] << y[2] << "\n";
    }
}
