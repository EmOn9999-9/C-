#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ifstream reading;
	ofstream writing;
	
	reading.open("file1.txt");
	writing.open("file2.txt");
	
	char name;
	while(reading.get(name)){
		writing.put(name);
	}
	cout<<"Everything is done :) ";
	
	reading.close();
	writing.close();
}
