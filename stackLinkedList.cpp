#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
};

class Stack{
    Node* top;
    public:

    Stack(){
        top = NULL;
    }

    void push(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout<<value<<" pushed in stack\n";
    }

    void pop(){
        if (top == NULL){
            cout<<"Stack underflow (Empty stack)";
            return;
        }
        Node* temp = top;
        cout<<top->data<<" popped from stack\n";
        top = top->next;
        delete temp;
    }

    void peek(){
        if (top == NULL){
            cout<<"stack is empty\n";
        }
        cout<<"top element: "<<top->data<<endl;
    }

    bool isEmpty(){
        return top == NULL;
    }

    void display(){
        if (top == NULL){
            cout<<"stack is empty\n";
            return;
        }

        Node* temp = top;
        cout<<"Stack elements: ";
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }


    
};

int main(){
    Stack s;
    s.push(2);
    s.push(3);
    s.push(6);
    s.push(7);
    s.push(8);
    s.display();
    s.peek();
    s.pop();
    s.display();
     
}