#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

int main(){
    Node *head=new Node(3);
    Node *temp1=new Node(5);
    Node *temp2=new Node(6);
    head->next=temp1;
    temp1->next=temp2;
    return 0;
}