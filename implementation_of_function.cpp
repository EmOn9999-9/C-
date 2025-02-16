#include<iostream>
using namespace std;

class one{
	public:
		void hello();
};

class two{
	public:
		void hello();
};

void one::hello(){
	cout<<"hello form one"<<endl;
}

void two::hello(){
	cout<<"hello form two"<<endl;
}

int main()
{
	one a;
	two b;
	a.hello();
	b.hello();
	return 0;
}
