#include<iostream>
using namespace std;
int main()

{
	int i,j,k,n;
	cout<<"enter the rows";
	cin>>n;
	

	for(i=1;i<=n;i++)
	{
		for(k=i;k<n;k++)
		{
			cout<<" ";
		}
		for(j=0;j<(2*i-1);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=n-1;i>0;i--)
	{
		for(k=i;k<n;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}


	return 0;
}