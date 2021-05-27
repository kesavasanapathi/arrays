#include<iostream>
using namespace std;int main()
{
	int n;
	int pos=3;
	cout<<"enter the n value";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}