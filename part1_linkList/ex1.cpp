#include <iostream>
#include <string>
using namespace std;

class node {
    public :
        string data;
        node* next;
        explicit node (const string &v) : data(v), next(nullptr){}

};

class linkList{
    private :
        node * head;
        node* tail;
        int size;

    public : 
        linkList() : head(nullptr), tail(nullptr), size(0){}
        
        void insert_front(const string &value){
            node* n = new node(value);
            n-> next = head;
            head = n;
            if(!tail) tail = n;
            ++ size;
        }

        void insert_end(const string& value){
            node* n = new node(value);
            if(head == nullptr){
                insert_front(value);
                return;
            }
            tail->next = n;
            tail = n;
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

int main() {
    linkList colors;
    colors.insert_front("red");
    colors.insert_front("blue");

    colors.insert_end("Green");
    colors.insert_end("Yello");

    colors.display();


    return 0;
}
