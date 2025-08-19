#include<iostream>
using namespace std;
int a;
int b;
int c;
void add1()
{
  a=5,b=6;
  c=a+b;
  cout<<c;
  	
}
void add2(int a,int b)
{
	c=a+b;
	cout<<c;
}
int add3()
{
	a=10,b=20;
	c=a+b;
	return c;
	}	
	int add4(int a,int b)
	{
		c=a+b;
		return c;
	}
	int main()
	{
		
		add1();
		cout<<endl;
		add2(10,11);
		cout<<endl;
	    // int x=	add3();
	     cout<<add3()<<endl;
	     int y=add4(2,3);
	     cout<<y<<endl;
	     return 0;
	}

