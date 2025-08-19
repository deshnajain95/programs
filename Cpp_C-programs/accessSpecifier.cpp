#include<string>
#include<iostream>
using namespace std;
class Animal
{
	public:
	String species;  
	int lifecycle;
	String food;
	 private:
	    String disease;
	    String home;
	    void animal1(String species,int lifecycle,String food)

	    {
	    	 species=s1;
		    lifecycle=l1;
		     food=f1; 
	    	
			}  
			void display()
			{
				System.out.println("species"+" "+species);
				System.out.println("lifecycle"+" "+lifecycle);
				System.out.println("food"+" "+food);
				}	
				
};
void Animal::int animal2(String disease,String home)
{
   disease=d1;
   home=h1;	
     return disease+home;	
 } 
 int main()
 { 
    Animal obj;
    obj.animal1("dog",10,"bones");
    obj.display();
    obj.animal2("external parasites","not define");
    
 
 	
 }
