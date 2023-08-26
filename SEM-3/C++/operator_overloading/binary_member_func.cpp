#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{	
		}
		A(int i,int j)
		{
			a=i;
			b=j;
		}
		A operator + (A &);
		void show();
};
A A :: operator + (A &a1)
{
	A a2;
	a2.a=a+a1.a;
	a2.b=b+a1.b;
	return a2;
}
void A :: show()
{
	cout<<endl<<"a : "<<a<<endl<<"b : "<<b<<endl;
}
int main()
{
	A a1(10,20),a2(30,40);
	A a3;
	a3=a1+a2;
	a1.show();
	a2.show();
	a3.show();
	return 0;
}
