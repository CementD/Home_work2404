#include "Array.h"
#include <iostream>
using namespace std;

int main() {
    Array<int> arr;
    arr.SetSize(5, 5);

    for (int i = 0; i < 11; i++) {
        arr.Add(i);
    }

    for (int i = 0; i < arr.GetSize(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}