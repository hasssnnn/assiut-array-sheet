
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int numbers[N];
    int min_number, min_position;

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        if (i == 0 || numbers[i] < min_number) {
            min_number = numbers[i];
            min_position = i + 1;
        }
    }

    cout << min_number << " " << min_position << endl;

    return 0;
}