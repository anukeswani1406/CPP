/*
Slip no 5_1 :
Write a C++ program to create a class Item with data members Item_Code, Item_Name, Item_Price.
Write member functions to accept and display Item information also display number of objects created for a class.
(Use Static data member and Static member function)	
*/

#include<iostream.h>
#include<conio.h>
class item
{
	int code,price;
	char i_name[20];
	static int cnt;
	public:
	void getdata()
	{
		cout<<"\nenter item code : ";
		cin>>code;
		cout<<"\nenter item name : ";
		cin>>i_name;
		cout<<"\nenter item price : ";
		cin>>price;
		cnt++;
	}

	void display()
	{
		cout<<"\n\nitem code = "<<code;
		cout<<"\nitem name = "<<i_name;
		cout<<"\nitem price = "<<price;
	}

	static void nob()
	{
		cout<<"\n number of objects created for class are "<<cnt;
	}
};

int item::cnt;

void main()
{
	clrscr();
	item ob[10];
	int n;

	cout<<"\n Enter how many items : ";
	cin>>n;

	for(int i=0;i<n;i++)
		ob[i].getdata();
	for( i=0;i<n;i++)
		ob[i].display();
	ob[n-1].nob();

	getch();
}
