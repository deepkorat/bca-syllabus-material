#include<iostream>
using namespace std;
class A
{
	template <class T>
	class B
	{
		public:
			T i;
			B()
			{
			}
			B(T a)
			{
				i=a;
			}
	};	
	B <int>b1;
	B <char>b2;
	public:
		A(int i,char ch)
		{
			b1=i;
			b2=ch;
		}
		void show()
		{
			cout<<endl<<b1.i<<endl<<b2.i<<endl;
		}
};
int main()
{
	int i;
	char ch;
	cout<<"Enter first interger value and second character value : "<<endl;
	cin>>i>>ch;
	A a1(i,ch);
	a1.show();
	return 0;
}
