//2
#include <iostream>
using namespace std;
class node{
    public:
        int val;
        node *next;
        node(int val){
            this->val=val;
            this->next=NULL;
        }
};
int main(){
    node a(10),b(20);
    a.next=&b;

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
}

