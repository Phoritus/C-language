#include <iostream>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int val, ListNode* next = nullptr) : val(val), next(next) {}

    string toString() const {
        return to_string(val);
    }
};

void display(ListNode* head) {
    ListNode* cur = head;
    while (cur) {
        cout << cur->val << "->";
        cur = cur->next;
    }
    cout << "null" << endl;
}

bool search(ListNode* head, int val) {
    ListNode* cur = head;
    while (cur) {
        if (cur->val == val) {
            return true;
        }
        cur = cur->next;
    }

    return false;
}

ListNode* insertEnd(ListNode* head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) {
        return newNode;
    }
    ListNode* cur = head;

    while (cur->next) {
        cur = cur->next;
    }
    cur->next = newNode;
    return head;
}

ListNode* insertBefore(ListNode* head, int val, int idx) {
    if (!head) return insertEnd(head, val);
    if (!search(head, idx)) {
        return insertEnd(head, val);
    } if (search(head, val)) {
        return head;
    }
    ListNode* newNode = new ListNode(val);
    ListNode* prev = nullptr;
    ListNode* cur = head;
    while (cur) {
        if (cur->val == idx) {
            prev->next = newNode;
            newNode->next = cur;
        }
        prev = cur;
        cur = cur->next;
    }

    return head;

}

ListNode* insertAfter(ListNode* head, int val, int idx) {
    if (!search(head, idx)) {
        return insertEnd(head, val);
    } if (search(head, val)) {
        return head;
    }

    ListNode* after = head->next;
    ListNode* cur = head;
    ListNode* newNode = new ListNode(val);

    while (cur) {
        if (cur->val == idx) {
            cur->next = newNode;
            newNode->next = after;
            cur = after;
        }

        cur = cur->next;
        after = after->next;
    }

    return head;
}

ListNode* deleteNode(ListNode* head, int val) {
    if (!head) return head;
    if (!search(head, val)) {
        return head;
    }
    if (head->val == val) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    ListNode* cur = head;
    while (cur->next) {
        if (cur->next->val == val) {
            ListNode* temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
            return head;
        }
        cur = cur->next;
    }
    return head;
}

int main(int argc, char *argv[]) {
    ListNode* head = new ListNode(1);
    ListNode* a = new ListNode(2);
    ListNode* b = new ListNode(3); ListNode* c = new ListNode(4);
    ListNode* d = new ListNode(5);

    head->next = a; a->next = b; b->next = c;
    c->next = d;
    ListNode* test = new ListNode(1);
    deleteNode(test, 1);
    display(head);
    head = insertAfter(head, 9, 3);
    display(head);

    // head = insertEnd(head, 10);
    // display(head);

    char user; cin >> user;
    int val, idx;
    ListNode* dump = new ListNode(0);

    while (user != 'E') {
        if (user == 'I') {
            cin >> val;
            cin >> idx;
            dump->next = insertBefore(dump, val, idx);

        } else if (user == 'A') {
            cin >> val;
            cin >> idx;
            dump->next = insertAfter(dump, val, idx);
        } else if (user == 'D') {
            cin >> val;
            dump->next = deleteNode(dump, val);
            display(dump->next);
        }
        cin >> user;
    }


}
