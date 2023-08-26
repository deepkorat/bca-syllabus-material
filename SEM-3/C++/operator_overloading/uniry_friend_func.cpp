#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			cout<<"Enter any two number : "<<endl;
			cin>>a>>b;
		}
		void show();
		friend void operator - (A &a1);	
};
void operator - (A &a1)
{
	a1.a=-a1.a;
	a1.b=-a1.b;
}
void A :: show()
{
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
}
int main()
{
	A a1;
	-a1;
	a1.show();
	return 0;
}
