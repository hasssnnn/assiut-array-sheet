#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long sum = 0, minimum = 1e9;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum = arr[i] + arr[j] + (j + 1) - (i + 1);
                if (sum < minimum) {
                    minimum = sum;
                }
            }


        }
        cout << minimum << endl;


    }

    return 0;
}