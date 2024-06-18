#include<stdio.h>
int main()
{
	 int arr[5];
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("enter value for index:%d",i);
		scanf("%d",&arr[i]);
		
	}
	
	printf("\n befor sorting :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	
	printf("\nafter sorting :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
}
