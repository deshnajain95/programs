#include<iostream>
using namespace std;
int main()
{
	int temp=0;
	int num1[]={8,4,5};
	int num2[]={1,2,6};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(num1[i]>num2[j])
			{
			temp=num1[i];
			num1[i]=num2[j];
			num2[j]=temp;
			cout<<num1[i]<<endl;
			break;	
			}
			else
			{
				temp=num1[i];
				cout<<temp;
			}
		}
	}
	cout<<"sorted array"<<temp;
	return 0;
 } 
