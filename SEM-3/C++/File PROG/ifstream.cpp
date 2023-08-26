#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float f;
	string s;
	int i;
	ifstream pin("file.txt");
	while(!pin.eof())
	{
        getline(pin,s);
        cout<<s<<endl;
	}
	pin.close();
	return 0;
}
