#include<iostream>
using namespace std;

bool isPresent(int n, int size, int *arr)
{
	if (size <= 0)
		return false;

	if (n == arr[size - 1])
		return 1;

	else isPresent(n, size - 1, arr);
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};

    cout << isPresent(2, 5, arr);

    return 0;
}