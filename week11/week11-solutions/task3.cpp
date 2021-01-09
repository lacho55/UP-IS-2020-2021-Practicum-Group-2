#include<iostream>
using namespace std;

bool isIn(int number, int digit)
{
	if (number == 0)
		return false;

	if (number % 10 == digit)
		return true;

	return isIn(number / 10, digit);
}

int main(){
    int num = 123;

    cout << isIn(2, num);

    return 0;
}