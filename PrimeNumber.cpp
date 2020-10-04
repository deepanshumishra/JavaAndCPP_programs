#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cout<<"enter the no. to check";
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
    	if(n%i==0)
    	{
    		cout<<"not prime";
    		break;
    	}

    }
    if(i*i>n)
    {
    	cout<<"prime no.";
    }
	return 0;
}