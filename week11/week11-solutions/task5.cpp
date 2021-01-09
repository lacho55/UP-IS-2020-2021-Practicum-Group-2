#include<iostream>
using namespace std;

bool isUnique(int arr[], int size)
{
	if (size <= 0)
		return true;

	if (isUniqueHelper(arr, size - 1, arr[size - 1]) == false)
		return false;

	return isUnique(arr, size - 1);
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 1, 1, 1, 1};

    cout << isUnique(arr1, 5) << endl;
    cout << isUnique(arr2, 5) << endl;

    return 0;
}