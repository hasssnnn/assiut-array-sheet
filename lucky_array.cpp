#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ctr = 0;
    int mini = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }

    }
    for (int j = 0; j < n; j++) {
        if (mini == arr[j]) {
            ctr++;
        }
    }
    if (ctr > 0 && ctr % 2 == 0) {
        cout << "Unlucky" << endl;
    } else cout << "Lucky" << endl;
    return 0;
}