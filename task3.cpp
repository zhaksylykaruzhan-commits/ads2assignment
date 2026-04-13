#include <iostream>
using namespace std;

int main() {
    char s[] = "{[()]}";
    char stack[100];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                cout << "Invalid";
                return 0;
            }

            char last = stack[top--];

            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                cout << "Invalid";
                return 0;
                }
        }
    }

    if (top == -1)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}
//скобки в строке
