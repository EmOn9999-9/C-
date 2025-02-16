#include<iostream>
using namespace std;

template <class A , class B>
void fun(A a , B b){
	cout<<a<<endl;
	cout<<b<<endl;
}

int main(){
	int a=5;
	float b= 5.5;
	char c='x';
	fun(a,b);
	fun(a,c);
	fun(b,c);
	return 0;
}
