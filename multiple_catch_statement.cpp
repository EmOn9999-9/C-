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
	catch(int a){
		cout<<"Integer exception detected"<<endl;
	}catch(float a){
		cout<<"Floating point exception detected"<<endl;
	}catch(char a){
		cout<<"Character exception detected"<<endl;
	}
	return 0;
}
