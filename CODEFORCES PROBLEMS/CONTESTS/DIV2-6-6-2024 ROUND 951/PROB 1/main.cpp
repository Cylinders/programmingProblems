#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> inputs(int num){
    vector<int> inp;
    int x;
    for (int i = 0; i < num; i ++){
       cin >> x;
       inp.push_back(x);
    }
    return inp;
}


int main() {
    int numTests;
    cin >> numTests;
    vector<int> logical;
    int num;
    int currentMin;
    for (int i = 0; i < numTests; i ++) {
        cin >> num;
        logical = inputs(num);
        currentMin = INT_MAX;
        for (int i = 0; i < logical.size()-1; i++){
            currentMin = min(max(logical[i], logical[i+1]), currentMin);
        }
        cout << currentMin-1 << "\n" ;
    }



    return 0;
}
