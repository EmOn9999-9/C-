#include<iostream>
using namespace std;

int main(){
	int *a= new int;
	*a=5;
	while(*a!=0){
		cout<<"hello world";
		*a=*a=1;
	}
	return 0;
}
