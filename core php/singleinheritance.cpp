//single inheritance-->
#include<iostream>
using namespace std;
class A{
	public: // access modifier
	int a,b,c; //data member
	void set()//method
	{
		cout<<"welcome to base class A"<<endl;
		
	 }
	 void put()//method
	 {
	 	cout<<"java"<<endl;
	 	
	  } 
};
class B: public A{
	public:
		void get()
		{
			int a;
			cout<<"enetr value of a"<<endl;
			cin>>a;
		}
};
int main()
{
	// A a1; // a1---> object of class A
	// a1.put();// its access the class A method
	//a1.set();
	
	
	B b1;
	b1.put();
	b1.set();
	b1.get();
}


