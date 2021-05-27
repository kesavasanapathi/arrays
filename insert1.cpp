#include<iostream>
using namespace std;
int main()
{
	int n,position,value=100;
	cout<<"enter the arry size";
	cin>>n;
	cout<<"enter the position";
	cin>>position;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	 }  
	 if (position>=a[n])
	 {
	 	cout<<"position out of arry"/n;
	 }
	 for(int i=n-1;i>=position-1;i--)
	 {
	 	a[i+1]=a[i];
	 }
	 a[position-1]=value;
	 for(int i=0;i<=n;i++)
	 {
	 	cout<<a[i]<<" ";
	 }
	
	
}