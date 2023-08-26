#include<iostream>
using namespace std;
template <class T>
class A
{
	T a,b;
	public:
		A(T x, T y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
		}
};
int main()
{
	A <int>a1(20,30);
	A <char>a2('P','D');
	a1.show();
	a2.show();
	return 0;
}
