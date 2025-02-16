#include<iostream>
using namespace std;

class CSIT{
	int num;
	public:
		void get(int x){
			num=x;
		}
		void display(){
			cout<<"Num= "<<num<<endl;
		}
		friend void operator+=(CSIT &a , CSIT b);
};

void operator+=(CSIT &a , CSIT b){
	a.num+=b.num;
}

int main(){
	CSIT a,b;
	a.get(5);
	b.get(2);
	a.display();=
	a+=b;		///this is equal to a.operator+=(b)
	a.display();
	return 0;
}
