#include <iostream> 
using namespace std;
int main() {
	int x; 
	cin >> x; 
	switch (x) {
		case 1: 
			cout << "1"; 
			break; 
		case 2: 
			cout << "NO SOLUTION"; 
			break; 
		case 3: 	
			cout << "NO SOLUTION"; 
			break; 
		default: 
			for (int i = 2; i <= x; i+=2){
				cout << i << " "; 		
			}
			for (int i = 1; i <= x; i+=2){
				cout << i << " "; 
			}
			break; 
	}
	return 0; 
}
