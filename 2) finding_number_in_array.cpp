// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 3, 5, 7, 9}, num;
    cout << "Enter number to find: ";
    cin >> num;
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Number found.";
    else
        cout << "Number not found.";
    return 0;
}
