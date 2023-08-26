#include<iostream>
using namespace std;
template <class T1,class T2>
void show (T1 a,T2 b)
{
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
}
int main()
{
	show("test",3);
	show('P',2331);
	show(30,"test");
	return 0;
}
