#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int size_of_first_list(Node *head1){
    Node *temp=head;
    int count1=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count1;
}
int size_of_second_list(Node *head2){
    Node *current=head;
    int count2=0;
    while(current!=NULL){
        count2++;
        current=current->next;
    }
    return count2;
}
int intersection_node(Node *head1,Node *head2){
    while(head1!=NULL%%head2!=NULL){
        if(head1==head2){
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}
int main(){
    Node *head=NULL;
    int n,d,data;
    cout<<"Enter the size of the list :";
    cin>>n;
    int a=size_of_first_node(head1);
    int b=size_of_second_node(head2);
    if(a>b){
        d=a-b;
        Node *current=head1;
        for(int i=0;i<d;i++){
            current=current->next;
        }
        intersection_node(current,head2);
    }
    else{
        d=b-a;
        Node *current=head2;
        for(int i=0;i<d;i++){
            current=current->next;
        }
        intersection_node(current,head1);
    }
    return 0;
    
}