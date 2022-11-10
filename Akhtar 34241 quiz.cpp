#include <iostream>

using namespace std;

class Node
{
    public:
    string data;
    Node *next;
};
void insert(Node **add ,string data)
{
    Node *new_node = new Node();
    new_node ->data=data;
    new_node->next=NULL;
    Node *last=*add;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}
void print(Node *add)
{
    cout<<" link list :  "<<endl;
    while(add!=0)
    {
        cout<<add->data<<" "<<add->next<<" ";
        add=add->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=new Node();
     Node *second=new Node();
      Node *third=new Node();
      head->data=" Akhtar ALi ";
      head->next=second;
      second->data="34241";
      second->next=third;
      third->data="0346";
      third->next=0;
      insert(&head,"abc");
      print(head);
    return 0;
}
