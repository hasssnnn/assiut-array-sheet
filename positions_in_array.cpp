#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    for (int j=0; j<n; j++){
        if (arr[j] <= 10)
            cout << "A[" << j<<"] = "<< arr[j]<<endl;
    }


    return 0;
}