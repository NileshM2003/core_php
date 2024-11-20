//1. arthimetic opration//
#include<iostream>
using namespace std;
class arthimetic{
	public:
		int a,b,add;
		void adder()
		{
			cout<<"enter two value:"<<endl;
			cin>>a>>b;
		    add=a+b;
		    cout<<"add is:"<<add<<endl;
		}
		float c,d,sub;
		void subt()
	    {
	    	cout<<"enter two values:"<<endl;
	    	cin>>c>>d;
	    	sub=c-d;
	    	cout<<"sub is:"<<sub<<endl;
		}
		int e,f,mul;
		void multi()
		{
		    cout<<"enter two values:"<<endl;
	    	cin>>e>>f;
	    	mul=e*f;
	    	cout<<"mul is:"<<mul<<endl;	
		}
		double i,j,div;
		void divs()
		{
		    cout<<"enter two values:"<<endl;
	    	cin>>i>>j;
	    	div=i/j;
	    	cout<<"div is:"<<div<<endl;	
		}
		
};
int main()
{

 arthimetic s1;
s1.adder();
s1.subt();
s1.multi();
s1.divs();
}
