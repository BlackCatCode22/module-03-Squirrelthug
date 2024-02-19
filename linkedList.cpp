#include <iostream>
#include <string>
#pragma clang diagnostic push
#pragma ide diagnostic ignored "NullDereference"
using namespace std;

struct Node {
    int data;
    Node* next;

    explicit Node(int d) : data(d), next(nullptr) {}
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList() : head(nullptr) {}

    void addNode(int data) {
        Node *newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            cout << "Adding " << newNode->data << endl;
        } else {
            Node *temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "Adding " << newNode->data << endl;
        }
    }

    void deleteNode(int data) {
        if (head == nullptr) {
            cout << "List is empty" << endl;
        } else if (head->data == data) {
            Node *temp = head;
            head = head->next;
            cout << "Deleting " << temp->data << endl;
            delete temp;
        } else {
            Node *temp = head;
            while (temp->next != nullptr && temp->next->data != data) {
                temp = temp->next;
            }
            if (temp->next == nullptr) {
                cout << "Node " << data << "not found" << endl;
            } else {
                Node *toDelete = temp->next;
                temp->next = temp->next->next;
                cout << "Deleting " << toDelete->data << endl;
                delete toDelete;
            }
        }
    }

    void displayAll() const {
        if (head == nullptr) {
            cout << "List is empty" << endl;
        } else {
            Node *temp = head;
            while (temp != nullptr) {
                cout << "Data: " << temp->data << endl;
                temp = temp->next;
        }
    }
}
};

int main() {
    LinkedList list;

    cout << endl;
    cout << "Displaying all" << endl;
    cout << "--------------" << endl;
    list.displayAll();

    cout << endl;
    cout << "Adding Nodes" << endl;
    cout << "------------" << endl;
    list.addNode(5);
    list.addNode(10);
    list.addNode(15);

    cout << endl;
    cout << "Displaying all" << endl;
    cout << "--------------" << endl;
    list.displayAll();

    cout << endl;
    cout << "Deleting Nodes" << endl;
    cout << "--------------" << endl;
    list.deleteNode(10);

    cout << endl;
    cout << "Displaying all" << endl;
    cout << "--------------" << endl;
    list.displayAll();
    return 0;
}
#pragma clang diagnostic pop