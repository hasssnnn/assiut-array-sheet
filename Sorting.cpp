#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallElement;

    for (int i = 0; i < n - 1; i++) {
        smallElement = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallElement]) {
                smallElement = j;

            }
        }
        int temp = arr[i];
        arr[i] = arr[smallElement];
        arr[smallElement] = temp;

    }
    for (int k = 0; k<n; k++){
        cout << arr[k]<<" ";
    }

    return 0;
}