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
        return;
    }

    Node* tmp=head;
    while(tmp->next != NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_linked_list(Node* head){
    cout<<"Your linked List :\n";
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<"\n";
        tmp=tmp->next;
    }

}

void insert_at_position(Node* head,int p,int v){
    Node* newNode= new Node(v);
    Node* tmp=head;
    for(int i=1;i<p-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}

int main(){
    Node* head=NULL;
    while(true){
        
        cout<<"1. Insert tail.\n";
        cout<<"2. Print.\n";
        cout<<"3. Insert at any Position.\n";
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
        else if(ops==3){
            int p,v;
            cout<<"Enter Position\n";
            cin>>p;
            cout<<"Enter Value\n";
            cin>>v;
            insert_at_position(head,p,v);
        }
        else break;
    }
}