#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    cout << "Pairs with sum " << target << " are:\n";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // j = i+1 avoids duplicate/self-pair
            if (arr[i] + arr[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
            }
        }
    }

    return 0;
}
