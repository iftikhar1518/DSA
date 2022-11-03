//insertion at the start of the link list

#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};

void insertFront(Node **header, int data){              //void  = function return type     
                                                        //insertFront function name
	                                               //new node()   to allocate memory at the run time 
	Node *new_node = new Node();                 //node** new_node (  class type of pointer variable )
	                                                //assign data
	                                          
	new_node->data = data;                            //change the next node of this newnode 
	                                                  // to current head of linked list
	new_node->next = *header;                              // -> dot operator
	                                              //new_node should become the new head of linked list 
	*header = new_node;
	cout<< "Inserted Item : "<< new_node->data <<endl;  
	                                     
	
}

void printlist(Node* node)
{

   	cout<<"\n linked list : " ;
   	//as linked list wil end when Node is NULL
   	while(node != 0)
   	{
   		cout<< node->data << " ";
   		node = node->next;
	   }
	   
	   cout<<endl;
}

int main(){


	 cout<<"NAME : AKHTAR ALI   \n ID : 34241  \n BSSE \n DSA LAB 27/oct/2022";
	 
	Node* header = 0;
	insertFront(&header,4);
	insertFront(&header,5);
	insertFront(&header,6);
	insertFront(&header,7);
	insertFront(&header,8);
	insertFront(&header,9);

printlist(header);

return 0;
	
}
