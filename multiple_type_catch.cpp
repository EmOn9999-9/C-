#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"enter a number: "<<endl;
	cin>>a;
	try{
		if(a==0){
			throw a;
		}else if(a==1){
			throw float(a);
		}else if(a==2){
			throw char(a);
		}else{
			cout<<"Number: "<<a<<endl;
		}
	}
	catch(...){
		cout<<"Exception detected"<<endl;
	}
	return 0;
}
