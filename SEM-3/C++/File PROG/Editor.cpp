#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Editor
{
	char ch,FileName[10];
	ofstream pout;
	ifstream pin;
	public:
		void overwrite()
		{
			cout<<"Enter name of File :";
            cin>>FileName;
            pout.open(FileName);
            cout<<"Enter # for end"<<endl;
        	cout<<"Enter your Data "<<endl;
            while((ch=getchar())!='#')
            {
                pout<<ch;
            }
            pout.close();
		}
		void append()
		{
			cout<<"Enter name of File :";
			cin>>FileName;
			pout.open(FileName, ios::app | ios::out);
			cout<<"Enter # for end"<<endl;
        	cout<<"Enter your Data "<<endl;
			while((ch=getchar())!='#')
            {
                pout<<ch;
            }
            pout.close();
		}
		void begin()
        {
            cout<<"Enter name of File :";
            cin>>FileName;
            pin.open(FileName);
            if(!pin)
            {
                cout<<"File Does not Exist";
                //getch();
                return;
            }
            while(pin.eof()==0)
            {
                pin.get(ch);
                cout<<ch;
            }
            pin.close();
        }
        void location()
        {
        	int num;
        	cout<<"Enter name of File :";
            cin>>FileName;
            pin.open(FileName,ios::in);
            if(!pin)
            {
                cout<<"File Does not Exist";
                //getch();
                return;
            }
            cout<<"Enter the location from which you want to read : ";
            cin>>num;
        	pin.seekg(num,ios::beg);
            while(pin.eof()==0)
            {
                pin.get(ch);
				cout<<ch;
            }
            pin.close();
		}
};

int main()
{
	int ch;
	Editor e;
	/*do
	{*/
		cout<<"**------**MENU**------**"<<endl;
		cout<<"1. Write "<<endl;
		cout<<"2. Read "<<endl;
		cout<<"3. Exit "<<endl;
		cout<<"**------**----**------**"<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<endl;
				cout<<"**------**MENU**------**"<<endl;
				cout<<"1. Overwrite "<<endl;
				cout<<"2. Append "<<endl;
				cout<<"3. Exit "<<endl;
				cout<<"**------**----**------**"<<endl;
				cout<<"Enter your choice : "<<endl;
				cin>>ch;
				switch(ch)
				{
					case 1:
						e.overwrite();
						break;
					case 2:
						e.append();
						break;
					case 3:
						cout<<"quit"<<endl;
						break;
					default:
						cout<<"Invalid choice."<<endl;
				}
				break;
			case 2:
				cout<<endl;
				cout<<"**------**MENU**------**"<<endl;
				cout<<"1. beginning "<<endl;
				cout<<"2. location "<<endl;
				cout<<"3. Exit "<<endl;
				cout<<"**------**----**------**"<<endl;
				cout<<"Enter your choice : "<<endl;
				cin>>ch;
				switch(ch)
				{
					case 1:
						e.begin();
						break;
					case 2:
						e.location();
						break;
					case 3:
						cout<<"quit"<<endl;
						break;
					default:
						cout<<"Invalid choice."<<endl;
				}
				break;
			case 3:
				cout<<"Quit"<<endl;
				break;
			default:
				cout<<"Invalid chioce"<<endl;
		}
	//}while(ch!=3);
}
