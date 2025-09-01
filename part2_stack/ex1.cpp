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

        void pop(){
            if(Empty()){
                cout << "Stack is empty."<< endl;
                return;
            }
            node* temp = top;
            top = top->next;
            delete temp;
            
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

    stack num;
    num.push("10");
    num.push("20");
    num.push("30");

    num.pop();
    num.display();

     
    return 0;
}