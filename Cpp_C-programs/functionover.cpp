#include<iostream>
using namespace std;
void program(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
	 for(int k=n-1;k>=i;k--)
	 {
	 	cout<<" ";
		 }	
		 for(int j=1;j<=i;j++)
		 {
		 	cout<<"*";
		 }
		 cout<<endl;
	}
}
void program(int n,int k )
{
	for(int i=n;i>=1;i--)
	{
		for(int j=k;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern1(int n)
{
	for(int i=n;i>=1;i--)
	{
	 for(int k=n-1;k>=i;k--)
	 {
	 	cout<<" ";
		 }	
		 for(int j=1;j<=i;j++)
		 {
		 	cout<<"*";
		 }
		 cout<<endl;
	}
}
int main()
{
/*	program(7);
	program(7,1);
      program(7);
      program(7,1);
  
  program(7);
  pattern(7);
  program(7,1);
  pattern1(7);*/
  pattern1(7);
  program(8,1);
  program(7);
  pattern(7);
}
