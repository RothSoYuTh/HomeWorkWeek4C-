#include<iostream>
using namespace std;

class node{
    public:
        string data;
        node* next;

        explicit node(const string &v) : data(v), next(nullptr){}
};

class linkList{
    private:
        node* head;
        int size;

    public:
        linkList() : head(nullptr),size(0){}

        void insert_front(const string &value){
            node* n = new node(value);
            n->next = head;
            head = n;
            ++ size;
         }

        void insert_at(int index,const string &value){
            if(index < 0 || index > size){
                cout << "NO place"<< endl;
            }
            if(index == 0){
                insert_front(value);
                return;
            }

            node* temp = head;
            for( int i = 0; i < index -1; i++){
                temp = temp->next;
            }

            node* n = new node(value);
            n->next = temp->next;
            temp->next = n;
            size++;
            
        }

        void display(){
            node* temp =head;
            while(temp != nullptr){
                cout << temp->data<< " -> ";
                temp = temp->next;
            }
            cout << "NULL";
         }
};


int main(){
    linkList fruits;
    fruits.insert_front("Apple");
    fruits.insert_front("Banana");
    fruits.insert_front("orange");

    fruits.insert_at(1,"Mango");

    fruits.display();

    return 0;
}