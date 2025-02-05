#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void printVector(const vector<T>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {5, 3, 8, 1, 4, 7, 9, 2, 6};
    sort(numbers.begin(), numbers.end());
    printVector(numbers);
    
    int key = 4;
    if (binary_search(numbers.begin(), numbers.end(), key)) {
        cout << key << " found in the vector." << endl;
    } else {
        cout << key << " not found in the vector." << endl;
    }
    return 0;
}
