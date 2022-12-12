#include<bits/stdc++.h>
using namespace std;


struct Node{
int data;
Node *next;
};

void insertend(Node *&head,int value){
Node *newNode =  new Node();
if(head==nullptr){
    head=newNode;
    head->data=value;
    head->next=nullptr;
}
Node *check = head;
while(check->next!=nullptr){
    check=check->next;
}
check->next=newNode;
newNode->next=nullptr;
newNode->data=value;
}

void print(Node *head){
while(head!=nullptr){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<"NULL"<<endl;

}

void search(Node *head,int value){
Node *check =  head;
while(check!=nullptr){
    if(check->data==value){
        cout<<"found"<<endl;
    }
    check=check->next;
}

}

int main(){
Node *head=nullptr;
insertend(head,1);
insertend(head,2);
insertend(head,3);
insertend(head,4);
print(head);
search(head,1);
return 0;
}

