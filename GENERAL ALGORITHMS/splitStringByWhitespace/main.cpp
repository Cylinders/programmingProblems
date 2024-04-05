#include <iostream> 
#include <cstring> 
using namespace std; 

// Developed in order to help me with input parsing. 
//
// Particularly on CSES Introductory problems #6: Number Spiral. 

// also, in general, a study of basic string functions in C++

int main() {
    
    int spaceIndex; 
    string x; 
    string y;
    cout << "Enter String: ";
    cin >> x; 
    cin >> y; 
    x = x + " " + y; 
    cout << "Thank you! \n\n";

    cout << "String: "; 
    cout << x; 
    cout << "\n"; 
   
    cout << "String Length: "; 
    cout << x.size(); 
    cout << "\n"; 
    
    cout << "First letter of the string: ";
    cout << x[0]; 
    cout << "\n"; 
    for (int i = 0; i < x.size(); i++) {
        cout << x[i]; 
        if (x.substr(i, 1).compare(" ") == 0) {
            spaceIndex = i; 
            cout << "Double quoted strings work\n"; 
        }
    }

    spaceIndex = x.find(" "); 

    cout << "Space Index: "; 
    cout << spaceIndex; 
    cout << "\n";

    cout << "First Word: "; 
    cout << x.substr(0, spaceIndex+1); 
    cout << "\n";

    cout << "Second Word: "; 
    cout << x.substr(spaceIndex + 1, x.length()-spaceIndex-1); 
    cout << "\n";
    


    return 0; }
