#include<bits/stdc++.h>
using namespace std;
	int main()
	{
		int n,b;
			int count1=0;
		cout<<"enter the n value";
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			
			cout<<"enter the number";
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{ 
		int count=0;
			for(int j=0;j<n;j++) 
			{
				if(arr[i]==arr[j])
				{
					count++;
					
				}
	        }
	    	if(count>count1)
		    { 
		    count1=count;
			b=arr[i];
           	}
			
		}
	 cout<<b<<" ";
	 cout<<count1;	
	}