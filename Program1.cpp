/* Q: Write a menu driven program that implements following operations on a  linear array:
    -> Insert a new element at a specified position
    -> Delete an element either whose value is given or whose position is given
    -> To find the location of a given element
    -> To display the elements of the linear array
*/

#include<iostream>
using namespace std;
int insert_ele(int arr[],int n,int index,int value)
{
   for (int i = n - 1; i >= index - 1; i--)
        arr[i+1] = arr[i];
   arr[index] = value;	
   return (n+1);
}
int delete_ele(int arr[],int n,int index)
{
   n--;
   for(int i=0;i<n;i++)
   {
	   if(i==index)
	   {
		   arr[i]=arr[i+1];
		   index++;
	   }
   }
   return n;	
}
int search_ele(int arr[],int n,int ele)
{
   for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
	      return i;
	}
	return 0;
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int n,ch,index,value,ele,s;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements ->"<<endl;
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	cout<<"1(insert)"<<endl<<"2(delete)"<<endl<<"3(find)"<<endl<<"4(display)"<<endl<<"5(exit)"<<endl;
	while(1)
	{
		cout<<"Enter the choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cin>>index;
					cin>>value;
					n=insert_ele(arr,n,index,value);
					break;
				}
			case 2:
				{
					cin>>index;
					n=delete_ele(arr,n,index);
					break;
				}
			case 3:
				{
					cin>>ele;
					s=search_ele(arr,n,ele);
					cout<<"Element "<<ele<<" is at "<<s<<" position"<<endl;
					break;
				}
			case 4:
				{
					display(arr,n);
					break;
				}
			case 5:
				break;
		}
	}
}
