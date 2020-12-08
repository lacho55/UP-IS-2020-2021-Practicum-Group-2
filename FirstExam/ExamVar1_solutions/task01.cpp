#include<iostream>
using namespace std;

//Made by Bojidara Kalichkova

int main(){
	
	char a[10000],b[1000];
	int length1, length2, br = 0, actualBr = 0;

	cout << "Length on the larger niz: ";
	cin >> length1;
	
	cout << "Length on the smaller niz: ";
	cin >> length2;
	
	if (length1 < length2) {
		cout << "Invalid lengths.";
	}
	else {
		for (int i = 0; i < length1; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < length2; i++)
		{
			cin >> b[i];
		}
		for (int i = 0; i < length1; i++)
		{
			for (int j = 0; j < length2; j++)
			{
				if (a[i] == b[j]) br++;
			}
		}
		
		cout << endl;
		
		if (br != 0){
			cout << br/length2;
		}
		else {
			cout << "The second niz isn't included in the first one";
		}
	}
  
  }
