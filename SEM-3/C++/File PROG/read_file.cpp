#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream file("sample.txt",ios::in);
char ch;
while(!file.eof())
{
file.get(ch);
cout<<ch;
}
return 0;
}
