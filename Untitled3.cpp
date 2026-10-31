#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter values of array" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Selection Sort Logic
    for (int i = 0; i < 10 - 1; i++) {
        int minimum = i; // Assume the first unsorted element is the minimum
        
        for (int j = i + 1; j < 10; j++) { // FIXED: changed i<10; i++ to j<10; j++
            if (arr[j] < arr[minimum]) {
                minimum = j; // Update index of the actual minimum element
            }
        }
        
        // FIXED: Swap after finding the minimum of the entire remaining sub-array
        if (minimum != i) {
            int temp = arr[i];
            arr[i] = arr[minimum];
            arr[minimum] = temp;
        }
    }

    // Output sorted array
    cout << "Sorted array: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "    ";
    }
    cout << endl;

    return 0;
}
