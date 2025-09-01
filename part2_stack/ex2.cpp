#include<iostream>
using namespace std;
class node {
    public:
        string data;
        node* next;
        explicit node(const string &value) : data(value),next(nullptr){}
};

class stack{
    private :
        node* top;
    public:
        stack(): top(nullptr){}
        bool Empty() const {return top == nullptr;}

        void push(const string& value){
            node* n = new node(value);
            n->next = top;
            top = n;
        }

        string peek(){
            if(!Empty()){
                return top -> data;
            }
            return ( "Stack is empty.");
        }

        void display(){
            node* temp = top;
            while(temp != nullptr){
                cout << temp->data<< " -> ";
                temp = temp->next;
            }
        }


};

int main(){

    stack fruits;
    fruits.push("Apple");
    fruits.push("Banana");
    fruits.push("Cherry");

    fruits.peek();
    cout << fruits.peek()<< " is on top." << endl;
    fruits.display();

     
    return 0;
}