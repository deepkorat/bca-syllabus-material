#include<iostream>
using namespace std;
template <class T>
void show(T a)
{
	cout<<"a : "<<a<<endl;
}
void show(int i)
{
	cout<<"a : "<<i<<endl;
}
int main()
{
	show('P');
	show(20001);
	show("Amit");
	return 0;
}
