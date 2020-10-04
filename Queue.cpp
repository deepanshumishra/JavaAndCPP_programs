#include<iostream>
using namespace std;

#define max 6
int q[max];
int r = -1,f  = 0;

void enqueue()
{
	int item;
	if(r == max-1)
	{
		cout<<"queue is full."<<endl;
	}
	else
	{
		cout<<"enter number : ";
		cin>>item;
		q[++r] = item;
	}
}

void dequeue()
{
	int item; 
	if(r<f)
	{
		cout<<"queue is empty."<<endl;
	}
	else if(r==f)
	{
		item = q[f];
		f = 0;
		r = -1;
		cout<<"Deleted item : "<<item<<endl;
	}
	else
	{
		item = q[f++];
		cout<<"Deleted item : "<<item<<endl;
	}
}

void display()
{
	int i;
	if(r<f)
	{
		cout<<"queue is empty."<<endl;
	}
	else
	{
		for(i=f;i<=r;i++)
			cout<<q[i]<<" ";
		cout<<endl;
	}
}

int main()
{
	int ch;
	while(1)
	{
		cout<<"Choose : "<<endl<<"1. ENQUEUE"<<endl<<"2. DEQUEUE"<<endl<<"3. DISPLAY"<<endl<<"4. EXIT"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1 : 
			{
				enqueue();
				break;
			}
			case 2 : 
			{
				dequeue();
				break;
			}
			case 3 : 
			{
				display();
				break;
			}
			case 4 : 
			{
				exit(1);
				break;
			}
		}
	}

	return 0;
}