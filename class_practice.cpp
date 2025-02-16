#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int roll;
	
		int getdata(){
			cout<<"enter name and roll"<<endl;
			cin>>name>>roll;
		}
		
		int display(){
			cout<<"name :"<<name<<endl;
			cout<<"roll :"<<roll<<endl<<endl;
		}
};

int main()
{
	student a,b;
	a.getdata();
	b.getdata();
	
	cout<<endl<<endl<<"displaying data "<<endl;
	a.display();
	b.display();
	
	return 0;
}
