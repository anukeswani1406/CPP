/* 
Slip no : 19_1 
Write a C++ program to create a class Integer. 
Write necessary member functions to overload the operator unary pre and post decrement �--�  for an integer number. 
*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class integer
{
	int no;
	public:
	integer(){}

	integer(int num)
	{
		no=num;
	}

	integer operator--()
	{
		--no;
		return *this;
	}

	integer operator--(int) //post decrement
	{
		integer temp=*this;
		no--;
		return temp;
	}

	void display()
	{
		cout<<"\nNo = "<<no;
	}

};

void main()
{
	integer i(10),i1(10),i3;
	clrscr();

	cout<<"\nAfter postdecrement : ";
	i3=i--;
	i3.display();

	cout<<"\nAfter predecrement : ";
	i3=--i1;
	i3.display();

	getch();
}
