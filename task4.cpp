#include <iostream>
using namespace std;

int main() {
    int n = 5;

    string queue[100];
    int front = 0, rear = 0;

    queue[rear++] = "1";

    for (int i = 0; i < n; i++) {
        string curr = queue[front++];
        cout << curr << " ";

        queue[rear++] = curr + "0";
        queue[rear++] = curr + "1";
    }

    return 0;
}
//бинар 1 до н 
