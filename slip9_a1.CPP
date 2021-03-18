/*
Slip no : 9_1 
Write a C++ program to create a class Person which contains data members as P_Name, P_City, P_Contact_Number.
Write member functions to accept and display five Persons information. 
Design User defined Manipulator to print P_Contact_Number. 
(For Contact Number set right justification,
maximum width to 10 and fill remaining spaces with *) 
*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class person
{
	char p_name[20],p_city[10];
	long int p_c_no;
	public:
	void getdata()
	{
		cout<<"\n enter person name : ";
		cin>>p_name;
		cout<<"\n enter persons city : ";
		cin>>p_city;
		cout<<"\n enter person contact no : ";
		cin>>p_c_no;
	}


	void display()
	{
		cout<<"\nperson name = "<<p_name;
		cout<<"\nperson city = "<<p_city<<"\nContact : ";

		cout.width(10);
		cout.fill('*');

		cout<<p_c_no;

	}
};

void main()
{
	int i;
	clrscr();
	person p[2];

	for(i=0;i<2;i++)
	{
		p[i].getdata();
	}

	for(i=0;i<2;i++)
	{
		p[i].display();
	}

	getch();
}
