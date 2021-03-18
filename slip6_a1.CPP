/*
slip no : 6_1 
Write a C++ program to create a class which contains two dimensional integer array of size mXn. 
Write a member function to display sum of all elements of entered matrix. 
(Use Dynamic Constructor for allocating memory and Destructor to free memory of an object)
*/

#include<conio.h>
#include<iostream.h>

int main()
{
	int r,c,sum=0;
	clrscr();

	cout<<"\n Enter dimension ";
	cin>>r;
	cin>>c;

	int **a;
	a=new int*[r]; //[s];

	for(int i=0;i<r;i++)
	{      a[i]=new int[c];
	}

	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"\n enter data : ";
			cin>>a[i][j];
		}
	}

	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}

	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{

			sum=sum+a[i][j];
		}
	}

	cout<<"\n sum of all elements of matrix : "<<sum;
	getch();
	return 0;
}
