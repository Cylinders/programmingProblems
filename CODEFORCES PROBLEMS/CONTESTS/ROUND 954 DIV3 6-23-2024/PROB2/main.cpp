#include <iostream>
#include <vector>
using namespace std;



int main(){

    int num;

    vector<vector<int>> matrix;
    cin >> num;

    for (int i = 0; i < num; i ++){

        int x;
        int y;
        cin >> x;
        cin >> y;
        matrix = {};
        for (int a = 0; a < x; a++) {
            matrix.push_back({});
            for (int b = 0; b < y; b++) {
                int input;
                cin >> input;
                matrix[a].push_back(input);

            }
        }


        for (int a = 0; a < x; a++){
            for (int b = 0; b < y; b++){
                if (a == 0){
                    if (b == 0){

                    }
                    else if (b == y-1){

                    }
                    else {

                    }
                }
                else if (a == x-1){
                    if (b == 0){

                    }
                    else if (b == y-1){

                    }
                    else {

                    }
                }
                else {
                    if (b == 0){

                    }
                    else if (b == y-1){

                    }
                    else {

                    }
                }
            }
        }



        for (int a = 0; a < x; a++) {
            for (int b = 0; b < y; b++) {
                cout << matrix[a][b];
                cout << " ";
            }
            cout << "\n";
        }
    }


    return 0;
}
