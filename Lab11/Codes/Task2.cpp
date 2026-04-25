#include <iostream>
using namespace std;

int main(){
	int numerator, denominator;
	
	for(int i = 0; i < 2; i++){ //do dafa input/output sample mei

	cout <<"Enter Numerator: ";
	cin >> numerator;
	cout << "Enter Denominator: ";
	cin >> denominator;
	
	try{
		if(denominator == 0) throw denominator;
		cout <<"Result: " << numerator/denominator<< endl;
	}
	catch(int){
		cout << "Error:  Division by zero is not Allowed!" << endl;
	}
    }
}
