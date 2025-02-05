// Including necessary libraries for input-output operations
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
// Function to print the elements of a vector
void printVector(const vector<T>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    // Initializing a vector with unsorted integers
    vector<int> numbers = {5, 3, 8, 1, 4, 7, 9, 2, 6};
    
    // Sorting the vector in ascending order
    sort(numbers.begin(), numbers.end());
    printVector(numbers);
    
    // Key to search for in the sorted vector
    int key = 4;
    if (binary_search(numbers.begin(), numbers.end(), key)) {
        cout << key << " found in the vector." << endl;
    } else {
        cout << key << " not found in the vector." << endl;
    }
    return 0;
}
