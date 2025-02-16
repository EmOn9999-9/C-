#include<iostream>
using namespace std;

class CSIT{
	int num;
	public:
		void get(int x){
			num=x;
		}
		void operator+=(CSIT b){
			num+=b.num;
		}
		void display(){
			cout<<"Num= "<<num<<endl;
		}
};

int main(){
	CSIT a,b;
	a.get(5);
	b.get(2);
	a.display();
	a+=b;		///this is equal to a.operator+=(b)
	a.display();
	return 0;
}
