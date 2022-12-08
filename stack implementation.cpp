#incldue <iostream>
using namespace std;

struct Node 
{
	int data;
	
	Node *link;
};

// top pointer to keep track of the top of the stack 

Node *top = Null;
//Funtion to check if stack is empty or not 
bool isempty()
{
	if(top == NULL)
	return true;
	else 
	{
		return false;
}
}
//Function to insert an element in stack 
void push(int value)
{
	Node *ptr = new Node();
	ptr->data = value;
	ptr->link = top;
	top = ptr;
}

void pop()
{
	if(isempty())
	{
	
	cout<<"stck is empty  ";
}
else
{
	Node *ptr = top;
	top = top -> link;
	delete(ptr);
}
}

void showTop()
{
	if ( isempty())
	{
		cout<<"Stack is empty";
	}
	else 
	{
		cout<<"Element at top is : "<<top->data;
	}
}

//FUnction to display the stack 

void displayStack()
{
	if(isempty())
	{
		cout<<"stack is empty ";
		
	}
	else 
	{
		Node *temp=top;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
		}
		cout<<"\n";
	}
}


int main()
{
	
	cout<<"NAME : AKHTAR ALI \n ID : 34241 \n Dept : BSSE  \n Date : 12/8/2022"
	
	int choice, flag=1, value;
	//menu Driven program using switch
	while( flag = 1)
	{
		cout<<"\n1.push 2.pop 3.showtop 4.displayStack 5.exit\n";
		cin>>choice;
		while(choice)
		{
			
		}
	}
	
}


