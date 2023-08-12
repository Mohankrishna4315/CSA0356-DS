#include<stdio.h>
int ls(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
int main()
{
	int arr[]={10,23,5,17,2,8,12,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=17;
	int index=ls(arr,n,key);
	if(index!=-1)
	printf("Key %d found at index in the array\n",key);
	else
	printf("Key %d not found in the array\n",key);
	return 0;
}
