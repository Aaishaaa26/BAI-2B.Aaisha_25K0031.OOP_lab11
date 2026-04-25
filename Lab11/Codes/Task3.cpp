#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair{
	T1 a;
	T2 b;
	public:
		Pair(T1 a, T2 b) : a(a), b(b){}
		void display(){
			cout <<"Pair: (" <<a <<"," << b<< ")" << endl;
		}
};
int main(){
	Pair <int,string> p1(5,"Hello");
	Pair <double,int> p2(3.14,42);
	p1.display();
	p2.display();
}
