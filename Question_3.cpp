#include<iostream>
using namespace std;

class teacher{
	int tid;
	string subject;
	public:
		teacher(){
			cout<<endl<<"enter teacher id and subject ";
			cin>>tid>>subject;
		}
		void display(){
			cout<<endl<<"teacher id :- "<<tid<<endl;
			cout<<" subject :- "<<subject<<endl;
		}
};

class staff{
	int sid;
	string position;
	public:
		staff(){
			cout<<"enter staff id and position ";
			cin>>sid>>position;
		}
		void display(){
			cout<<"staff id :- "<<sid<<endl;
			cout<<"position :- "<<position<<endl;
		}
};

class coordinator:public teacher , public staff{
	string department;
	public:
		coordinator(){
			cout<<"enter department ";
			cin>>department;
		}
		void display(){
			teacher::display();
			staff::display();
			cout<<"department :- "<<department<<endl;
		}
};

int main(){
	coordinator a,b;
	a.display();
	b.display();
	return 0;
}
