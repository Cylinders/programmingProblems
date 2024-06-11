#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){

    int num;
    vector<int> ans;
    cin >> num;

    int numAns;
    int currentSum;
    for (int i = 0; i < num; i ++){
        cin >> numAns;
        ans.clear();
        for (int a = 0; a < numAns; a++){
            cin >> currentSum;
            ans.push_back(currentSum);
        }
        unordered_set<int> prefixes{};
        for (int i = 0; i < ans.size(); i++){
            int current = 0;
            int ran = -1;
            if (ans[0] == 0) {
                prefixes.insert(0);
            }
            for (int a = 0; a < ans.size(); a++) {
                if (current == ans[i] && current!=0){
                    ran = a;
                    break;
                }
                current += ans[a];
            }
            if (ran > -1) prefixes.insert(ran);
        }
        cout << prefixes.size();
        cout << "\n";
    }

    return 0;
}
