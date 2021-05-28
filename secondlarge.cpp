#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the n value";
	cin>>n;
	int a[n];
	int l,l2;
	
	for(int i=0;i<n;i++)
	{
		cout<<"enter arry elements";
		cin>>a[i];
	}
	l=INT_MIN,l2=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			l2=l;
	        l=a[i];
		}
		if(a[i]<l&&a[i]>l2)
		{
			l2=a[i];
		}
	}
	cout<<l2;
}