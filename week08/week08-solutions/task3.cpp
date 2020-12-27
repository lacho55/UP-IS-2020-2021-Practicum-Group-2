#include<iostream>
using namespace std;

void merge(int arr_1[], int size_1, int arr_2[], int size_2) {	
	
	int empty_arr[128];
	
  	int i = 0, j = 0, k = 0; //indixes
  	
  	while(k < size_1 + size_2) {
    		
      	if(j == size_2) {  
        		empty_arr[k++] = arr_1[i++];
          	//++i;
          	//++k;
          	continue;
        }
      	if (i == size_1) {
        		empty_arr[k++] = arr_2[j++];
          	//++j;
          	//++k;
          	continue;
        }
      	if (arr_1[i] > arr_2[j]) {
						empty_arr[k++] = arr_2[j++];
          	//++j;
          	//++k;
        }  
      	else if (arr_1[i] <= arr_2[j]) {
        		empty_arr[k++] = arr_1[i++];
          	//++i;
          	//++k;
        }
      
    }
    
    for(int i = 0; i < (size_1 + size_2); i++){
    	cout << empty_arr[i] << " ";
	}
}


int main(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[4] = {3,4,5,6};
	
	merge(arr1, 5, arr2, 4);
	
	return 0;
}
