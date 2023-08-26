#include<iostream>
using namespace std;
template<class T1,class T2>
class A
{
	T1 a;
	T2 b;
	public:
		A(T1 i,T2 j)
		{
			a=i;
			b=j;
		}
		void show()
		{
			cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
		}
};
int main()
{
	A <int,float> a1(21,2.33);
	a1.show();
	A <char,int> a2('P',23);
	a2.show();
	A <string,float> a3("AMIT",19.97);
	a3.show();
	return 0;
}
