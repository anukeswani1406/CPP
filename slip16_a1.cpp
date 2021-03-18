/* Slip no : 16_1 Write a C++ program to accept n numbers from user through Command Line Argument. Store all positive and negative numbers in two different arrays. Display contents both arrays. */

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int pos[20],neg[20],n,j=0,k=0;
	clrscr();
	for(int i=1;i<argc;i++)
	{
		n=atoi(argv[i]);
		if(n>=0)
		{
			pos[k]=n;
			k++;
		}
		else
		{
			neg[j]=n;
			j++;
		}
	}

	cout<<"\n positive no array is : ";
	for(i=0;i<k;i++)
	{
		cout<<"\t"<<pos[i];
	}

	cout<<"\n Negative no array is : ";
	for(i=0;i<j;i++)
	{
		cout<<"\t"<<neg[i];
	}

	getch();
}
