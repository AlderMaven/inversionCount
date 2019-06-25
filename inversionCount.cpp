//Created by Brandon Barnes

#include <iostream> //being used for cout
#include <stdlib.h> //needed for malloc

using namespace std;






void swap(int* first, int* second) 
{ 
    int temp = *first; 
    *first = *second; 
    *second = temp; 
} 


int partition(int* array, int low, int high){
	int pivot = array[high];
	int temp = (low-1);
	
	for(int i = low; i<= high-1; i++){
		if(array[i]<=pivot){
			temp++;
			swap(&array[temp], &array[i]);
		}
	}
	swap(&array[temp+1], &array[high]);
	return(temp+1);
	
}

void quickSort(int* array, int low, int high){
	if(low<high){
		int part = partition(array, low, high);
		
		quickSort(array, low, part-1);
		quickSort(array, part+1, high);
	}
}







int inversionCountLong(int array[], int size){ //O(n^2) version
	int returnValue = 0;
	
	if(size < 1){
		return -1;
	}
	if(size==1){
		return 0;
	}
	
	for(int i = 0; i < size; i++){
		for(int j = i; j<size; j++){
			if(array[i]>array[j]){
				returnValue++;
			}
		}
	}
	return returnValue;
}


int inversionCount(int array[], int size){ //O(n^2) version
	int returnValue = 0;
	
	if(size < 1){
		return -1;
	}
	if(size==1){
		return 0;
	}
	
	
	
	
	
	//delete comparatorArray causes erroneous and inconsistent functionality
	return returnValue;
}

int main(){
	int array[] = {2, 4, 1, 3, 5};
	//1+2+0+0+0
	cout << inversionCount(array, 5)<<endl;
	
	return 0;
}