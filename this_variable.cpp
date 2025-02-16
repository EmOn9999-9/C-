#include<iostream>
using namespace std;
class nepal{
	int x,y;
	public:
		void fun(int x, int y){
			this->x=x;
			this->y=y;
		}
		void display(){
			cout<<x<<endl;
			cout<<y<<endl;
		}
};

int main(){
	nepal n;
	n.fun(2,5);
	n.display();
	return 0;
}
