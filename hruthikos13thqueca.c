#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,m1=0,x=0,l;
	printf("enter the number of chairs in waiting room:");
	scanf("%d",&m);
	int arr[m];
	for(i=0;i<m;i++)
	{
		arr[i]=0;
	}
	while("true")
	{
		printf("\nenter the number of customer:");
		scanf("%d",&l);
		m1=l;
		system("CLS");
		
		
		if(m1!=0)
		{
			--m1;
			printf("\nNew customer is %d",l);
			printf("\n Barber is busy with 1 customer\n");
			printf("\n\tBarber chair\tis occupied");
		}
		else
		{
			printf("\nNo new customer\n");
			printf("Barber is sleeping now\n");
			printf("\t\tBarber chair\tis empty\n");
		}
		if(m1>m)
		{
			x=m1;
			m1=m;
		}
		for(i=0;i<m1;i++)
		{
			arr[i]=1;
		}
		for(i=0;i<m;i++)
		{
			if(arr[i]==1)
			   printf("\n\twaiting chair-\toccupied is%d",i+1);
			else
			   printf("\n\twaiting chair-\tempty is%d",i+1);
	  }
	  printf("\nCustomer in waiting:%d\n",m1);
	  if(arr[m-1]==1)
	  {
	  	printf("\nwaiting room is full");
	  	if(x!=0)
	  	{
	  		printf("\nrest of the\tcustomer left is%d",x-m);
			}
		}
		printf("\nPress 1 to continue and 0 to exit:");
		scanf("%d",&l);
		if(l==0)
		{
			break;
		}
		printf("\n 1 customer left\n");
		x=0;
		for(i=0;i<m;i++)
		{
			arr[i]=0;
		}
		}
		getch();
	}
