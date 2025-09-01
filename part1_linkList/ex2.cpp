#include <iostream>
using namespace std;

class node{
    public:
        string data;
        node *next;
        explicit node(const string &v) : data(v), next(nullptr){}
};

class linkList{
    private:
        int size;
        node *head;
        node *tail;
    public:
        linkList() : head(nullptr),tail(nullptr),size(0){}

        
        void insert_front(const string& value){
            node *n = new node(value);
            n -> next = head;
            head = n;
            if(!tail) tail = n;
            ++ size;

        }

        void insert_end (const string& value){
            node *n = new node(value);
            if(head == nullptr){
                insert_front(value);
                return;
            }
            tail->next = n;
             tail  = n;
             ++ size;

        }

        void display(){
                 node * temp = head;
            while(temp != nullptr){
                cout << temp->data <<" -> ";
                temp = temp->next;
            }
            cout <<" NULL"<< endl;
        }
        
};

int main (){ 
    linkList animals;
    animals.insert_end("Cat");
    animals.insert_end("Dog");
    animals.insert_front("Pig");
    animals.insert_front("frog");

    animals.display();


    return 0;
}
