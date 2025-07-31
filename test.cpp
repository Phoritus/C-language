#include <iostream>
#include <string>

using namespace std;

const int TABLE_SIZE = 17;

struct Node {
    int key;
    string val;
    Node* next;

    Node (int key, string val, Node* next = nullptr) : key(key), val(val), next(next) {};
};

class HashTable {
    Node* table[TABLE_SIZE];
public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] == nullptr;
        }
    }

    void add(int key, string val) {
        int index = key % TABLE_SIZE;
        Node* newNode = new Node(key, val);

        if (table[key] == nullptr) {
            table[key] = newNode;
        } else {
            Node* temp = table[index];
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void show () {
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (table[i] == nullptr) {
                cout << "(-1,-)" << endl;
            } else {
                Node* temp = table[i];
                while (temp) {
                    cout << "(" << temp->key << "," << temp->val << ")";
                    temp = temp->next;
                }
                cout << endl;
            }
        }
    }

    void search(int key) {
        int index = key % TABLE_SIZE;
        if (table[index] == nullptr) {
            cout << "-" << endl;
        } else {
            cout << table[index]->val << endl;
        }
    }
};

int main(int argc, char *argv[]) {
    HashTable hash_table;
    int key; string val;
    char user;
    cin >> user;
    while (user != 'e') {
        if (user == 'a') {
            cin >> key >> val;
            hash_table.add(key, val);
        } else if (user == 'p') {
            hash_table.show();
        } else if (user == 's') {
            cin >> key;
            hash_table.search(key);
        }
        cin >> user;
    }
}
