#include <iostream> 
using namespace std; 
class Solution {
public: 
	int numberOfSubstrings(string s){
		int returnVal = 0; 
		bool a; 
		bool b; 
		bool c;
        int length = s.length(); 

        for (int i = 0; i < length; i ++){
            if (s[i]=='c'){
                c = true; 
            }
            else if (s[i]=='b') {
                b = true; 
            }
            else {
                a = true; 
            } 
            if (a && b && c) 
                break; 
        } 
        if (a && b && c) {
            cout << "exists"; 
        }
        else{
            return 0;} 
        
		for (int i = 0; i < length-2; i ++) {
		    a = false; 
            b = false; 
            c = false; 
			for (int j = i; j < length; j++) {
                if (s[j]=='a') {
                    a = true; } 
                else if (s[j]=='b') {
                    b = true; }
                else {
                    c = true; }
				if (a && b && c) {
					// this means that the currently observed has all three. 
                    returnVal = returnVal + 1 + length-j-1;
                    break; 
			    }
			}
            
		}
        return returnVal; 
	}
};

