#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
  int x = a;
  a = b;
  b = x;
}

int main(){
	int a = 10, b = 5;
	
	cout << "Before a = " << a << " and b = " << b <<endl;
	
	swap(a,b);
	
	cout << "After a = " << a << " and b = " << b;
	
	return 0;
}
