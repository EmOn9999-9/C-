/*using oop
private
initialize constructor
member function result*/
#include<iostream>
using namespace std;

class calculate{
	public:
		int l,b,h;
		calculate(){
			cin>>l>>b>>h;
		}
		int area(){
			return l*b;
		}
		int volume(){
			return l*b*h;
		}
};

int main(){
	cout<<"enter length , breadth and height"<<endl;
	calculate a();
	cout<<"area is "<<a.area()<<endl<<"volume is "<<a.volume();
	return 0;
}
