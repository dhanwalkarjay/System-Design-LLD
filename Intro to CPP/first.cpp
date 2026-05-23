#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        if(this -> next != NULL){
            delete next;
            next = NULL; 
        }
        cout<<"Memory Free"<<endl;
    }
};

void insertAtNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    } else {
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = curr -> next;
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;
    do {
        cout<<tail -> data<<" ";
        tail = tail -> next;
    } while (tail != temp);
}

int main(){

    Node* tail = NULL;
    
    insertAtNode(tail, 5, 3);
    print(tail);
    insertAtNode(tail, 3, 2);
    print(tail);
    insertAtNode(tail, 2, 1);
    print(tail); 
    insertAtNode(tail, 1, 6);
    print(tail);


    return 0;
}