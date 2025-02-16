/* 
Write a program according to the specification given below :
* Create a class Teacher with data members tid and subject and member
	functions for reading and dispalying data members.
* Create another class Staff with data members sid and position, and member 
	functions for reading and displaying data members.
* derive a class Coordinator from teacher and Staff and the class must have
	its own data member department and member functions for reading and 
	displaying data members.
* Create two objects of Coordinator class and read and display their datails.
*/

#include<iostream>
using namespace std;

class teacher{
	int tid;
	string subject;
	public:
		void read(){
			cout<<"enter teacher id and subject ";
			cin>>tid>>subject;
		}
		void display(){
			cout<<endl<<"teacher id: "<<tid<<endl;
			cout<<"subject: "<<subject<<endl;
		}
	
}; 
class staff{
	int sid;
	string position;
	public:
		void read(){
			cout<<"enter staff id and position ";
			cin>>sid>>position;
		}
		void display(){
			cout<<"staff id: "<<sid<<endl;
			cout<<"position: "<<position<<endl;
		}
		
	
};
class coordinator: public teacher, public staff{
	string department;
	public:
		void read(){
			teacher::read();
			staff::read();
			cout<<"enter department ";
			cin>>department;
		}
		void display(){
			teacher::display();
			staff::display();
			cout<<"department: "<<department<<endl;
		}
		
};

int main(){
	coordinator a;
	a.read();
	a.display();
	return 0;
}
