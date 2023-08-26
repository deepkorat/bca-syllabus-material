#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			a=5;
			b=10;
		}
		void operator -- ();
		void show();	
};
void A :: operator -- ()
{
	a=--a;
	b=--b;
}
void A :: show ()
{
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
}
int main()
{
	A a1;
	a1.show();
	--a1;
	a1.show();
	return 0;
}
