#include <iostream>
using namespace std;

void validateAge(int age){
	try{
		if(age < 0 || age > 120) throw age;
	}
	catch(int){
		cout << "InvalidAgeException caught: Age must be between 1 and 119" << endl;
	}
}
void validateSalary(int salary){
	try{
		if(salary < 0) throw salary;
	}
	catch(int){
		cout << "InvalidSalaryException caught: Salary must be positive" << endl;
	}
}
void validateHeight(int height){
	try{
		if(height <= 0 ) throw height;
	}
	catch(int){
		cout << "InvalidHeightException caught: Height must be positive" << endl;
	}
}

int main(){
	int age, salary, height;
	cout<<"Enter age: ";
	cin >> age;
	validateAge(age);
	cout << "Enter salary: ";
	cin >> salary;
	validateSalary(salary);
	cout<< "Enter height: ";
	cin >> height;
	validateHeight(height);
}
