#include<iostream>
using namespace std;

int* minSum(int arrF[], int sizeF, int arrS[], int sizeS){
	
	
	int sumF = 0, sumS = 0;
	
	for(int i = 0; i < sizeF; i++){
		sumF += arrF[i];
	}
	for(int i = 0; i < sizeS; i++){
		sumS += arrS[i];
	}
	
	if(sumF < sumS){
		return arrF;
	}
	else{
		return arrS;
	}
	
}

int main(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[3] = {1,1,1};
	
	
	int* newPtr = minSum(arr1, 5, arr2, 3);
	
	
	return 0;
}
