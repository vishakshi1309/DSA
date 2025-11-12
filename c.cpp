#include <iostream>
using namespace std;

class BankAccount{
    string brand;
    int price;
    public:
    
    Laptop(string b, int p){ //constructor
       brand = b;
       price = p;
    }

    Laptop(const Laptop &l){
        brand = l.brand;
        price = l.price;
    }

    void display(){
        cout<<"brand: "<<brand<<"Price: "<<price<<endl;
    }
};

int main(){
    Laptop()
}