#include <iostream>
using namespace std;

const int MAX_SIZE = 128;

int biggestLocal(int * arr, int size) {
  if(size < 3) {
    return 0;
  }
  return (arr[0] < arr[1] && arr[1] > arr[2]) + biggestLocal(arr+1, size-1);
}


int main()
{
    int arr[MAX_SIZE] = {1, 20, 3, 4, 0};
    cout << biggestLocal(arr, 5);
    cout << endl;

    return 0;
}