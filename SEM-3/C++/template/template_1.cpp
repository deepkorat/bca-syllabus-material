#include<iostream>
using namespace std;
template <class T>
void show (T a, T b)
{
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
}
int main()
{
	show(8.9,7.0);
	show(9,80);
	return 0;
}
