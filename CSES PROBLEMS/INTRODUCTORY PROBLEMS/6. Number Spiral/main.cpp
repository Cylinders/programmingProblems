#include <iostream>
#include <string>
#include <cstring> 
using namespace std; 
int main(){
	int numResponses; 
	int yVal; 
	int xVal; 
	int lengths;
	int currentMinMax; 
	cin >> numResponses; 
	string response[numResponses];
	for (int i = 0; i < numResponses; i ++){
		cin >> response[i];} 
	for (int i = 0; i < numResponses; i++){
		lengths = response[i].length(); 
		for (int j = 0; j < lengths; j++){
				
			if (response[i].substr(j, 1) == " "){
				yVal = stoi(response[i].substr(0, j)); 
				cout << "yval: "; 
				cout << yVal; 
				xVal = stoi(response[i].substr(j, lengths)); 
				cout << "xval: "; 
				cout << xVal; 
				cout << "\n"; 

			}	
		}
		if (yVal == xVal == 1){
			cout << 1; 	
		}	
		else {
			if (yVal < xVal) {
				// this means that the xVal value defines the "petal"	
				// if xVal is an odd integer, then that means that we are calculating the max. 
				// if xVal is an even integer, then we are calculating the min. 
				// Why? Because I said so. Read the problem its so obvious.  

				if (xVal % 2 == 1) {
					// we are calculating the max, and then subtracting the yVal 	
					currentMinMax = 1; 
				}	
				else {
					// calculating Min BRUH
					currentMinMax = 2; 
					xVal = xVal - 1;
				}

				for (int i = 2; i <= xVal; i ++){
					currentMinMax += (2 * i) - 1;	
				}					

				cout << (xVal % 2 == 1) ? currentMinMax - yVal : currentMinMax + yVal; 
				cout << "\n"; 

			}
			else {
				// if xVal < yVal or equal 
				if (yVal % 2 == 1) {
					// we are calculating the min, and then adding the xVal 	
					currentMinMax = 2; 
					yVal = yVal - 1; 
				}	
				else {
					// calculating Max then subtracting BRUH
					currentMinMax = 1; 
				}

				for (int i = 2; i <= xVal; i ++){
					currentMinMax += (2 * i) - 1;	
				}					
				cout << (yVal % 2 == 1) ? currentMinMax + xVal : currentMinMax - xVal;
				cout << "\n"; 
			}
		}
	}
	return 0;
}
