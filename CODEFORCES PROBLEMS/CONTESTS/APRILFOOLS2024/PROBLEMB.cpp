#include <iostream>
#include <string>  
using namespace std; 
// CODEFORCES APRIL FOOLS CONTEST: 4  - 1 - 24
// PLACE: 

// FIRST COMPETITION THAT I HAVE DONE! 

int main() {
 	int numInp; 
	cin >> numInp; 
	string inps[numInp]; 
	bool passed; 
	for(int i = 0; i < numInp; i ++) 
		cin >> inps[i]; 
	for (int i = 0; i < numInp; i++) {
		// PER STRING
		passed = false; 
		for (int j = 0; j < inps[i].length()-1; j++) {
			if (inps[i].substr(j, 2)=="it") {
				cout << "YES\n"; 
				passed = true; 
				
				break; 
			}	
		}
		if (!passed) {
			cout << "NO\n"; 
		}
	
	}
	return 0; 
}

