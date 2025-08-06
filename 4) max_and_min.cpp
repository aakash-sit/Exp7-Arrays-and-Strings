// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;
int main() {
    int arr[5] = {9, 3, 7, 1, 5};
    int min = arr[0], max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Min: " << min << ", Max: " << max;
    return 0;
}
