#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A(){
		}
		A(int i)
		{
			/*cout<<endl<<"Entre two numbers : "<<endl;
			cin>>a>>b;*/
			a=10;b=20; 
		}
		
		A operator -();
		void display();
};
A A :: operator -()
{
	A a3;
	a3.a=-a;
	a3.b=-b;
	return a3;
}
void A :: display()
{
	cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
}
int main()
{
	A a1(1),a2(2),a3;
	cout<<"values of a1 : "<<endl;
	a1.display();
	cout<<endl<<"values of a2 : "<<endl;
	a2.display();
	a2=-a1;
	a3=a2;
	a3.display();
	cout<<endl<<"values of a1 : "<<endl;
	a1.display();
	cout<<endl<<"values of a2 : "<<endl;
	a2.display();
	return 0;
}
