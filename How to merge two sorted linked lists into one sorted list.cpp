#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);  // Dummy node
    ListNode* tail = &dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    // Append remaining nodes
    if (l1) tail->next = l1;
    if (l2) tail->next = l2;

    return dummy.next;
}

// Helper function to create a linked list from vector
ListNode* createList(const vector<int>& vals) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int val : vals) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    vector<int> list1Vals = {1, 3, 5};
    vector<int> list2Vals = {2, 4, 6};

    ListNode* l1 = createList(list1Vals);
    ListNode* l2 = createList(list2Vals);

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);

    ListNode* merged = mergeTwoLists(l1, l2);
    cout << "Merged List: ";
    printList(merged);

    return 0;
}
