#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    long long summ = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        summ += arr[i];
    }
    cout << abs(summ)<<endl;
    return 0;
}