// Write a program to merge 2 arrays, find maximum of 2 arrays, find minimum of 2 arrays.

//library
#include<iostream>
using namespace std;

//declaring function for merging the arrays
void merge (int a1[],int l,int a2[],int k,int m[])
{	
    int i;
	//loop for merging the arrays 
    for(i=0;i<l;i++)
    m[i]=a1[i];
    	for(i=l;i<l+k;i++)
        m[i]=a2[i-l];		
	    cout<<"The merged array is"<<endl;
            for(i=0;i<l+k;i++)
            cout<<m[i]<<endl;
}

//declaring function for finding the maximum and minimum of the two arrays
void sort(int a1[],int l)
{	int o,t;
 	
	//loop for arranging the array elements in ascending order(sorting)
	//we do this step as it makes it easier to find max and min
 	do
 	{	o=0;
		for(int i=0;i<(l-1);i++)
   		{
   		    if (a1[i]>a1[i+1])
    			{ t=a1[i];
     			  a1[i]=a1[i+1];
    			  a1[i+1]=t;o++;
			    }
		}
	}
	while(o!=0);
        cout<<"Maximum of the elements in both the array is "<<a1[l-1]<<endl;
	    cout<<"Minimum of the elements in both the array is "<<a1[0]<<endl;
}

//main function 
int main(){	
    
    //declaring variables
    int a1[10],a2[10],m[20],l,k;
 	
	//ask user for the limit of first array
	cout<<"How many elements should be in array1? "<<endl;
 	cin>>l;
 	
	//ask user for array elements 
	cout<<"Enter array elements for array1"<<endl;
 	for(int i=0;i<l;i++)
  	cin>>a1[i];
 	
	//ask user for the limit of second array
	cout<<"How many elements should be there in array2? ";
 	cin>>k;
 	
	//ask user for array elements 
	cout<<"Enter array elements for array2"<<endl;
 	for(int i=0;i<k;i++)
  	cin>>a2[i];
	
	//calling the function to merge arrays
	merge (a1,l,a2,k,m);
	//calling function to find minimum of maximum of the two arrays
	sort(m,(l+k)); 
	
return 0;
}