#include<iostream>
using namespace std;
class A
{
	template <class T>
	class inner
	{
		public:
			T i;
			inner ()
			{
			}
			inner(T t)
			{
				i=t;
			}
	};
	inner <int> i1;
	inner <char> i2;
	public:
		A (int i,char c)
		{
			i1=i;
			i2=c;
		}
		void show()
		{
			cout<<i1.i<<endl<<i2.i<<endl;
		}
};
int main()
{
	A a1(28,'A');
	a1.show();
	return 0;
}
