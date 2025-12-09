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
    Node*temp = head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteSecIndex(Node*& head){
    if (head == nullptr || head->next == nullptr){
        cout<<"not enough nodes present to delete second last element";
        return;
    }

    if (head->next->next == nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* prev = nullptr;         //curr start at the first node
    Node* curr = head;            // prev remain one step behind it

    while (curr->next->next != nullptr){     //curr is 2nd last node
        prev = curr;                          //curr->next last node
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}

void displayList(Node*& head){
    Node* temp = head;
    while (temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = nullptr;
    int n, value;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>value;
        insertAtEnd(head, value);
    }
    cout<<"Original list: ";
    displayList(head);

    deleteSecIndex(head);
    cout<<"Updated list: ";
    displayList(head);
    
    return 0;
}