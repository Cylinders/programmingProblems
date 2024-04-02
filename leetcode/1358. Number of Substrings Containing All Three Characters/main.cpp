#include <iostream> 
using namespace std; 
class Solution {
public: 
	int numberOfSubstrings(string s){
		int returnVal = 0; 
		bool a; 
		bool b; 
		bool c; 
		for (int i = 0; i < s.length(); i ++) {
		    a = false; 
            b = false; 
            c = false; 
			for (int j = i; j < s.length(); j++) {
                if (s.substr(j,1)=="a") {
                    a = true; } 
                else if (s.substr(j,1)=="b") {
                    b = true; }
                else {
                    c = true; }
				if (a && b && c) {
					// this means that the currently observed has all three. 
                    returnVal = returnVal + 1;
                    a = false; 
                    b = false; 
                    c = false; 
                    break; 
			    }
			}
		}
        return returnVal; 
	}
};

