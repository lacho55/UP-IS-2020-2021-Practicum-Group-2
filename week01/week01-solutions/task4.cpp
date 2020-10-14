#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout<< a * b<<", "<< (a * b) % 100 % 10<<" - "<<(((a * b) % 100 % 10) % 2 == 0)<<endl;


    return 0;
}