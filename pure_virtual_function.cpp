/* pure virtual function */

#include<iostream>
using namespace std;

class nepal{
	public:
		virtual void fun()=0;    /// pure virtual function
};

class bharatpur : public nepal{
	public:
		void fun(){
			cout<<"bharatpur";
		}
};

class gaindakot : public nepal{
	public:
		void fun(){
			cout<<"gaindakot";
		}
};

int main(){
	nepal *p;
	bharatpur a;
	p=&a;
	p->fun();
	return 0;
}
