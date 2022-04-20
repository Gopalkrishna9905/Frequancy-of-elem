#include<iostream>
using namespace std;

void frequancy(int arr[],int n)
{
	int temp[20];
	int count ;
	int i , j;
	for(i = 0;i<n;i++)
	{
		count =1;
		if(arr[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					count++;
					arr[j]=-1;
				}
			}
				temp[i]= count;
		}
	
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]!=-1)
		{
			cout<<" the elem " << arr[i] <<" occour : " << temp[i]<<endl;
		}
	}
}

int main()
{
	int arr[10]={5,7,7,4,1,3,1,9,4,6};
	frequancy(arr,10);
}
