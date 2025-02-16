#include<iostream>
using namespace std;
class nepal{
	public:
		void fun(){
			cout<<"the euro is not for ronaldo";
		}
};

int main(){
	nepal n;
	nepal *ptr = &n;
	ptr->fun();
	return 0;
}
