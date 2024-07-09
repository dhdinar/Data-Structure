//5
#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node* &head, int v){
    Node* newNode= new Node(v);
    if(head==NULL){
        head=newNode;
        cout<<"inserted at head.\n";
        return;
    }

    Node* tmp=head;
    while(tmp->next != NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<"Inserted at tail.\n";
}

void print_linked_list(Node* head){
    cout<<"Your linked List :\n";
    Node* tmp=head;
    while(tmp!=NULL){            
        cout<<tmp->val<<"\n";
        tmp=tmp->next;
    }
}

int main(){
    Node* head=NULL;
    while(true){
        cout<<"1. Insert at tail.\n" ;
        cout<<"2. Print.\n";
        int ops;
        cin>>ops;
        if(ops==1){
            cout<<"Enter a value\n";
            int v;
            cin>>v;
            insert_tail(head,v);
        }
        else if(ops==2){
            print_linked_list(head);
        }
        else break;
    }


}