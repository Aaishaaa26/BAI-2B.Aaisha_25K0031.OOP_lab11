#include <iostream>
#include <string>
using namespace std;

template <typename T>
class SmartArray {
    T* arr;
    int size;

public:
    SmartArray(int s) {
        size = s;
        arr = new T[size];
    }

    void input() {
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void OutOfBoundCheck(int index) {
        try {
        	 cout << "Accessing index " << index << ":";
            if (index < 0 || index >= size) {
                throw -1;  
            }
            cout << arr[index] << endl;
        }
        catch (int) {
            cout << endl <<"OutOfBoundsException caught: Invalid index access attempted!" << endl;
        }
    }

    ~SmartArray() {
        delete[] arr;
    }
};

int main() {
    int n;

    cout << "Array size: ";
    cin >> n;

    SmartArray<int> a(n);
    a.input();

    a.OutOfBoundCheck(2);
    a.OutOfBoundCheck(5);  

}
