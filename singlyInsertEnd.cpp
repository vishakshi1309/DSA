#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void insertAtEnd(Node*& head, int value){
    Node* newNode = createNode(value);
    if (head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void displayList(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
void updateNode(Node* head, int position, int newValue){
    if (head == nullptr){
        cout<<"List is empty.\n";
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < position){
        temp = temp->next;
        count++;
    }

    if (temp == nullptr){
        cout<<"position out of range\n";
    }
    else{
        cout<<"value at "<<position<<"changed from "<<temp->data<<" to"<<newValue<<".\n";
        temp->data = newValue;
    }
}

int main(){
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout<<"Original list: ";
    displayList(head);

    int pos, val;
    cout<<"enter the position to update: ";
    cin>>pos;
    cout<<"enter new value: ";
    cin>>val;

    updateNode(head, pos, val);
    cout<<"updated list: ";
    displayList(head);

    return 0;
}