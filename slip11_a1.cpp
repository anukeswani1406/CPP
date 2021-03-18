/*
Slip no : 11_1 
Write a C++ program to find area and volume of cylinder using Inline function. 
*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class cylinder
{
	float r,h;
	public:
	void getdata()
	{
		cout<<"\n Enter radius : ";
		cin>>r;
		cout<<"\n Enter height : ";
		cin>>h;
	}

	inline void area()
	{
		cout<<"\n Area of cylinder =\t"<<2*3.14*r*h;
	}

	inline void volume()
	{
		cout<<"\nVolume of clyinder =\t"<<3.14*r*r*h;
	}
};

void main()
{
	clrscr();
	cylinder c;
	c.getdata();
	c.volume();
	c.area();
	getch();
}
