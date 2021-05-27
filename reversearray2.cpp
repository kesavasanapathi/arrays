#include<iostream>
using namespace std;
int main()
{
	int n,j,i,t,temp;
	cout<<"enter the array size";
	cin>>n;
	int a[5];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the array element";
		cin>>a[i];
	}
	for(int i=0,j=n-1;i<(n/2);i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	} 
}
