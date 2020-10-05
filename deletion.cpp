#include<iostream>
using namespace std;
void deletion(int a[],int pos, int n)
{
	int i;
	int p = pos;
	for(i=p;i<n;i++)
		a[i] = a[i+1];
	n = i-1;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main()
{
	int n,a[10],i,pos;
	cout<<"enter the no. elements : ";
	cin>>n;
	cout<<"enter elements : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	cout<<"enter position to delete : ";
	cin>>pos;
	deletion(a,pos,n);
	return 0;
}