#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ofstream write;
	write.open("file1.txt");
	
	string name;
	cout<<"Enter your name: ";
	getline(cin,name);
	write<<name;
	cout<<"Everything is done :) ";
	
	
	write.close();
}
