#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int position = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[position] = arr[i];
            position++;
        }
    }

    while (position < n) {
        arr[position] = 0;
        position++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//перенос всех 0
