// multiple inheritance
#include<iostream>
using namespace std;
class base1{
	public:
		
		void show()
		{
			cout<<"excuting base1"<<endl;
		}
};
class base2{

	public:
		
		void show1()
		{
			cout<<"excuting base2"<<endl;
		}
};
class derived:public base1,public base2{
	public:
		
		void show2()
		{
			cout<<"excuting derived class"<<endl;
		}
};
int main()
{

derived d;
   d.show();
   d.show1();
   d.show2();
}
