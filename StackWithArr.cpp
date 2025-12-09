#include<iostream>
using namespace std;

#define MAX 100

class Stack{
    int arr[MAX];
    int top;

    public:
        Stack(){
            top = -1;
        }

        bool isEmpty(){
            return top == -1;
        }

        bool isFull(){
            return top == MAX - 1;
        }

        void push(int x){
            if (isFull()){
                cout<<"stack overflow"<<endl;
                return;
            }
            arr[++top] = x;
        }

        void pop(){
            if (isEmpty()){
                cout<<"stack underflow"<<endl;
                return;
            }
            top--;
        }

        void peek(){
            if (top < 0) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }           
    }

     void display() {
        if (top < 0) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(12);
    s.push(30);
    s.push(14);
    s.push(50);
    s.display();

    s.pop();
    s.peek();

     s.display();
}

