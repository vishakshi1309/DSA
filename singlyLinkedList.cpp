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

void displayList(Node* head){
    Node* temp = head;
    cout<<"Linked list: ";
    while (head != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    int n, value;
    cin>>n;

    for (int i = 0; i < n; i++){
        cout<<"each value of node: "<<i+1<<" ";
        cin>>value;
        Node* m = createNode(value);

        if (head == nullptr){
        head = m;
        tail = m;
    }else{
        tail->next = m;
        tail = m;
    }
}
displayList(head);
return 0;
    
}