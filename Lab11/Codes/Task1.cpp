#include <iostream>
using namespace std;

template <typename T>

void swapVal(T &value1, T &value2){
	T temp;
	temp = value1;
	value1 = value2;
	value2 = temp;
}

int main(){
	int a = 5, b = 10;
	float x = 3.5, y = 7.8;
	char ch1 = 'A', ch2 = 'Z';
	cout <<"Before swap: a = " << a << ", b = " << b << endl;
	swapVal(a,b);
	cout << "After swap: a = " << a << ", b = " << b << endl;
	cout <<"Before swap: x = " << x << ", y = " << y << endl;
	swapVal(x,y);
	cout << "After swap: x = " << x << ", y = " << y << endl;
	cout <<"Before swap: ch1 = " << ch1 << ", ch2 = " << ch2 << endl;
	swapVal(ch1,ch2);
	cout << "After swap: ch1 = " << ch1 << ", ch2 = " << ch2 << endl;	
}
