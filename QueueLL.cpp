#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
typedef struct node * NODE;
NODE front = NULL, rear = NULL;

void enqueue()
{
	NODE temp;
	int x;
	temp = (NODE)malloc(sizeof(NODE));
	cout<<"Enter data : ";
	cin>>x;
	temp->data = x;
	if(rear == NULL)
	{
		rear = temp;
		temp->next = NULL;
		front = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
		temp->next = NULL;
	}
}

void dequeue()
{
	NODE ptr;
	if(front==NULL && rear==NULL)
		cout<<"Queue is empty.";
	else if (front==rear)
	{
		ptr = front;
		cout<<"Deleted item : "<<ptr->data;
		ptr->next = NULL;
		free(ptr);
		front = NULL;
		rear = NULL;
	}
	else
	{
		ptr = front;
		cout<<"Deleted item : "<<ptr->data;
		front = ptr->next;
		ptr->next = NULL;
		free(ptr);
	}

}

void display()
{
	if (front==NULL && rear==NULL)
		cout<<"Queue is empty.";
	else
	{
		NODE ptr;
		ptr = front;
		while(ptr!=rear)
			{
				cout<<ptr->data<<" --> ";
				ptr = ptr->next;
			}
			cout<<ptr->data<<" --> ";
			cout<<"NULL.";
	}
}



int main()
{
	int choice;
	while(1)
	{
		cout<<"ENTER CHOICE"<<endl<<"1. ENQUEUE"<<endl<<"2. DEQUEUE"<<endl<<"3. TRAVERSE"<<endl<<"4. EXIT"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: 
			{	
				enqueue();
				break;
			}
			case 2: 
			{
				dequeue();
				break;
			}
			case 3: 
			{
				display();
				break;
			}
			case 4:
			{
				exit(1);
				break;
			}

		}
		cout<<endl;
	}
	return 0;
}