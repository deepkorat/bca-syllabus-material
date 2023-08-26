#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s="Som-Lalit Inst. of Computer Applications";
	ofstream file;
	file.open("pr.txt",ios::out);
	file<<s<<endl;
	file.close();
	return 0;
}
