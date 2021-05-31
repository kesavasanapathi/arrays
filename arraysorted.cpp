#include<iostream>
using namespace std;
int main()

{
	int n;
	cout<<"enter the arry  size";
	cin>>n;int flag=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
		flag=1;	
		break;
		}
	}
	if(flag==1)
	{
		cout<<"not sorted";
	}
	else
	{
		cout<<"sorted";
	}
}