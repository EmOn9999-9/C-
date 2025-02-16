#include<iostream>
using namespace std;

template<class nepal>
void add(nepal a, nepal b){
	cout<<a+b<<endl;
}

int main(){
	add(1,2);
	add(3.5,4.5);
	add('a','b');
	return 0;
}
