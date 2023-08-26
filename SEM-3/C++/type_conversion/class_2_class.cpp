#include<iostream>
using namespace std;
class A
{
	int x,y,c;
	public:
		A(int i,int j)
		{
			x=i;
			y=j;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		void display()
		{
			cout<<"ans : "<<c<<endl;
		}
};
class B
{
	int e,f;
	public:
		B()
		{
			
		}
		B(A a1)
		{
			e=a1.getX();
			f=a1.getY();
		}
		void show()
		{
			cout<<"e is : "<<e<<endl;
			cout<<"f is : "<<f<<endl;
		}
};
int main()
{
	A a1(2,5);
	B b1;
	b1=a1;
	b1.show();
	return 0;

}
