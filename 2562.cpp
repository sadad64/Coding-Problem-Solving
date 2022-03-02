#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int max = 0;
    int max_num = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        if (max < arr[i]) {
            max = arr[i];
            max_num = i;
        }
    }

    cout << max << "\n" << max_num + 1;

    return 0;
}
