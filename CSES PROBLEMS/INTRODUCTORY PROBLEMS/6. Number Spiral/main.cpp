#include <iostream>
#include <string>
using namespace std; 
int main(){
	int numResponses; 
	int lengths;
	int currentMinMax; 
    string first; 
    string second;
	cin >> numResponses; 
	int yVal[numResponses]; 
	int xVal[numResponses]; 
	for (int i = 0; i < numResponses; i ++){
		cin >> yVal[numResponses];
		cin >> xVal[numResponses];
    } 

	for (int i = 0; i < numResponses; i++){


		if (yVal[i] == xVal[i] == 1){
			cout << 1; 	
		}	


        // bulk of processing within this "else" block

		else {
			if (yVal[i] < xVal[i]) {
				// this means that the xVal value defines the "petal"	
				// if xVal is an odd integer, then that means that we are calculating the max. 
				// if xVal is an even integer, then we are calculating the min. 
				// Why? Because I said so. Read the problem its so obvious.  

				if (xVal[i] % 2 == 1) {
					// we are calculating the max, and then subtracting the yVal 	
					currentMinMax = 1; 
				}	
				else {
					// calculating Min BRUH
					currentMinMax = 2; 
					xVal[i] = xVal[i] - 1;
				}

				for (int j = 2; j <= xVal[i]; j ++){
					currentMinMax += (2 * j) - 1;	
				}					

				cout << (xVal[i] % 2 == 1) ? currentMinMax - yVal[i] : currentMinMax + yVal[i]; 
				cout << "\n"; 

			}
			else {
				// if xVal < yVal or equal 
				if (yVal[i] % 2 == 1) {
					// we are calculating the min, and then adding the xVal 	
					currentMinMax = 2; 
					yVal[i] = yVal[i] - 1; 
				}	
				else {
					// calculating Max then subtracting BRUH
					currentMinMax = 1; 
				}

				for (int j = 2; j <= xVal[i]; j ++){
					currentMinMax += (2 * j) - 1;	
				}					
				cout << (yVal[i] % 2 == 1) ? currentMinMax + xVal[i] : currentMinMax - xVal[i];
				cout << "\n"; 
			}
		}
	}
	return 0;
}
