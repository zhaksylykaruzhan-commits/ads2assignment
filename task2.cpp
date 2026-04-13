#include <iostream>
using namespace std;

struct Node {
    Node* next;
};

bool hasCycle ( Node* head) {
    Node* slow = head;
   const Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

//есть ли в линкед лист
