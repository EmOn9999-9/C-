#include<iostream>
using namespace std;

template<class A , class B >
void swap(A &a , B &b){
	B temp;
	temp=a;
	a=b;
	b=temp;
}

int main(){
	int x=1;
	float y= 2.5;
	cout<<"x ="<<x<<endl;
	cout<<"y ="<<y<<endl<<endl;
	swap(x,y);
	cout<<"x ="<<x<<endl;
	cout<<"y ="<<y;
	return 0;
}
