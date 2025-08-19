#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	
		if(age==18||age>18)
		{
			cout<<"elligible for vote";
		}
		else if(age<18&&age!=18)
		{
			cout<<"not elligible for vote";
		}
		
	
	return 0;
	}
