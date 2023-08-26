#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void operator +();
		void display ();
		A()
		{
			cout<<"Enter two value : "<<endl;
			cin>>a>>b;
		}
};
void A :: operator +()
{
	a=++a;
	b=a+b;
}
void A :: display()
{
	cout<<endl<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
}
int main()
{
	A a1;
	a1.display();
	+a1;
	a1.display();
	return 0;
}
