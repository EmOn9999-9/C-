#include<iostream>
using namespace std;

class apple{
	public:
		virtual ~apple(){
			cout<<"apple"<<endl;
		}
};

class ball{
	public:
		~ball(){
			cout<<"ball"<<endl;
		}
};

class cat:public apple , public ball{
	public:
		~cat(){
			cout<<"cat"<<endl;
		}
};

int main(){
	apple *a=new cat;
	delete a;
	return 0;
}
