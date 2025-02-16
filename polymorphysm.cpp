/*if virtual is used in fun function the it is virtual function
it assigine value in run time. if it is used then output is ball.
else output is apple. */

#include<iostream>
using namespace std;
class apple{
	public:
		/*virtual*/ void fun(){  /// cirtual function
			cout<<"apple"<<endl;
		}
};
class ball:public apple{
	public:
		void fun(){
			cout<<"ball"<<endl;
		}
};
int main(){
	apple *p;
	ball b;
	p=&b;
	p->fun();
	return 0;
}
