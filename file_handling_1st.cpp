#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream a;
	a.open("hello.txt");
	string x = "ichha";
	a<<x<<endl;
	cout<<"done"<<endl;
	a.close();
}
