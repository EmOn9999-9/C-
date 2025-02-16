#include<iostream>
using namespace std;

class shape{
	public:
		virtual void area()=0;
};

class triangle:public shape{
	int length , height ;
	float A;
	public:
		triangle(){
			cout<<"enter length and height of triangle ";
			cin>>length>>height;
			A=(length*height)/2.0;
		}
		void area(){
			cout<<endl<<"area of triangle is "<<A;
		}
};

class rectangle:public shape{
	int length , breadth ;
	float A;
	public:
		rectangle(){
			cout<<"enter length and breadth of rectangle ";
			cin>>length>>breadth;
			A=length*breadth;
		}
		void area(){
			cout<<endl<<"area of rectangle is "<<A;
		}
};

int main(){
	shape *p;
	triangle a;
	rectangle b;
	p=&a;
	p->area();
	p=&b;
	p->area();
	return 0;
}
