/*
Sip no : 2-1
Write a C++ program using class which contains two data members of type integer.
Create and initialize the object using default constructor, parameterized constructor and parameterized constructor with default value.
Write a member function to display maximum from given two numbers for all objects.
*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class max
{
	int a,b;
	public:
	max()
	{
		cout<<"\nEnter 2 numbers : ";
		cin>>a;
		cin>>b;
	}

	max(int a1,int b1)
	{
		a=a1;
		b=b1;
	}

	max(float a2,float b2=10.5)
	{
		a=a2;
		b=b2;
	}


	void maximum()
	{
		if(a>b)
			cout<<endl<<a<<"is greater";
		else
			cout<<endl<<b<<"is greater";
	}
};

void main()
{
	float c,d;
	clrscr();
      //	cout<<endl<<"enter number";
      //	cin>>c;
      //	cin>>d;
	max a(12,56),b(11.5),e;
	a.maximum();
	b.maximum();
	e.maximum();
	getch();
}
