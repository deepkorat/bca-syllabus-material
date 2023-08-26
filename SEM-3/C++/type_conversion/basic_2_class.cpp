#include<iostream>
using namespace std;
class A 
{
	int x,y;
	public:
		A ()
		{
		}
		A (int i)
		{
			x=i+2;
			y=i+3;
		}
		void display()
		{
			cout<<"x is : "<<x<<endl<<"y is : "<<y<<endl;
		}
};
int main()
{
	A a1;
	int a;
	cout<<"Enter value : "<<endl;
	cin>>a;
	cout<<endl;
	a1=a;
	a1.display();
	return 0;
}
