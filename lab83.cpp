//Write a program for kth largest, kth smallest element of an array. 

//library
#include<iostream>
using namespace std;

//declaring function for arranging the array elements (sorting)
void sort(int a[],int n)
{
    int o,t,i;
 	
	//loop for arranging the array elements in ascending order
	//this step is important to get the required function as we need an order
 	do
 	{	o=0;
		for(i=0;i<(n-1);i++)
   		{	if (a[i]>a[i+1])
    			{ t=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=t;
     			  o+=1;
		    	}
		}
	}
	while(o!=0);
      
}

//declaring functions to find the kth maximum and kth minimum element of array
void kthlarge(int a[],int n,int k)
{ 
    cout<<"The "<< k<<"th largest element is "<<a[n-k]<<endl;
}
void kthsmall(int a[],int n,int k)
{ 
    cout<<"The "<< k<<"th smallest element is "<<a[k-1]<<endl;
}

//main function 
int main()
{	int a[10],n,k;
 	
	//ask user for the limit
	cout<<"How many elements should be there in the array? "<<endl;
 	cin>>n;
 	
	//ask user for array elements 
	cout<<" Enter array elements "<<endl;
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	//calling the function to arrange elements in order
	sort(a,n);
	
	//asks user for the value of k
	cout<<"The value of k is ";
	cin>>k;
	
	//calling functions for kth largest and smallest elements
	kthlarge(a,n,k);
	kthsmall(a,n,k);
	 
	
return 0;
}