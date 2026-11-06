#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int>& arr) {
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        return -1;
    }

    return second;
}

int main() {
    vector<int> arr = {10, 5, 20, 8, 20, 15};

    cout << "Second Largest Element: "
         << secondLargest(arr);

    return 0;
}