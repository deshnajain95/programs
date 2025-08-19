#include<iostream>
using namespace std;
int main()
{
	int*** t;
	int a=2;
	int b=3;
	int c=5;
	int *r=&a;
	int *s=&b;
       t =&c;
	cout<<"address of a: "<<*r;
	cout<<"address of b: "<<*s;
	cout<<"address of c: "<<*t;
	cout<<***t;
	return 0; 
 } 
