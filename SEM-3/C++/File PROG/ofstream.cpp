#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float f=5.11;
	char ch[20]="amit bardhan";
	string s="amit s bardhan";
	int i=1985;
	ofstream pout("file.txt");
	pout<<ch<<endl;
	pout<<s<<endl;
	pout<<f<<endl;
	pout<<i<<endl;
	pout.close();
	return 0;
}
