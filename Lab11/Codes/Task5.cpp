#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size){
	T max = arr[0];
	for(int i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main() {
    int nums[] = {10, 20, 5, 30, 25};
    string fruits[] = {"Apple", "Mango", "Banana", "Peach"};

    cout << "Array: [10, 20, 5, 30, 25]" << endl;
    cout << "Maximum: " << findMax(nums, 5) << endl;

    cout << "Array: [Apple, Mango, Banana, Peach]" << endl;
    cout << "Maximum: " << findMax(fruits, 4) << endl;
}
