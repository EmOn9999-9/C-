#include<iostream>
using namespace std;

template<class T>
class apple{
	T x;
	T y;
	public:
		apple(T num1, T num2){
			x=num1;
			y=num2;
		}
		void display(){
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};

int main(){
	apple <int> a (1,2);
	apple <float> b(1.5,4.6);
	apple <char> c('g','r');
	a.display();
	b.display();
	c.display();
	return 0;
}
