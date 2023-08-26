#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			cout<<"Enter value : "<<endl;
			cin>>a;
			cout<<"Enter value : "<<endl;
			cin>>b;
		}
		void get()
		{
		    cout<<"Testing";
		}
		operator int()
		{
			float x;
			x=a*b;
			return x;
		}
} ;
int main()
{
	A a1;
	int y=a1;
	//y.get();
	cout<<endl<<"y is : "<<y<<endl;
	return 0;
}
