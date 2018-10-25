/* Q: Write a program to accept N numbers from the user and store them in an array. Then, accept another number from the user
      and search that using Linear Search.*/
#include<iostream>
using namespace std;
void linearsearch(int arr[],int size,int ele)
{
	int flag=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==ele)
		{
		   cout<<"Element "<<ele<<" is at "<<i<<" position"<<endl;
		   flag=1;
		   break;	
		} 
	}
	if(flag==0)
	  cout<<"Element not found";
}
int main()
{
	int size,ele;
	cout<<"Enter the size of array : ";
	cin>>size;
	int arr[size];
	cout<<"Enter elements ->"<<endl;
	for(int i=0;i<size;i++)
	   cin>>arr[i];
	cout<<"Enter the element to be searched : ";
	cin>>ele;
	linearsearch(arr,size,ele);
	return 0;
}

