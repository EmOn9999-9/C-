#include<iostream>
using namespace std;

class apple{
	int x;
	public:
		void getdata(int data){
			x=data;
		}
		void display(){
			cout<<"value of x: "<<x<<endl;
		}
};

class ball{
	int y;
	apple a;
	public:
		void getdata(int data1 , int data2){
			y=data2;
			a.getdata(data1);
		}
		void display(){
			a.display();
			cout<<"value of y: "<<y<<endl;
		}
};

int main(){
	ball b;
	b.getdata(5,7);
	b.display();
	return 0;
}
