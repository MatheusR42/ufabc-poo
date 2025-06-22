#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Dynamically allocate array
    double* array = new double[n];
    
    cout << "Enter " << n << " double values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    // Sort the array
    sort(array, array + n, greater<double>());
    
    // Print the sorted array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // Free the allocated memory
    delete[] array;
    
    return 0;
}