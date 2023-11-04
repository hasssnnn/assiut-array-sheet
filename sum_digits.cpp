/*
 solution 1
#include <iostream>

using namespace std;


int main() {
    int n, sum(0);
    cin >> n;
    string s;
    cin >> s;
    for (char digit : s) {
        sum += digit  - '0'; // - in ascii code 0 = 48 , 1 = 49 so if you need the actual value of 1 , subtract 0 from 1 (49-48 = 1)

    }

    cout << sum << endl;
    return 0;
}
*/



// solution 2
#include <iostream>

using namespace std;


int main() {
    int n, sum(0);
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        sum += (int) (s[i] - '0');

    }
    cout << sum << endl;
    return 0;
}