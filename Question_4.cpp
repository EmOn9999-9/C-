#include<iostream>
using namespace std;

class lecture{
	int id;
	string name;
	public:
		void readdata(){
			cout<<endl<<"enter id and name ";
			cin>>id>>name;
		}
		void printdata(){
			cout<<endl<<"id :- "<<id<<endl;
			cout<<"name :- "<<name<<endl;
		}
};

class part_time:public lecture{
	float payperhr;
	public:
		void readdata(){
			lecture::readdata();
			cout<<"enter pay per hour ";
			cin>>payperhr;
		}
		void printdata(){
			lecture::printdata();
			cout<<"salary per hour :- "<<payperhr<<endl;
		}
};

class full_time:public lecture{
	float paypermonth;
	public:
		void readdata(){
			lecture::readdata();
			cout<<"enter pay per month ";
			cin>>paypermonth;
		}
		void printdata(){
			lecture::printdata();
			cout<<"salary per month :- "<<paypermonth<<endl;
		}
};

int main(){
	part_time a;
	full_time b;
	a.readdata();
	b.readdata();
	a.printdata();
	b.printdata();
	return 0;
}
