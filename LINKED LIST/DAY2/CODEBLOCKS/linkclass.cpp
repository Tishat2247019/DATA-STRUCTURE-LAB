#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
int data;
Node *next;
};

class linkedlist{
public:
    Node *head;

    linkedlist(){
    head=nullptr;
    }

    void insertend(int value){
    Node *newNode =new Node();
    if(head==nullptr){
       head=newNode;
        head->data=value;
        head->next=nullptr;
    }

    Node *check=head;
    while(check->next!=nullptr){
        check=check->next;
    }
    check->next=newNode;
    newNode->next=nullptr;
    newNode->data=value;

    }

    void display(){
    Node *check =  head;
    while(check!=nullptr){
        cout<<check->data<<"->";
        check=check->next;
    }
    cout<<"NULL"<<endl;
    }

    void insetbegin(int value){
    Node *newNOde = new Node();
    newNOde->next=head;
    newNOde->data=value;
    head=newNOde;

    }


};

int main(){
linkedlist l;
l.insertend(5);
l.insertend(6);
l.insertend(7);
l.insertend(8);
l.insetbegin(2);
l.insetbegin(1);
l.display();
return 0;

}
