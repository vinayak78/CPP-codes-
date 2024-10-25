#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    
    // Adding elements
    v.push_back(11); // [1, 3, 5, 7, 9, 11]

    // Access elements
    cout << "Element at index 2: " << v[2] << endl;  // 5
    cout << "First element: " << v.front() << endl;  // 1
    cout << "Last element: " << v.back() << endl;    // 11

    // Sorting the vector
    sort(v.begin(), v.end());

    // Using a range-based loop
    cout << "Sorted vector: ";
    for(int value : v) {
        cout << value << " ";
    }
    cout << endl;

    // Vector size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // Remove last element
    v.pop_back(); // Removes 11

    return 0;
}
