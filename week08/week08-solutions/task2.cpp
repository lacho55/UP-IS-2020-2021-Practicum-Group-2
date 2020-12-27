#include<iostream>
using namespace std;

int* find_num(int arr[], int num, int size) {
		//int *ptr = nullptr;
  	for (int i = 0; i < size; ++i) {    	
      	if (arr[i] == num) {
         		return &arr[i]; 
        }  
    }  
  
  	return nullptr;
}  

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int* searchElem = find_num(arr, 5, 10);
	
	
	return 0;
}
