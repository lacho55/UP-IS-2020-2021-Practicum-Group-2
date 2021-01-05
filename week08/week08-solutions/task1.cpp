#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
  int x = a;
  a = b;
  b = x;
}

void reverse(int *arr, int lenght)
{
  for(int i = lenght-1; i >= lenght / 2; --i)
  {
   swap(arr[i], arr[lenght - 1 - i]);
    
  }
}

int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	reverse(arr, 10);
	
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
