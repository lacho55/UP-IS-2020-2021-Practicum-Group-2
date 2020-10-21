#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	char choice;
	
	cout << "\nPlease, enter first number: ";
	cin >> num1;
	
	cout << "\nPlease, enter second number: ";
	cin >> num2;
	
	cout << "\nPlease, choose [+, -, *, /]: ";
	cin >> choice;
	
	switch(choice){
		
		case '+': cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
			
		case '-': cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
			
		case '*': cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
			
		case '/': if(num2 != 0){
				  cout << num1 << " / " << num2 << " = " << num1 / num2;
			break;
		}else{
				  cout << "You can't divide by 0!" << endl;
			break;
		}
		
		default: cout << "There is no such action!";
	}
		
	return 0;
}
