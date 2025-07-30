#include <iostream>
using namespace std;
int main() {
    int arr[5] = {4, 8, 15, 16, 23};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    float avg = sum / 5.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg;
    return 0;
}
