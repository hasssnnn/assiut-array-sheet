#include <iostream>
using namespace std;


int main (){
    int n,x;
    cin >> n;
    int arr [n];
    int found = -1;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for (int j = 0; j<n; j++)
    {
        if (x == arr[j]) {
            found = j;
            break;
        }
//        else {
//            found = -1;
//        }
    }
    cout << found <<endl;




    return 0;
}