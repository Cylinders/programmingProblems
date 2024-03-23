#include <stdio.h> 
#include <string.h> 

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
           if(min_idx != i) 
            swap(&arr[min_idx], &arr[i]); 
    } 
} 


int equalSubstring(char* s, char* t, int maxCost) {
	int currentCosts[strlen(s)];  
	for (int i = 0; i < strlen(s); i ++) {
		if (s[i] == t[i]) {
			currentCosts[i] = 0; 
		}
		else {
			if (s[i] - t[i] > 0) {
				currentCosts[i] = (int)s[i]-(int)t[i];
			}
			else {
				currentCosts[i]=(int)t[i]-(int)s[i]; 
			}
		}
		
	}
	
	int n = sizeof(currentCosts)/sizeof(currentCosts[0]); 
    selectionSort(currentCosts, n);
	int currentCounter = 0; 
	for (int i = 0; i < sizeOf(currentCosts); i++){ 
		currentCounter += currentCosts[i]; 
		if (currentCounter > maxCost) 
	
	
	
	
}
